/*
 * XREFs of sub_14097D948 @ 0x14097D948
 * Callers:
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14097D948(int a1)
{
  if ( (a1 & 0x2BF5FFFF) != 0 || (a1 & 0x4000000) == 0 || (a1 & 0x8000000) != 0 )
    return 3221225485LL;
  if ( a1 >= 0 )
  {
    if ( (a1 & 0xA0000) == 0xA0000 )
      return 3221225485LL;
  }
  else if ( (a1 & 0x80000) != 0 || (a1 & 0x20000) != 0 )
  {
    return 3221225485LL;
  }
  if ( (a1 & 0x50000000) == 0x50000000 )
    return 3221225485LL;
  return 0LL;
}
