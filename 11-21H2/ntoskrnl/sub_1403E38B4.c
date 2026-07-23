/*
 * XREFs of sub_1403E38B4 @ 0x1403E38B4
 * Callers:
 *     wctomb @ 0x1403E3970 (wctomb.c)
 *     sub_1403E39B4 @ 0x1403E39B4 (sub_1403E39B4.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     RtlUnicodeToMultiByteN @ 0x1406A04A0 (RtlUnicodeToMultiByteN.c)
 */

__int64 __fastcall sub_1403E38B4(ULONG *a1, CHAR *a2, unsigned __int64 a3, WCHAR a4)
{
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      _misaligned_access();
      return 22LL;
    }
    if ( a2 )
    {
      BytesInMultiByteString = 0;
      if ( RtlUnicodeToMultiByteN(a2, a3, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
        return 42LL;
      if ( a1 )
        *a1 = BytesInMultiByteString;
    }
    else if ( a1 )
    {
      *a1 = dword_140C094C4;
    }
  }
  else if ( a1 )
  {
    *a1 = 0;
  }
  return 0LL;
}
