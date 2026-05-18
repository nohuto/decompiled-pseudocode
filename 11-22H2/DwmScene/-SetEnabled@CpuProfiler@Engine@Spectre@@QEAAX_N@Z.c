/*
 * XREFs of ?SetEnabled@CpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A047C
 * Callers:
 *     ?BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ @ 0x1800329B4 (-BeginCpuProfilerFrame@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::CpuProfiler::SetEnabled(
        Spectre::Engine::CpuProfiler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::atomic<bool>::operator=((__int64)this + 8, a2, a3, a4);
}
