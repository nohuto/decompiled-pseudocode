/*
 * XREFs of ?DetachDevice@Shader@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18008AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180028E68 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceDepthBuffer.c)
 */

__int64 __fastcall Spectre::Engine::Shader::DetachDevice(__int64 a1, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>>>,0>>::erase(
    (__int64 *)(a1 + 136),
    (unsigned int *)&v5);
  return Spectre::Engine::SharedResource::DetachDevice(a1, a2);
}
