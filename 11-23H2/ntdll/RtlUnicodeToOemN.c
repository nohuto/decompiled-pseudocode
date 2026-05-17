/*
 * XREFs of RtlUnicodeToOemN @ 0x180058F70
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180057A50 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F7190 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180018D20 (RtlUnicodeToCustomCPN.c)
 *     RtlpGetCodePageData @ 0x180059054 (RtlpGetCodePageData.c)
 */

__int64 __fastcall RtlUnicodeToOemN(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 CodePageData; // rax
  unsigned __int16 *v7; // r9
  unsigned int *v8; // r10
  unsigned int v9; // r11d

  CodePageData = RtlpGetCodePageData(0LL);
  return RtlUnicodeToCustomCPN(CodePageData, a1, v9, v8, v7, a5);
}
