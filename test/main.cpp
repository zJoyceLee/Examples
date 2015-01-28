#include <iostream>
#include <memory>

class Foo {
public:
    Foo() {
        std::cout << "Foo()" << std::endl;
    }

    ~Foo() {
        std::cout << "~Foo()" << std::endl;
    }
};

int main()
{
//    Foo * f = new Foo();
    auto f = std::make_shared<Foo>();
    f = std::make_shared<Foo>();

    std::cout << "-------------------" << std::endl;

    return 0;
}
