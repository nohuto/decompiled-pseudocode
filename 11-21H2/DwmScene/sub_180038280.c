/*
 * XREFs of sub_180038280 @ 0x180038280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180038280(__int64 a1, _QWORD *a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *a2 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return a2;
}
