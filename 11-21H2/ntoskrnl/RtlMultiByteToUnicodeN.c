/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x14075A6A0
 * Callers:
 *     mbstowcs @ 0x1403E1C30 (mbstowcs.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 * Callees:
 *     RtlCustomCPToUnicodeN @ 0x14075A700 (RtlCustomCPToUnicodeN.c)
 *     sub_14075A7E4 @ 0x14075A7E4 (sub_14075A7E4.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  _CPTABLEINFO *v9; // rax

  v9 = (_CPTABLEINFO *)sub_14075A7E4();
  RtlCustomCPToUnicodeN(
    v9,
    UnicodeString,
    MaxBytesInUnicodeString,
    BytesInUnicodeString,
    (PCH)MultiByteString,
    BytesInMultiByteString);
  return 0;
}
