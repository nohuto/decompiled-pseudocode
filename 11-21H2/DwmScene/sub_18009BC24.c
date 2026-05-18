/*
 * XREFs of sub_18009BC24 @ 0x18009BC24
 * Callers:
 *     sub_1800FD950 @ 0x1800FD950 (sub_1800FD950.c)
 *     sub_1800FDE78 @ 0x1800FDE78 (sub_1800FDE78.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18009BC00 @ 0x18009BC00 (sub_18009BC00.c)
 */

__int64 *__fastcall sub_18009BC24(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1555555555555555LL )
      sub_180012170();
    v4 = 12 * a2;
    v5 = sub_180011088(12 * a2);
    *a1 = v5;
    a1[2] = v4 + v5;
    a1[1] = sub_18009BC00(v5, a2);
  }
  return a1;
}
