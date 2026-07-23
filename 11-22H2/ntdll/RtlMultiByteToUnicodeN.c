/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x180059150
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180058580 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x180092A00 (mbstowcs.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DB308 (LdrpEtwLogLoaderSnaps.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800EFED0 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x180059188 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x1800591C0 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  _CPTABLEINFO *CodePageData; // rax
  ULONG v6; // edx
  PULONG v7; // r8
  PCH CustomCPString; // r9
  PWCH v9; // r10

  CodePageData = (_CPTABLEINFO *)RtlpGetCodePageData(
                                   UnicodeString,
                                   MaxBytesInUnicodeString,
                                   BytesInUnicodeString,
                                   MultiByteString);
  RtlCustomCPToUnicodeN(CodePageData, v9, v6, v7, CustomCPString, BytesInMultiByteString);
  return 0;
}
