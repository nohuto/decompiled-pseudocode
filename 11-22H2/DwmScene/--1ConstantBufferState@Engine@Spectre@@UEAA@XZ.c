/*
 * XREFs of ??1ConstantBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009DC40
 * Callers:
 *     ??_EConstantBufferState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009DD30 (--_EConstantBufferState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::CommandListState::CommandListState_::_1_::dtor$2 @ 0x1800EB13E (_Spectre--Engine--CommandListState--CommandListState_--_1_--dtor$2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ConstantBufferState::~ConstantBufferState(Spectre::Engine::ConstantBufferState *this)
{
  *(_QWORD *)this = &Spectre::Engine::ConstantBufferState::`vftable';
  `eh vector destructor iterator'(
    (char *)this + 2312,
    192LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::~array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>);
  `eh vector destructor iterator'(
    (char *)this + 1160,
    192LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::~array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>);
  `eh vector destructor iterator'(
    (char *)this + 8,
    192LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>::~array<std::shared_ptr<Spectre::Engine::ConstantBuffer>,12>);
}
