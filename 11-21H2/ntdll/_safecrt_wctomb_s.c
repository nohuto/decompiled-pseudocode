/*
 * XREFs of _safecrt_wctomb_s @ 0x1800A0408
 * Callers:
 *     _output_s @ 0x18009FB74 (_output_s.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x18000DD90 (RtlUnicodeToMultiByteN.c)
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall safecrt_wctomb_s(int *a1, void *a2, size_t a3, __int16 a4)
{
  int v8; // [rsp+48h] [rbp+10h] BYREF
  __int16 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  if ( !a2 && a3 )
  {
    if ( a1 )
      *a1 = 0;
    return 0LL;
  }
  if ( a1 )
    *a1 = -1;
  if ( a3 > 0x7FFFFFFF )
  {
    invalid_parameter();
    return 22LL;
  }
  if ( !a2 )
  {
    if ( a1 )
      *a1 = _mb_cur_max;
    return 0LL;
  }
  v8 = 0;
  if ( (int)RtlUnicodeToMultiByteN((__int64)a2, (unsigned int)a3, (__int64)&v8, (__int64)&v9, 2) >= 0 )
  {
    if ( a1 )
      *a1 = v8;
    return 0LL;
  }
  if ( a3 )
    memset(a2, 0, a3);
  return 42LL;
}
