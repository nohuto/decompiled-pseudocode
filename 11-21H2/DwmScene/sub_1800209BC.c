/*
 * XREFs of sub_1800209BC @ 0x1800209BC
 * Callers:
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 * Callees:
 *     sub_1800209E8 @ 0x1800209E8 (sub_1800209E8.c)
 */

__int64 __fastcall sub_1800209BC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_1800209E8(a1, a2, v3);
  return a1;
}
