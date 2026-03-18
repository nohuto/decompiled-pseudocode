/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18010F2C8
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x18010F14C (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18010F8B0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x18010FD20 (__scrt_is_ucrt_dll_in_use.c)
 *     __scrt_fastfail @ 0x18010FD44 (__scrt_fastfail.c)
 *     _initialize_onexit_table_0 @ 0x18011007A (_initialize_onexit_table_0.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1803E5670 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18010F352LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1803E5658._first = *(_OWORD *)&Table._first;
      stru_1803E5658._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table_0(&Table) || initialize_onexit_table_0(&stru_1803E5658) )
    {
      return 0;
    }
    byte_1803E5670 = 1;
  }
  return 1;
}
