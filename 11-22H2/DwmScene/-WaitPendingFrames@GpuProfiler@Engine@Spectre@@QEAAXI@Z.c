/*
 * XREFs of ?WaitPendingFrames@GpuProfiler@Engine@Spectre@@QEAAXI@Z @ 0x1800A1870
 * Callers:
 *     ?DeleteOutput@RenderDevice@Engine@Spectre@@QEAAX$$QEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x1800262CC (-DeleteOutput@RenderDevice@Engine@Spectre@@QEAAX$$QEAV-$shared_ptr@VIRenderOutput@Engine@Spectre.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::GpuProfiler::WaitPendingFrames(Spectre::Engine::GpuProfiler::FramesData *this)
{
  Spectre::Engine::GpuProfiler::FramesData::WaitPendingFrames(this);
}
