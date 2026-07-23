/*
 * XREFs of RtlOemToUnicodeN @ 0x1407F9C40
 * Callers:
 *     sub_1406AC4B0 @ 0x1406AC4B0 (sub_1406AC4B0.c)
 *     RtlOemStringToUnicodeString @ 0x1407F9B70 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1409B56D0 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlCustomCPToUnicodeN @ 0x14075A700 (RtlCustomCPToUnicodeN.c)
 *     sub_14075A7E4 @ 0x14075A7E4 (sub_14075A7E4.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  _CPTABLEINFO *v9; // rax

  v9 = sub_14075A7E4();
  return RtlCustomCPToUnicodeN(
           v9,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}
