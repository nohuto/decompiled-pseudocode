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

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  _CPTABLEINFO *CodePageData; // rax
  PCH CustomCPString; // r9
  PULONG v8; // r10
  ULONG v9; // r11d

  CodePageData = (_CPTABLEINFO *)RtlpGetCodePageData(
                                   0LL,
                                   MaxBytesInUnicodeString,
                                   BytesInUnicodeString,
                                   MultiByteString);
  RtlCustomCPToUnicodeN(CodePageData, UnicodeString, v9, v8, CustomCPString, BytesInMultiByteString);
  return 0;
}
