/*
 * XREFs of ??1RenderTargetState@Engine@Spectre@@UEAA@XZ @ 0x18009EF24
 * Callers:
 *     ??_ERenderTargetState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009F040 (--_ERenderTargetState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::CommandListState::CommandListState_::_1_::dtor$4 @ 0x1800EB170 (_Spectre--Engine--CommandListState--CommandListState_--_1_--dtor$4.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderTargetState::~RenderTargetState(Spectre::Engine::RenderTargetState *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::RenderTargetState::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 54);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 52);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 50);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  `eh vector destructor iterator'(
    (char *)this + 264,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  `eh vector destructor iterator'(
    (char *)this + 136,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  `eh vector destructor iterator'(
    (char *)this + 8,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
}
