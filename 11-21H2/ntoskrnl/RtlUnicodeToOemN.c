/*
 * XREFs of RtlUnicodeToOemN @ 0x1407592A0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1406EAEF0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407591C0 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x140759E60 (RtlUnicodeToCustomCPN.c)
 *     sub_14075A7E4 @ 0x14075A7E4 (sub_14075A7E4.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  _CPTABLEINFO *v9; // rax

  v9 = (_CPTABLEINFO *)sub_14075A7E4();
  return RtlUnicodeToCustomCPN(
           v9,
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (PWCH)UnicodeString,
           BytesInUnicodeString);
}
