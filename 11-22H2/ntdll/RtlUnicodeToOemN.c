/*
 * XREFs of RtlUnicodeToOemN @ 0x1800590D0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180057BB0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F5D80 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180018F30 (RtlUnicodeToCustomCPN.c)
 *     RtlpGetCodePageData @ 0x180059188 (RtlpGetCodePageData.c)
 */

NTSTATUS __cdecl RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  _CPTABLEINFO *CodePageData; // rax
  ULONG v6; // edx
  PULONG v7; // r8
  PWCH v8; // r9
  PCH v9; // r10

  CodePageData = (_CPTABLEINFO *)RtlpGetCodePageData(OemString, MaxBytesInOemString, BytesInOemString, UnicodeString);
  return RtlUnicodeToCustomCPN(CodePageData, v9, v6, v7, v8, BytesInUnicodeString);
}
