/*
 * XREFs of ??1State@Engine@Spectre@@QEAA@XZ @ 0x180059A20
 * Callers:
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     _Spectre::Engine::Camera::AttachDevice_::_1_::dtor$2 @ 0x1800E7933 (_Spectre--Engine--Camera--AttachDevice_--_1_--dtor$2.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::InitializeRenderer_::_1_::dtor$34 @ 0x1800F17A2 (_Spectre--Engine--D3D11--RenderDeviceD3D11--InitializeRenderer_--_1_--dtor$34.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::State::~State(Spectre::Engine::State *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 165);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  `eh vector destructor iterator'(
    (char *)this + 1184,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 141);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  `eh vector destructor iterator'(
    (char *)this + 760,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 93);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 91);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 89);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  `eh vector destructor iterator'(
    (char *)this + 448,
    16LL,
    16LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  `eh vector destructor iterator'(
    (char *)this + 192,
    16LL,
    16LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  `eh vector destructor iterator'(
    (char *)this,
    16LL,
    12LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
}
