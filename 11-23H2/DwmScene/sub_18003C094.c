/*
 * XREFs of sub_18003C094 @ 0x18003C094
 * Callers:
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 *     sub_18003D07C @ 0x18003D07C (sub_18003D07C.c)
 * Callees:
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_18003C094(__int64 a1, _QWORD *a2)
{
  sub_18003E330(a1);
  sub_180011C50(a1 + 128, a2);
  return a2;
}
