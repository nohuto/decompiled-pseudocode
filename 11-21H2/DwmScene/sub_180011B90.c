/*
 * XREFs of sub_180011B90 @ 0x180011B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_18003D520 @ 0x18003D520 (sub_18003D520.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011B90(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E0390(a1, v9);
  if ( v9[0] )
  {
    v5 = (_QWORD *)sub_180028460();
    sub_18003D520(*v5);
  }
  sub_180010910((__int64)v9);
  v6 = Query_perf_frequency();
  v7 = Query_perf_counter();
  return sub_18002EF54(
           a1,
           v4,
           1000000000 * (v7 / v6) + 1000000000 * (v7 % v6) / v6,
           1000000000 * (v7 / v6) + 1000000000 * (v7 % v6) / v6 - v4);
}
