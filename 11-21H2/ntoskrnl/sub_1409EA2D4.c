/*
 * XREFs of sub_1409EA2D4 @ 0x1409EA2D4
 * Callers:
 *     sub_1409E9E48 @ 0x1409E9E48 (sub_1409E9E48.c)
 *     sub_1409E9F80 @ 0x1409E9F80 (sub_1409E9F80.c)
 * Callees:
 *     sub_1408142DC @ 0x1408142DC (sub_1408142DC.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 *     sub_140814C04 @ 0x140814C04 (sub_140814C04.c)
 */

void __fastcall sub_1409EA2D4(__int64 a1, unsigned int a2, __int128 *a3, unsigned __int8 a4, __int64 a5, int a6)
{
  sub_1408142DC(a1, a2, a3, 0x20u);
  sub_140814360((int *)a3, a1, a2, a4, a5, a6);
  sub_140814C04(a1, a2);
}
