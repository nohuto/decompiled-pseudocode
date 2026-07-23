/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x180089DE0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x180089D00 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlDnsHostNameToComputerName @ 0x18008C140 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F5FE0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18007E660 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1800F01FC (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800F0318 (UpcaseUnicodeToUTF8NHelper.c)
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
  WCHAR *v8; // r9
  ULONG v9; // r10d
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(v6, v5, v7, v8, v9);
  _InterlockedOr(v11, 0);
  if ( CodePageTable.DBCSCodePage )
    return UpcaseUnicodeToMultiByteNHelper(v6, v5, v7, v8, v9);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             v6,
             v5,
             v7,
             v8,
             v9,
             (__int64)CodePageTable.WideCharTable,
             (__int64)CodePageTable.MultiByteTable);
}
