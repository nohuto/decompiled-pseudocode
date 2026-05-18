/*
 * XREFs of sub_180085564 @ 0x180085564
 * Callers:
 *     sub_1800507AC @ 0x1800507AC (sub_1800507AC.c)
 *     sub_180080F70 @ 0x180080F70 (sub_180080F70.c)
 *     sub_18009B3C0 @ 0x18009B3C0 (sub_18009B3C0.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

int __fastcall sub_180085564(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  return sub_18008559C(a1, v5, a3);
}
