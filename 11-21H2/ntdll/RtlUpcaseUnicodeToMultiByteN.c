/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18000DBB0
 * Callers:
 *     toupper @ 0x180099780 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800F61D0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18000DC24 (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  CHAR *v6; // rcx
  ULONG *v7; // r8
  const WCHAR *v8; // r9
  ULONG v9; // r10d
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(MultiByteString) )
    return UpcaseUnicodeToUTF8NHelper(v6, v5, v9);
  _InterlockedOr(v11, 0);
  if ( GlobalRtlNlsState.DBCSCodePage )
    return UpcaseUnicodeToMultiByteNHelper(v6, v5, v7, v8, v9);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             (_DWORD)v6,
             v5,
             (_DWORD)v7,
             (_DWORD)v8,
             v9,
             (__int64)GlobalRtlNlsState.WideCharTable,
             (__int64)GlobalRtlNlsState.MultiByteTable);
}
