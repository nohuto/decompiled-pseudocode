/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x140773F80
 * Callers:
 *     mbstowcs @ 0x1403DA3D0 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140773FE4 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x140774050 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  _CPTABLEINFO *CodePageData; // rax

  CodePageData = (_CPTABLEINFO *)RtlpGetCodePageData(0LL);
  RtlCustomCPToUnicodeN(
    CodePageData,
    UnicodeString,
    MaxBytesInUnicodeString,
    BytesInUnicodeString,
    (PCH)MultiByteString,
    BytesInMultiByteString);
  return 0;
}
