/*
 * XREFs of sub_1800853E8 @ 0x1800853E8
 * Callers:
 *     sub_1800446A0 @ 0x1800446A0 (sub_1800446A0.c)
 *     sub_180069D30 @ 0x180069D30 (sub_180069D30.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

__int64 __fastcall sub_1800853E8(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_180085420(a1, v5, v6);
}
