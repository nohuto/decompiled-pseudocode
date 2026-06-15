/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180016C28
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180016AAC (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180016F20 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x1800172F0 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800176A0 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x180017776 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_180063340 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180016CB2LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_180063328._first = *(_OWORD *)&Table._first;
      stru_180063328._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_180063328) )
    {
      return 0;
    }
    byte_180063340 = 1;
  }
  return 1;
}
