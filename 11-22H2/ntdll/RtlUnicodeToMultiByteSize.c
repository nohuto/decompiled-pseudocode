/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x180018EC0
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x180018DA0 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x180057C80 (RtlxUnicodeStringToOemSize.c)
 *     wcstombs @ 0x180094F70 (wcstombs.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180059D30 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PWCH v3; // r9
  ULONG v4; // edx
  ULONG i; // r8d
  __int64 v7; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  v3 = UnicodeString;
  _InterlockedOr(v8, 0);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    _InterlockedOr(v8, 0);
    v4 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      for ( i = BytesInUnicodeString >> 1; i; --i )
      {
        v7 = *v3++;
        v4 += (HIBYTE(*((_WORD *)GlobalRtlNlsState.WideCharTable + v7)) != 0) + 1;
      }
    }
    else
    {
      v4 = BytesInUnicodeString >> 1;
    }
    *BytesInMultiByteString = v4;
  }
  return 0;
}
