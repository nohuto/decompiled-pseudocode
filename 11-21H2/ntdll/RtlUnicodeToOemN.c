/*
 * XREFs of RtlUnicodeToOemN @ 0x18000DB70
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x18000BFF0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F6090 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x18000DD08 (RtlpGetCodePageData.c)
 *     RtlUnicodeToCustomCPN @ 0x18000E160 (RtlUnicodeToCustomCPN.c)
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
