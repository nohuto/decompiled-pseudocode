/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x18008A5E0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x18008A500 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlDnsHostNameToComputerName @ 0x18008C940 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F73F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18007ECD0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1800F160C (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800F1728 (UpcaseUnicodeToUTF8NHelper.c)
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
