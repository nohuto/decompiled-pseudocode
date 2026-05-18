/*
 * XREFs of sub_180028E0C @ 0x180028E0C
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 * Callees:
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 */

void __fastcall sub_180028E0C(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax
  float v5; // xmm0_4

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  *(_QWORD *)(a1 + 440) = v4;
  v5 = sub_180026A18(v4 - *(_DWORD *)(a1 + 424));
  sub_18001F2B4(&stru_1801EA228, 3, "RenderDevice startup duration to attach complete: %8.3fms", v5);
}
