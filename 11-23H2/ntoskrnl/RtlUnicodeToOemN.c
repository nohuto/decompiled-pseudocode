/*
 * XREFs of RtlUnicodeToOemN @ 0x1407D0FD0
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x1407D0EF0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x140861430 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140773FE4 (RtlpGetCodePageData.c)
 *     RtlUnicodeToCustomCPN @ 0x1407D1030 (RtlUnicodeToCustomCPN.c)
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
