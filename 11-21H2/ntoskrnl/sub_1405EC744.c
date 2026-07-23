/*
 * XREFs of sub_1405EC744 @ 0x1405EC744
 * Callers:
 *     sub_1405ECB04 @ 0x1405ECB04 (sub_1405ECB04.c)
 *     sub_1409BBDD8 @ 0x1409BBDD8 (sub_1409BBDD8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EC744(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *v3; // r9

  v2 = a2 - 1;
  v3 = (_WORD *)(a1 + 2 * (a2 - 1LL));
  if ( a2 <= 0 )
    return (unsigned int)a2;
  while ( *v3 != 64 )
  {
    --v3;
    if ( --v2 < 0 )
      return (unsigned int)a2;
  }
  return (unsigned int)(v2 + 1);
}
