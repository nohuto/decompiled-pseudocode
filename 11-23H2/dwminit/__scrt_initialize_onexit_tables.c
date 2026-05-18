/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180002058
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180001EDC (__scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x180002408 (__scrt_is_ucrt_dll_in_use.c)
 *     __scrt_fastfail @ 0x18000242C (__scrt_fastfail.c)
 *     _initialize_onexit_table @ 0x18000261E (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1800168F0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x1800020E2LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1800168D8._first = *(_OWORD *)&Table._first;
      stru_1800168D8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1800168D8) )
    {
      return 0;
    }
    byte_1800168F0 = 1;
  }
  return 1;
}
