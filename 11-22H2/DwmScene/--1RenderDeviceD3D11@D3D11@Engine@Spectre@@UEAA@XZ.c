/*
 * XREFs of ??1RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C4318
 * Callers:
 *     ??_GRenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C4B40 (--_GRenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F84 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engine@Sp.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::~RenderDeviceD3D11(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  int ID; // eax

  *(_QWORD *)this = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  ID = Spectre::Engine::RenderDevice::GetID((__int64)this);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_RendererD3D11,
    3,
    "RenderDeviceD3D11 destructor -- RenderDeviceID=%d",
    ID);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_RendererD3D11,
    3,
    "-------------------------------------------------");
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 580);
  std::wstring::_Tidy_deallocate((__int64)this + 4600);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 535);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 534);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 533);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 532);
  _Mtx_destroy_in_situ((Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 4168));
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>((void **)this + 519);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>((void **)this + 517);
  Spectre::Engine::RenderDevice::~RenderDevice(this);
}
