/*
 * XREFs of ?DetachDevice@DepthBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18006FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180028E68 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceDepthBuffer.c)
 *     ?DetachDevice@Sampler@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180054A50 (-DetachDevice@Sampler@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800565B0 (-DetachDevice@Texture@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 */

__int64 __fastcall Spectre::Engine::DepthBuffer::DetachDevice(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  Spectre::Engine::Texture::DetachDevice(*(_QWORD *)(a1 + 112), a2);
  v4 = (__int64 *)(a1 + 192);
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      Spectre::Engine::Texture::DetachDevice(v6, a2);
    if ( *v4 )
      Spectre::Engine::Sampler::DetachDevice(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>>>,0>>::erase(
    (__int64 *)(a1 + 256),
    (unsigned int *)&v8);
  return Spectre::Engine::SharedResource::DetachDevice(a1, a2);
}
