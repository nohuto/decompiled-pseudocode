/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x18000C510
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18000B300 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18000C380 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F62F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18000DC24 (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  CHAR *v6; // rcx
  ULONG *v7; // r8
  const WCHAR *v8; // r9
  ULONG v9; // r10d
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(OemString) )
    return UpcaseUnicodeToUTF8NHelper(v6, v5, v9);
  _InterlockedOr(v11, 0);
  if ( CodePageTable.DBCSCodePage )
    return UpcaseUnicodeToMultiByteNHelper(v6, v5, v7, v8, v9);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             (_DWORD)v6,
             v5,
             (_DWORD)v7,
             (_DWORD)v8,
             v9,
             (__int64)CodePageTable.WideCharTable,
             (__int64)CodePageTable.MultiByteTable);
}
