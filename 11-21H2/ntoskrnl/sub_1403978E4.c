/*
 * XREFs of sub_1403978E4 @ 0x1403978E4
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_1405D1548 @ 0x1405D1548 (sub_1405D1548.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403978E4(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (xmmword_140C229F4 & 0x40000000) == 0 && a2 < a1 && a2 )
    return a1 - a2;
  return v2;
}
