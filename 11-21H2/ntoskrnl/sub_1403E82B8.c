/*
 * XREFs of sub_1403E82B8 @ 0x1403E82B8
 * Callers:
 *     sub_1403E7A78 @ 0x1403E7A78 (sub_1403E7A78.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlUnicodeToMultiByteN @ 0x1406A04A0 (RtlUnicodeToMultiByteN.c)
 */

__int64 __fastcall sub_1403E82B8(ULONG *a1, CHAR *a2, size_t a3, WCHAR a4)
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
    _misaligned_access();
    return 22LL;
  }
  if ( !a2 )
  {
    if ( a1 )
      *a1 = dword_140C094C4;
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
    memset(a2, 0, a3);
  return 42LL;
}
