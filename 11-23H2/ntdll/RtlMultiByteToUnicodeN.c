/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x180059010
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180058420 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x180093200 (mbstowcs.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DACB8 (LdrpEtwLogLoaderSnaps.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800F12E0 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x180059054 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x1800590A0 (RtlCustomCPToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeN(int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int CodePageData; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d

  CodePageData = RtlpGetCodePageData(0LL);
  RtlCustomCPToUnicodeN(CodePageData, a1, v9, v8, v7, a5);
  return 0LL;
}
