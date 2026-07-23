/*
 * XREFs of sub_14082BA10 @ 0x14082BA10
 * Callers:
 *     sub_14082B4E0 @ 0x14082B4E0 (sub_14082B4E0.c)
 *     sub_14082B6F0 @ 0x14082B6F0 (sub_14082B6F0.c)
 *     sub_140B04C20 @ 0x140B04C20 (sub_140B04C20.c)
 *     sub_140B05360 @ 0x140B05360 (sub_140B05360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14082BA10(int a1, int a2)
{
  unsigned int v2; // r9d
  int v4; // r9d

  v2 = ((unsigned int)a2 >> 28) & 2 | 1;
  if ( (a2 & 0x40000000) == 0 )
    v2 = ((unsigned int)a2 >> 28) & 2;
  if ( a2 < 0 )
  {
    v4 = v2 & 2;
    if ( a1 != 1 )
      return v4 != 0 ? 6 : 4;
    v2 = v4 != 0 ? 7 : 5;
  }
  if ( !v2 )
    return 24;
  return v2;
}
