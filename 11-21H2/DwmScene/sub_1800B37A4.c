/*
 * XREFs of sub_1800B37A4 @ 0x1800B37A4
 * Callers:
 *     sub_1800B3A10 @ 0x1800B3A10 (sub_1800B3A10.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_18002D554 @ 0x18002D554 (sub_18002D554.c)
 *     sub_1800B3B80 @ 0x1800B3B80 (sub_1800B3B80.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B37A4(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // r15
  char v5; // bp
  int v6; // r12d
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 i; // rbx
  __int64 j; // rcx
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  _BYTE v18[136]; // [rsp+30h] [rbp-C8h] BYREF
  char *v19[3]; // [rsp+B8h] [rbp-40h] BYREF

  sub_18002C84C(a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_18002D554((__int64)v18);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 56);
  v7 = **(__int64 ***)(a1 + 48);
LABEL_2:
  while ( v7 != *(__int64 **)(a1 + 48) && !v5 )
  {
    while ( 1 )
    {
      v8 = Query_perf_frequency();
      v9 = Query_perf_counter();
      if ( 1000000000 * (v9 % v8) / v8 + 1000000000 * (v9 / v8) - v4 >= 500000000 )
      {
        sub_18001F2B4(
          &stru_1801EA488,
          4,
          "GpuProfiler::FramesData::WaitPendingFrames() -- wait for flush abandoned (limit is %lld ms)",
          500LL);
        v5 = 1;
        goto LABEL_2;
      }
      LOBYTE(v10) = 1;
      if ( (unsigned int)sub_1800B5738(*(_QWORD *)(a1 + 16 * (v7[4] + 4)), v18, v10) == 3 )
        break;
      Thrd_yield();
    }
    sub_1800B3B80(a1 + 8, v7 + 4);
    v11 = v7;
    i = v7[2];
    if ( *(_BYTE *)(i + 25) )
    {
      for ( i = v7[1]; !*(_BYTE *)(i + 25) && v11 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        v11 = (__int64 *)i;
    }
    else
    {
      for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
        i = j;
    }
    v14 = sub_18002ABBC((_QWORD *)(a1 + 48), v7);
    sub_180010884((char *)v14, 0x28uLL);
    v7 = (__int64 *)i;
  }
  v15 = Query_perf_frequency();
  v16 = Query_perf_counter();
  sub_18001F2B4(
    &stru_1801EA488,
    2,
    "GpuProfiler::FramesData::WaitPendingFrames() -- waited %lld ms for flush (pending frames: %d)",
    (1000000000 * (v16 % v15) / v15 + 1000000000 * (v16 / v15) - v4) / 1000000,
    v6);
  sub_18002CCFC((__int64)v19, (__int64)v19, *((char **)v19[0] + 1));
  sub_180010884(v19[0], 0x58uLL);
  return j_LanguageEnumProc(a1);
}
