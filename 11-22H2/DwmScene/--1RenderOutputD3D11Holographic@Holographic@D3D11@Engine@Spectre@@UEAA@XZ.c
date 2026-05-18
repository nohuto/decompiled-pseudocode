/*
 * XREFs of ??1RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D8DF8
 * Callers:
 *     ??_GRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800D8EA0 (--_GRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 */

void __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::~RenderOutputD3D11Holographic(
        Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *this)
{
  std::_Ref_count_base *v2; // rcx

  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>((void **)this + 69);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 68);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 66);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 65);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 64);
  Spectre::Engine::RenderOutput::~RenderOutput(this);
}
