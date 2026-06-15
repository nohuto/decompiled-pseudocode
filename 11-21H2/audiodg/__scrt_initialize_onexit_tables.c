/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x14002FA28
 * Callers:
 *     pre_c_initialization @ 0x14002F2C0 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x14002FD90 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x1400301D0 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x140030718 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x1400308A6 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1400C0F80 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x14002FAB2LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1400C0F68._first = *(_OWORD *)&Table._first;
      stru_1400C0F68._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1400C0F68) )
    {
      return 0;
    }
    byte_1400C0F80 = 1;
  }
  return 1;
}
