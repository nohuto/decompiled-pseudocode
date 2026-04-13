/*
 * XREFs of _LDscale @ 0x18000D354
 * Callers:
 *     _Stoldx @ 0x180005BD0 (_Stoldx.c)
 *     _LXp_addh @ 0x18000D360 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000D72C (_LXp_mulh.c)
 *     _LXp_setw @ 0x18000DA68 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(_WORD *a1, int a2)
{
  return Dscale(a1, a2);
}
