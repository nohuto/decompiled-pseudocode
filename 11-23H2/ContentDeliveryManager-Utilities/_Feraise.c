/*
 * XREFs of _Feraise @ 0x1800214B8
 * Callers:
 *     _FXp_addh @ 0x18000C1D4 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000C650 (_FXp_mulh.c)
 *     _Xp_addh @ 0x18000CEE4 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D374 (_Xp_mulh.c)
 *     _LXp_addh @ 0x18000DA54 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000DE30 (_LXp_mulh.c)
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
