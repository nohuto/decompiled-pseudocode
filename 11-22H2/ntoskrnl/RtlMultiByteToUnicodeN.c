/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x1407742A0
 * Callers:
 *     mbstowcs @ 0x1403D9B90 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlpGetCodePageData @ 0x140774304 (RtlpGetCodePageData.c)
 *     RtlCustomCPToUnicodeN @ 0x140774370 (RtlCustomCPToUnicodeN.c)
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
