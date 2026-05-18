/*
 * XREFs of sub_1800B227C @ 0x1800B227C
 * Callers:
 *     sub_180031DF4 @ 0x180031DF4 (sub_180031DF4.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800B1FC8 @ 0x1800B1FC8 (sub_1800B1FC8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B227C(__int64 *a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_BYTE *)sub_1800441D8((__int64)(a1 + 1)) )
    return 0LL;
  sub_18002C84C((__int64)a1);
  v11 = 0LL;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v6 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  v12 = v6;
  v10 = 1;
  v7 = a1[5];
  if ( v7 == a1[6] )
  {
    sub_1800B1FC8(a1 + 4, (char *)v7, &v10, a2, &v12, &v11);
  }
  else
  {
    *(_DWORD *)v7 = 1;
    sub_18001875C((__int64 *)(v7 + 8), a2);
    *(_QWORD *)(v7 + 40) = v6;
    *(_QWORD *)(v7 + 48) = 0LL;
    a1[5] += 56LL;
  }
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[5] - a1[4]) >> 3);
  j_LanguageEnumProc((__int64)a1);
  return v8 - 1;
}
