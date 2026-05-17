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

__int64 __fastcall RtlUpcaseUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(a1, a2, a3) )
    return UpcaseUnicodeToUTF8NHelper(v4, v3, v5, v6, v7);
  _InterlockedOr(v9, 0);
  if ( word_18017769C )
    return UpcaseUnicodeToMultiByteNHelper(v4, v3, v5, v6, v7);
  else
    return UpcaseUnicodeToSingleByteNHelper(v4, v3, v5, v6, v7, qword_1801776B8, qword_1801776B0);
}
