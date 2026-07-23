/*
 * XREFs of RtlOemToUnicodeN @ 0x180058FC0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180058420 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x180058E70 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x180059054 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x1800590A0 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __cdecl RtlOemToUnicodeN(
        PWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  _CPTABLEINFO *CodePageData; // rax
  PCH CustomCPString; // r9
  PULONG v8; // r10
  ULONG v9; // r11d

  CodePageData = (_CPTABLEINFO *)RtlpGetCodePageData(1LL, MaxBytesInUnicodeString, BytesInUnicodeString, OemString);
  return RtlCustomCPToUnicodeN(CodePageData, UnicodeString, v9, v8, CustomCPString, BytesInOemString);
}
