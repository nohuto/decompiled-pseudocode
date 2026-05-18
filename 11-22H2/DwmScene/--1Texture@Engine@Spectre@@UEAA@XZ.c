/*
 * XREFs of ??1Texture@Engine@Spectre@@UEAA@XZ @ 0x180055760
 * Callers:
 *     ??_GTexture@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018210 (--_GTexture@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180054C00 (-clear@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Eng.c)
 *     ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4 (--1-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$default_delete@UTextureDesc@Engine@Spectre@@@std.c)
 *     ??1?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556F8 (--1-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@Spect.c)
 */

void __fastcall Spectre::Engine::Texture::~Texture(Spectre::Engine::Texture *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::Texture::`vftable';
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::clear((_QWORD *)this + 14);
  std::unique_ptr<Spectre::Engine::TextureImageSet>::~unique_ptr<Spectre::Engine::TextureImageSet>((_QWORD *)this + 17);
  std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>((void **)this + 16);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>((void **)this + 14);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Spectre::Engine::SharedResource::~SharedResource((void **)this);
}
