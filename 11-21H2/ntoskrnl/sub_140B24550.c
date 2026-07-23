/*
 * XREFs of sub_140B24550 @ 0x140B24550
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 */

NTSTATUS __fastcall sub_140B24550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  *(_OWORD *)a3 = *(_OWORD *)a5;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a3 + 64) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a5 + 80);
  *(_QWORD *)(a3 + 96) = *(_QWORD *)(a5 + 96);
  RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 8), (PUNICODE_STRING)(a3 + 8));
  RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 24), (PUNICODE_STRING)(a3 + 24));
  RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 56), (PUNICODE_STRING)(a3 + 56));
  RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 40), (PUNICODE_STRING)(a3 + 40));
  return sub_1402D2774(&stru_140012DE0, (unsigned __int16 *)(a3 + 8));
}
