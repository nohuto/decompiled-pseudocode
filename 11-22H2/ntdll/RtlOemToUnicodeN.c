/*
 * XREFs of RtlOemToUnicodeN @ 0x180059110
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180058580 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x180058FD0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x180059188 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x1800591C0 (RtlCustomCPToUnicodeN.c)
 */

__int64 __fastcall RtlOemToUnicodeN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int CodePageData; // eax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  int v9; // r10d

  CodePageData = RtlpGetCodePageData();
  return RtlCustomCPToUnicodeN(CodePageData, v9, v6, v7, v8, a5);
}
