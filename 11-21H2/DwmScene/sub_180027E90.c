/*
 * XREFs of sub_180027E90 @ 0x180027E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 */

void __fastcall sub_180027E90(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm0_4

  if ( ++*(_DWORD *)(a1 + 3884) == 1 )
  {
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
    *(_QWORD *)(a1 + 448) = v4;
    v5 = v4 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 480) = v5;
    v6 = sub_180026A18(v5);
    sub_18001F2B4(&stru_1801EA228, 3, "RenderDevice startup duration until first frame begin: %8.3fms", v6);
  }
}
