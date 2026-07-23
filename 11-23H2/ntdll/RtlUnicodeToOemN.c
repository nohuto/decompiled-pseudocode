/*
 * XREFs of RtlUnicodeToOemN @ 0x180058F70
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180057A50 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F7190 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180018D20 (RtlUnicodeToCustomCPN.c)
 *     RtlpGetCodePageData @ 0x180059054 (RtlpGetCodePageData.c)
 */

NTSTATUS __cdecl RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  _CPTABLEINFO *CodePageData; // rax
  PWCH v7; // r9
  PULONG v8; // r10
  ULONG v9; // r11d

  CodePageData = (_CPTABLEINFO *)RtlpGetCodePageData(0LL, MaxBytesInOemString, BytesInOemString, UnicodeString);
  return RtlUnicodeToCustomCPN(CodePageData, OemString, v9, v8, v7, BytesInUnicodeString);
}
