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

__int64 RtlUpcaseUnicodeToOemN()
{
  unsigned int v0; // edx
  _BYTE *v1; // rcx
  unsigned int *v2; // r8
  unsigned __int16 *v3; // r9
  unsigned int v4; // r10d
  signed __int32 v6[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper((_DWORD)v1, v0, (_DWORD)v2, (_DWORD)v3, v4);
  _InterlockedOr(v6, 0);
  if ( word_18018175C )
    return UpcaseUnicodeToMultiByteNHelper((_DWORD)v1, v0, (_DWORD)v2, (_DWORD)v3, v4);
  else
    return UpcaseUnicodeToSingleByteNHelper(v1, v0, v2, v3, v4, qword_180181778, qword_180181770);
}
