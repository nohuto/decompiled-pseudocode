/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180004680
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180004504 (__scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     __scrt_fastfail @ 0x180004830 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180004D74 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x180004DE6 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_180009130 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18000470ALL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_180009118._first = *(_OWORD *)&Table._first;
      stru_180009118._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_180009118) )
    {
      return 0;
    }
    byte_180009130 = 1;
  }
  return 1;
}
