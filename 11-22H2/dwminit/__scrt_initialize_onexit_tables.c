/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180002008
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180001E8C (__scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x1800023B8 (__scrt_is_ucrt_dll_in_use.c)
 *     __scrt_fastfail @ 0x1800023DC (__scrt_fastfail.c)
 *     _initialize_onexit_table @ 0x1800025CE (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1800158B0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180002092LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_180015898._first = *(_OWORD *)&Table._first;
      stru_180015898._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_180015898) )
    {
      return 0;
    }
    byte_1800158B0 = 1;
  }
  return 1;
}
