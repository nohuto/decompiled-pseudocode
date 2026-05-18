/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180002008
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180001E8C (__scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x1800023AC (__scrt_is_ucrt_dll_in_use.c)
 *     __scrt_fastfail @ 0x1800023D0 (__scrt_fastfail.c)
 *     _initialize_onexit_table @ 0x1800025BE (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1800158C0 )
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
      *(_OWORD *)&stru_1800158A8._first = *(_OWORD *)&Table._first;
      stru_1800158A8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1800158A8) )
    {
      return 0;
    }
    byte_1800158C0 = 1;
  }
  return 1;
}
