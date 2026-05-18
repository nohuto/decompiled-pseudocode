/*
 * XREFs of ??1ArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008885C
 * Callers:
 *     ??_EIndexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180047E20 (--_EIndexBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1VertexBuffer@Engine@Spectre@@UEAA@XZ @ 0x180089544 (--1VertexBuffer@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 *     ??1?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18008883C (--1-$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U-$default_delete@UArrayBufferDesc@Engine@Spect.c)
 */

void __fastcall Spectre::Engine::ArrayBuffer::~ArrayBuffer(Spectre::Engine::ArrayBuffer *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)this = &Spectre::Engine::ArrayBuffer::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>((void **)this + 15);
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::~unique_ptr<Spectre::Engine::ArrayBufferDesc>((_QWORD *)this + 14);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  Spectre::Engine::SharedResource::~SharedResource((void **)this);
}
