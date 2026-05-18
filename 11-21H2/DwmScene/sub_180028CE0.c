/*
 * XREFs of sub_180028CE0 @ 0x180028CE0
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 *     sub_1800280E8 @ 0x1800280E8 (sub_1800280E8.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 */

void __fastcall sub_180028CE0(_QWORD *a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm0_4

  sub_18002C7C4(a1 + 3);
  sub_1800280E8((__int64)a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  a1[54] = v4;
  v5 = v4 - a1[53];
  a1[59] = v5;
  v6 = sub_180026A18(v5);
  sub_18001F2B4(&stru_1801EA228, 3, "RenderDevice startup duration to initialization complete: %8.3fms", v6);
}
