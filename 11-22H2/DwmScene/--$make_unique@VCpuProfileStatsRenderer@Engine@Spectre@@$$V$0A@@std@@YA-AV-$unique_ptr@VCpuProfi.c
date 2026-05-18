/*
 * XREFs of ??$make_unique@VCpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VCpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VCpuProfileStatsRenderer@Engine@Spectre@@@std@@@0@XZ @ 0x180030900
 * Callers:
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0CpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ @ 0x18007C5BC (--0CpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::make_unique<Spectre::Engine::CpuProfileStatsRenderer,,0>(__int64 *a1)
{
  __int64 v2; // rbx
  Spectre::Engine::CpuProfileStatsRenderer *v3; // rax

  v2 = 0LL;
  v3 = (Spectre::Engine::CpuProfileStatsRenderer *)operator new(0x78uLL);
  if ( v3 )
    v2 = Spectre::Engine::CpuProfileStatsRenderer::CpuProfileStatsRenderer(v3);
  *a1 = v2;
  return a1;
}
