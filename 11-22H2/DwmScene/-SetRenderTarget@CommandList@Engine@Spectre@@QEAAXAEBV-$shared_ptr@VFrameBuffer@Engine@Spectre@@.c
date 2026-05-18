/*
 * XREFs of ?SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@@Z @ 0x180039738
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 * Callees:
 *     ?SetRenderTarget@RenderTargetState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@I@Z @ 0x18009F258 (-SetRenderTarget@RenderTargetState@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::CommandList::SetRenderTarget(__int64 a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  Spectre::Engine::RenderTargetState::SetRenderTarget(*(_QWORD *)(a1 + 96) + 9256LL, a2);
  return Spectre::Engine::RenderTargetState::SetDepthBuffer(*(_QWORD *)(a1 + 96) + 9256LL, a3);
}
