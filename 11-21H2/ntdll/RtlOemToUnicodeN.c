/*
 * XREFs of RtlOemToUnicodeN @ 0x18000DCD0
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x18000C250 (RtlOemStringToUnicodeString.c)
 *     RtlCreateEnvironmentEx @ 0x18000CED0 (RtlCreateEnvironmentEx.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x18000DD08 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x18000E210 (RtlCustomCPToUnicodeN.c)
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
