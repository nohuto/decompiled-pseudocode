/*
 * XREFs of _wctomb_s_l @ 0x1800994B8
 * Callers:
 *     wctomb_s @ 0x180099568 (wctomb_s.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180018840 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180088DF0 (_errno.c)
 *     _invalid_parameter @ 0x18008EEB8 (_invalid_parameter.c)
 */

errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  int v7; // [rsp+48h] [rbp+10h] BYREF
  wchar_t v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = WCh;
  if ( MbCh || !SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = -1;
    if ( SizeInBytes > 0x7FFFFFFF )
    {
      invalid_parameter();
      return 22;
    }
    if ( MbCh )
    {
      if ( (int)RtlUnicodeToMultiByteN((__int64)MbCh, (unsigned int)SizeInBytes, (__int64)&v7, (__int64)&v8, 2) < 0 )
      {
        *errno() = 42;
        return 42;
      }
      if ( SizeConverted )
        *SizeConverted = v7;
    }
    else if ( SizeConverted )
    {
      *SizeConverted = _mb_cur_max;
    }
  }
  else if ( SizeConverted )
  {
    *SizeConverted = 0;
  }
  return 0;
}
