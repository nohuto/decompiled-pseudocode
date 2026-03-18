/*
 * XREFs of RtlUnicodeToOemN @ 0x1407D0D00
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x1407D0C20 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1408611F0 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140773DF4 (RtlpGetCodePageData.c)
 *     RtlUnicodeToCustomCPN @ 0x1407D0D60 (RtlUnicodeToCustomCPN.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  __int128 *CodePageData; // rax

  CodePageData = RtlpGetCodePageData(0);
  return RtlUnicodeToCustomCPN(
           (PCPTABLEINFO)CodePageData,
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (PWCH)UnicodeString,
           BytesInUnicodeString);
}
