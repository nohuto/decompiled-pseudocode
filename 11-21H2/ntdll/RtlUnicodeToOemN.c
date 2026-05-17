/*
 * XREFs of RtlUnicodeToOemN @ 0x18000DB70
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x18000BFF0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F6090 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x18000DD08 (RtlpGetCodePageData.c)
 *     RtlUnicodeToCustomCPN @ 0x18000E160 (RtlUnicodeToCustomCPN.c)
 */

__int64 __fastcall RtlUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int CodePageData; // eax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  int v9; // r10d

  CodePageData = RtlpGetCodePageData();
  return RtlUnicodeToCustomCPN(CodePageData, v9, v6, v7, v8, a5);
}
