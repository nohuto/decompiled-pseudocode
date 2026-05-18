/*
 * XREFs of ?Shutdown@Camera@Engine@Spectre@@UEAAXXZ @ 0x18005D590
 * Callers:
 *     ?Shutdown@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008ECE0 (-Shutdown@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 */

void __fastcall Spectre::Engine::Camera::Shutdown(Spectre::Engine::Camera *this)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  Spectre::Engine::Camera::SetFrameBuffer(this, v2);
  *(_OWORD *)v2 = 0LL;
  Spectre::Engine::Camera::SetDepthBuffer(this, v2);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::clear((_QWORD *)this + 56);
}
