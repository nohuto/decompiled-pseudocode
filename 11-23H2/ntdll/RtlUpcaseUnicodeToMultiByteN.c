/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18007EC70
 * Callers:
 *     toupper @ 0x180095040 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800F72D0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18007ECD0 (UpcaseUnicodeToSingleByteNHelper.c)
 */

__int64 RtlUpcaseUnicodeToMultiByteN()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int v4; // r10d
  signed __int32 v6[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(v1, v0, v2, v3, v4);
  _InterlockedOr(v6, 0);
  if ( word_18018476C )
    return UpcaseUnicodeToMultiByteNHelper(v1, v0, v2, v3, v4);
  else
    return UpcaseUnicodeToSingleByteNHelper(v1, v0, v2, v3, v4, qword_180184788, qword_180184780);
}
