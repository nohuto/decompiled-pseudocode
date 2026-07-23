/*
 * XREFs of RtlOemToUnicodeN @ 0x140774520
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAF30 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14086B8D0 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140940318 (FsRtlNotifyUpdateBuffer.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140773FE4 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x140774050 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  __int128 *CodePageData; // rax

  CodePageData = RtlpGetCodePageData(1u);
  return RtlCustomCPToUnicodeN(
           (PCPTABLEINFO)CodePageData,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}
