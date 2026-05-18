/*
 * XREFs of ??1VertexBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009E720
 * Callers:
 *     ??_EVertexBufferState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009E800 (--_EVertexBufferState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::CommandListState::CommandListState_::_1_::dtor$1 @ 0x1800EB128 (_Spectre--Engine--CommandListState--CommandListState_--_1_--dtor$1.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::VertexBufferState::~VertexBufferState(Spectre::Engine::VertexBufferState *this)
{
  *(_QWORD *)this = &Spectre::Engine::VertexBufferState::`vftable';
  `eh vector destructor iterator'(
    (char *)this + 488,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  `eh vector destructor iterator'(
    (char *)this + 248,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  `eh vector destructor iterator'(
    (char *)this + 8,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
}
