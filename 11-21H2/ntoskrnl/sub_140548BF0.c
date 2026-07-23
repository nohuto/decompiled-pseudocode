/*
 * XREFs of sub_140548BF0 @ 0x140548BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405493A8 @ 0x1405493A8 (sub_1405493A8.c)
 *     sub_140549510 @ 0x140549510 (sub_140549510.c)
 *     sub_14054961C @ 0x14054961C (sub_14054961C.c)
 */

__int64 __fastcall sub_140548BF0(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return sub_140549510();
  if ( a3 > 0xC )
    return sub_14054961C();
  return sub_1405493A8();
}
