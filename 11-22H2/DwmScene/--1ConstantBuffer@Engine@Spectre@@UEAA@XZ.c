/*
 * XREFs of ??1ConstantBuffer@Engine@Spectre@@UEAA@XZ @ 0x180084528
 * Callers:
 *     ??_GConstantBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180084670 (--_GConstantBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 */

void __fastcall Spectre::Engine::ConstantBuffer::~ConstantBuffer(void **this)
{
  std::_Ref_count_base *v2; // rcx

  *this = &Spectre::Engine::ConstantBuffer::`vftable';
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>(this + 14);
  v2 = (std::_Ref_count_base *)this[13];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Spectre::Engine::SharedResource::~SharedResource(this);
}
