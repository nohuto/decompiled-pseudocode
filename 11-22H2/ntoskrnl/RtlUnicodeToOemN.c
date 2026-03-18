/*
 * XREFs of RtlUnicodeToOemN @ 0x1407D1280
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x1407D11A0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1408612C0 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140774304 (RtlpGetCodePageData.c)
 *     RtlUnicodeToCustomCPN @ 0x1407D12E0 (RtlUnicodeToCustomCPN.c)
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
