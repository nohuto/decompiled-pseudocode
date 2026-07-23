/*
 * XREFs of sub_14091C758 @ 0x14091C758
 * Callers:
 *     sub_14091BF58 @ 0x14091BF58 (sub_14091BF58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14091C758(int *a1, unsigned int a2)
{
  if ( a2 < 0x40 || a1[3] >= 0 || a1[13] >= (unsigned int)a1[12] || (unsigned int)a1[14] >= 0xFFFFFFC0 )
    return (unsigned int)-1072103376;
  else
    return a2 < a1[14] + 64 ? 0xC0190030 : 0;
}
