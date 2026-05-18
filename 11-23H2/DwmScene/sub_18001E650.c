/*
 * XREFs of sub_18001E650 @ 0x18001E650
 * Callers:
 *     sub_18001E228 @ 0x18001E228 (sub_18001E228.c)
 *     sub_18001EA48 @ 0x18001EA48 (sub_18001EA48.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_18001EC48 @ 0x18001EC48 (sub_18001EC48.c)
 *     sub_180030B74 @ 0x180030B74 (sub_180030B74.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18001E650(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = a1 | 7;
  if ( v3 > a3 )
    return a3;
  v4 = a2 >> 1;
  if ( a2 > a3 - (a2 >> 1) )
    return a3;
  result = v4 + a2;
  if ( v3 >= v4 + a2 )
    return v3;
  return result;
}
