/*
 * XREFs of RtlConvertLCIDToString @ 0x1800FB510
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800FC1F0 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180002448 (RtlStringCchCopyW.c)
 *     RtlIntegerToUnicodeString @ 0x18006F900 (RtlIntegerToUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlConvertLCIDToString(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  NTSTATUS result; // eax
  unsigned int i; // eax
  int v12; // r11d
  UNICODE_STRING v13; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v14[1024]; // [rsp+30h] [rbp-428h] BYREF

  memset_thunk_772440563353939046(v14, 0, 0x400uLL);
  v9 = a5;
  if ( a5 >= 0x200 )
    return -2147483643;
  v13.Length = 2 * a5;
  v13.MaximumLength = 2 * a5;
  v13.Buffer = (wchar_t *)v14;
  result = RtlIntegerToUnicodeString(a1, a2, &v13);
  if ( result >= 0 )
  {
    for ( i = v13.Length >> 1; i < a3; ++i )
    {
      if ( !v9 )
        return -1073741823;
      *a4++ = 48;
      --v9;
    }
    if ( (int)RtlStringCchCopyW(a4, v9, (__int64)v13.Buffer) < 0 )
      return -1073741823;
    return v12;
  }
  return result;
}
