/*
 * XREFs of ?DetachDevice@FrameBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180028890
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180028E68 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceDepthBuffer.c)
 *     ?DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800565B0 (-DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 */

__int64 __fastcall Spectre::Engine::FrameBuffer::DetachDevice(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>>>,0>>::erase(
    a1 + 120,
    &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    Spectre::Engine::Texture::DetachDevice(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    Spectre::Engine::Texture::DetachDevice(v5, a2);
  return Spectre::Engine::SharedResource::DetachDevice(a1, a2);
}
