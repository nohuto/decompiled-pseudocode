/*
 * XREFs of RtlOemToUnicodeN @ 0x180059110
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180058580 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x180058FD0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x180059188 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x1800591C0 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __cdecl RtlOemToUnicodeN(
        PWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
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
                                   OemString);
  return RtlCustomCPToUnicodeN(CodePageData, v9, v6, v7, CustomCPString, BytesInOemString);
}
