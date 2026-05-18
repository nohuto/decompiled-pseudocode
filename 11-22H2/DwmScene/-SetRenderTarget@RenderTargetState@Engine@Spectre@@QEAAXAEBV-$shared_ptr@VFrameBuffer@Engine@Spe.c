/*
 * XREFs of ?SetRenderTarget@RenderTargetState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@I@Z @ 0x18009F258
 * Callers:
 *     ?RenderTargetSwap@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180039474 (-RenderTargetSwap@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@.c)
 *     ?SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@@Z @ 0x180039738 (-SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Spectre::Engine::RenderTargetState::SetRenderTarget(__int64 a1, _QWORD *a2)
{
  return std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 8), a2);
}
