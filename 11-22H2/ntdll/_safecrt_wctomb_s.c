/*
 * XREFs of _safecrt_wctomb_s @ 0x18009B598
 * Callers:
 *     _output_s @ 0x18009ACD4 (_output_s.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180018A50 (RtlUnicodeToMultiByteN.c)
 *     _invalid_parameter @ 0x18008E6B8 (_invalid_parameter.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall safecrt_wctomb_s(_DWORD *a1, CHAR *a2, size_t a3, WCHAR a4)
{
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = a4;
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
  BytesInMultiByteString = 0;
  if ( RtlUnicodeToMultiByteN(a2, a3, &BytesInMultiByteString, &UnicodeString, 2u) >= 0 )
  {
    if ( a1 )
      *a1 = BytesInMultiByteString;
    return 0LL;
  }
  if ( a3 )
    memset_thunk_772440563353939046(a2, 0, a3);
  return 42LL;
}
