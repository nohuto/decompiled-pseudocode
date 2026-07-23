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

NTSTATUS __cdecl RtlConvertLCIDToString(LCID LcidValue, ULONG Base, ULONG Padding, PWSTR pResultBuf, ULONG Size)
{
  ULONG v9; // ebx
  NTSTATUS result; // eax
  ULONG i; // eax
  NTSTATUS v12; // r11d
  _UNICODE_STRING String; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v14[1024]; // [rsp+30h] [rbp-428h] BYREF

  memset_thunk_772440563353939046(v14, 0, 0x400uLL);
  v9 = Size;
  if ( Size >= 0x200 )
    return -2147483643;
  String.Length = 2 * Size;
  String.MaximumLength = 2 * Size;
  String.Buffer = (wchar_t *)v14;
  result = RtlIntegerToUnicodeString(LcidValue, Base, &String);
  if ( result >= 0 )
  {
    for ( i = String.Length >> 1; i < Padding; ++i )
    {
      if ( !v9 )
        return -1073741823;
      *pResultBuf++ = 48;
      --v9;
    }
    if ( (int)RtlStringCchCopyW(pResultBuf, v9, (__int64)String.Buffer) < 0 )
      return -1073741823;
    return v12;
  }
  return result;
}
