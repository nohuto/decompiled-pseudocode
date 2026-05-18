/*
 * XREFs of ?SetDepthBuffer@RenderTargetState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18009F244
 * Callers:
 *     ?SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@@Z @ 0x180039738 (-SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Spectre::Engine::RenderTargetState::SetDepthBuffer(__int64 a1, _QWORD *a2)
{
  return std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 392), a2);
}
