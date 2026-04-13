/*
 * XREFs of _LDunscale @ 0x180021A64
 * Callers:
 *     _LXp_addh @ 0x18000DA54 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000DE30 (_LXp_mulh.c)
 *     _LXp_setw @ 0x18000E16C (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDunscale(_WORD *a1, unsigned __int16 *a2)
{
  return Dunscale(a1, a2);
}
