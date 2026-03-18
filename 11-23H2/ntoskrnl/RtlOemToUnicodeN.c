/*
 * XREFs of RtlOemToUnicodeN @ 0x140774330
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAC60 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14086B690 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140940118 (FsRtlNotifyUpdateBuffer.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140773DF4 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x140773E60 (RtlCustomCPToUnicodeN.c)
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
