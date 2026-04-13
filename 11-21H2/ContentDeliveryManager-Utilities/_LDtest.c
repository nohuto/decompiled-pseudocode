/*
 * XREFs of _LDtest @ 0x180021330
 * Callers:
 *     _LXp_addh @ 0x18000D360 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000D72C (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __cdecl LDtest(long double *a1)
{
  return Dtest(a1);
}
