/*
 * XREFs of ??$make_unique@VGpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VGpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VGpuProfileStatsRenderer@Engine@Spectre@@@std@@@0@XZ @ 0x18002B290
 * Callers:
 *     ??0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@@Z @ 0x18002B424 (--0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V-$shared_ptr@VRenderDevice@Engine@Sp.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0GpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ @ 0x180073E18 (--0GpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::make_unique<Spectre::Engine::GpuProfileStatsRenderer,,0>(__int64 *a1)
{
  __int64 v2; // rbx
  Spectre::Engine::GpuProfileStatsRenderer *v3; // rax

  v2 = 0LL;
  v3 = (Spectre::Engine::GpuProfileStatsRenderer *)operator new(0x190uLL);
  if ( v3 )
    v2 = Spectre::Engine::GpuProfileStatsRenderer::GpuProfileStatsRenderer(v3);
  *a1 = v2;
  return a1;
}
