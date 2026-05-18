/*
 * XREFs of ?GetFrameStartTime@CpuProfiler@Engine@Spectre@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ @ 0x1800A03BC
 * Callers:
 *     ?UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x1800374F8 (-UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::CpuProfiler::GetFrameStartTime(__int64 a1, _QWORD *a2)
{
  *a2 = *(_QWORD *)(a1 + 24);
  return a2;
}
