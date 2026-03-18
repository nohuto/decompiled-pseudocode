/*
 * XREFs of IrqArbpLookupIsaOverrideByGsiv @ 0x1C009E4B4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4C0 (IrqArbAddAllocation.c)
 *     IrqArbIrqFromGsiv @ 0x1C009D6CC (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDD0 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     <none>
 */

char __fastcall IrqArbpLookupIsaOverrideByGsiv(int a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *i; // r8

  v2 = 0;
  for ( i = &IsaVectorOverrides; *i != a1; i += 2 )
  {
    if ( (unsigned int)++v2 >= 0x10 )
      return 0;
  }
  *a2 = v2;
  return 1;
}
