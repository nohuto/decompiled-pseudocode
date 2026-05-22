/*
 * XREFs of ??0test_flag@tip2@@QEAA@$$QEAU01@@Z @ 0x18006A03C
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180069368 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x18006C218 (-reserve@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 */

__int64 __fastcall tip2::test_flag::test_flag(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdi
  _OWORD *v5; // rbx

  v2 = (_OWORD *)(a1 + 40);
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  memset_0((void *)(a1 + 40), 0, 0x40uLL);
  v5 = (_OWORD *)(a2 + 40);
  if ( *(_OWORD **)(a1 + 8) == v5 )
  {
    *(_QWORD *)(a1 + 8) = v2;
    *v2 = *v5;
    v2[1] = v5[1];
    v2[2] = v5[2];
    v2[3] = v5[3];
  }
  return a1;
}
