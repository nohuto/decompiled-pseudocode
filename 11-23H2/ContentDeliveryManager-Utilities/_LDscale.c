/*
 * XREFs of _LDscale @ 0x18000DA48
 * Callers:
 *     _Stoldx @ 0x180006264 (_Stoldx.c)
 *     _LXp_addh @ 0x18000DA54 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000DE30 (_LXp_mulh.c)
 *     _LXp_setw @ 0x18000E16C (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __fastcall LDscale(unsigned __int16 *a1, int a2)
{
  return Dscale(a1, a2);
}
