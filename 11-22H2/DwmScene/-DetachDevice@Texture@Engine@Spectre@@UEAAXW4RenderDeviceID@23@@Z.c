/*
 * XREFs of ?DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800565B0
 * Callers:
 *     ?DetachDevice@FrameBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180028890 (-DetachDevice@FrameBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@DepthBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18006FAC0 (-DetachDevice@DepthBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180054C40 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VCommandList@Engin.c)
 *     ?reset@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180056B34 (-reset@-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@S.c)
 */

__int64 __fastcall Spectre::Engine::Texture::DetachDevice(__int64 a1, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    std::unique_ptr<Spectre::Engine::TextureImageSet>::reset(a1 + 136, 0LL);
  v5 = a2;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::CommandList>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>,0>>::erase(
    (__int64 *)(a1 + 112),
    (unsigned int *)&v5);
  return Spectre::Engine::SharedResource::DetachDevice(a1, a2);
}
