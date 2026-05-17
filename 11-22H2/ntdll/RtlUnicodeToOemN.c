/*
 * XREFs of RtlUnicodeToOemN @ 0x1800590D0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180057BB0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F5D80 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180018F30 (RtlUnicodeToCustomCPN.c)
 *     RtlpGetCodePageData @ 0x180059188 (RtlpGetCodePageData.c)
 */

__int64 __fastcall RtlUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 CodePageData; // rax
  unsigned int v6; // edx
  unsigned int *v7; // r8
  unsigned __int16 *v8; // r9
  _BYTE *v9; // r10

  CodePageData = RtlpGetCodePageData();
  return RtlUnicodeToCustomCPN(CodePageData, v9, v6, v7, v8, a5);
}
