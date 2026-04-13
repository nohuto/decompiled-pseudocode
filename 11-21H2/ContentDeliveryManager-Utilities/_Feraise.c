/*
 * XREFs of _Feraise @ 0x180020D90
 * Callers:
 *     _FXp_addh @ 0x18000BAEC (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000BF5C (_FXp_mulh.c)
 *     _Xp_addh @ 0x18000C7F8 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000CC80 (_Xp_mulh.c)
 *     _LXp_addh @ 0x18000D360 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000D72C (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

void __cdecl Feraise(int a1)
{
  if ( (a1 & 5) != 0 )
  {
    *_errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *_errno() = 34;
  }
}
