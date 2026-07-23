/*
 * XREFs of sub_140A99478 @ 0x140A99478
 * Callers:
 *     sub_140A98170 @ 0x140A98170 (sub_140A98170.c)
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 * Callees:
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A9952C @ 0x140A9952C (sub_140A9952C.c)
 */

__int64 __fastcall sub_140A99478(int a1)
{
  unsigned __int8 v1; // bl

  if ( !a1 )
    return sub_140A9952C();
  v1 = sub_1406018DC();
  sub_140A994C4(1LL);
  dword_140D5751C = 1;
  sub_140A994FC(1LL);
  return sub_140601864(v1);
}
