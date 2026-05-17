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
  if ( word_1801847AC )
    return UpcaseUnicodeToMultiByteNHelper((_DWORD)v1, v0, (_DWORD)v2, (_DWORD)v3, v4);
  else
    return UpcaseUnicodeToSingleByteNHelper(v1, v0, v2, v3, v4, qword_1801847C8, qword_1801847C0);
}
