/*
 * XREFs of ??1RenderState@Engine@Spectre@@UEAA@XZ @ 0x180043AD0
 * Callers:
 *     ??_GRenderState@Engine@Spectre@@UEAAPEAXI@Z @ 0x180043E00 (--_GRenderState@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 */

void __fastcall Spectre::Engine::RenderState::~RenderState(void **this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *this = &Spectre::Engine::RenderState::`vftable';
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>(this + 16);
  v2 = (std::_Ref_count_base *)this[15];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)this[13];
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  Spectre::Engine::SharedResource::~SharedResource(this);
}
