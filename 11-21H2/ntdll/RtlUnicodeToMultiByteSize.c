/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x18000E090
 * Callers:
 *     RtlxUnicodeStringToOemSize @ 0x18000C590 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x18000DF80 (RtlUnicodeStringToAnsiString.c)
 *     wcstombs @ 0x180099E90 (wcstombs.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18005E6B0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PWCH v3; // r9
  ULONG v4; // edx
  ULONG i; // r8d
  __int64 v6; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  v3 = UnicodeString;
  _InterlockedOr(v8, 0);
  if ( GlobalRtlNlsState == -535 || word_180177690 == -535 )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0, 0, (_DWORD)BytesInMultiByteString, (_DWORD)UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    _InterlockedOr(v8, 0);
    v4 = 0;
    if ( word_18017765C )
    {
      for ( i = BytesInUnicodeString >> 1; i; --i )
      {
        v6 = *v3++;
        v4 += (HIBYTE(*(_WORD *)(qword_180177678 + 2 * v6)) != 0) + 1;
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
