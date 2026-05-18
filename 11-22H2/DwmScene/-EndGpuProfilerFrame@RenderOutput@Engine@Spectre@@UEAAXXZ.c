/*
 * XREFs of ?EndGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXXZ @ 0x18002BED0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ @ 0x1800A1254 (-EndFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ.c)
 */

void __fastcall Spectre::Engine::RenderOutput::EndGpuProfilerFrame(Spectre::Engine::GpuProfiler **this)
{
  Spectre::Engine::GpuProfiler::EndFrame(this[55]);
  this[60] = (Spectre::Engine::GpuProfiler *)((char *)this[60] + 1);
}
