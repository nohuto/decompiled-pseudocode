/*
 * XREFs of sub_1800B21F8 @ 0x1800B21F8
 * Callers:
 *     sub_180034AD8 @ 0x180034AD8 (sub_180034AD8.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180030B3C @ 0x180030B3C (sub_180030B3C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B21F8(__int64 a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  sub_18002C84C(a1);
  *(_QWORD *)(a1 + 16) = a2;
  sub_180030B3C(*(_QWORD **)(a1 + 32), *(_QWORD **)(a1 + 40));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *(_QWORD *)(a1 + 24) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                       + 1000000000 * (perf_counter / perf_frequency);
  return j_LanguageEnumProc(a1);
}
