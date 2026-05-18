/*
 * XREFs of ?StampPost@GpuProfiler@Engine@Spectre@@QEAA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A15F4
 * Callers:
 *     ?PostRenderScene@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035470 (-PostRenderScene@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$share.c)
 * Callees:
 *     <none>
 */

char __fastcall Spectre::Engine::GpuProfiler::StampPost(__int64 a1)
{
  return Spectre::Engine::GpuProfiler::StampMarker(a1);
}
