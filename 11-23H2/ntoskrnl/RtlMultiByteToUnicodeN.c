/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x140773D90
 * Callers:
 *     mbstowcs @ 0x1403DA1F0 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140773DF4 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x140773E60 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  struct _CPTABLEINFO *CodePageData; // rax

  CodePageData = (struct _CPTABLEINFO *)RtlpGetCodePageData(0LL);
  RtlCustomCPToUnicodeN(
    CodePageData,
    UnicodeString,
    MaxBytesInUnicodeString,
    BytesInUnicodeString,
    (PCH)MultiByteString,
    BytesInMultiByteString);
  return 0;
}
