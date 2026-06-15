/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180066E48
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180066CCC (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180067140 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x180067510 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800678C0 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x180067996 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1801CF610 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180066ED2LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1801CF5F8._first = *(_OWORD *)&Table._first;
      stru_1801CF5F8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1801CF5F8) )
    {
      return 0;
    }
    byte_1801CF610 = 1;
  }
  return 1;
}
