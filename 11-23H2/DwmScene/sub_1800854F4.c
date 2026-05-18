/*
 * XREFs of sub_1800854F4 @ 0x1800854F4
 * Callers:
 *     sub_1800446C0 @ 0x1800446C0 (sub_1800446C0.c)
 *     sub_180069D30 @ 0x180069D30 (sub_180069D30.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

__int64 __fastcall sub_1800854F4(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  return sub_18008552C(a1, v5, a3);
}
