/*
 * XREFs of RaMiniportIsFeatureSupported @ 0x1C0022074
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C00011C0 (StorPortUnitIdleCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C00013E0 (StorPortUnitActiveConditionStep1.c)
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 * Callees:
 *     <none>
 */

char __fastcall RaMiniportIsFeatureSupported(__int64 a1, int a2)
{
  int v2; // r8d
  char result; // al

  v2 = *(_DWORD *)(a1 + 304);
  result = 0;
  if ( v2 )
  {
    if ( a2 < v2 )
      return *(_BYTE *)(a2 + a1 + 308);
  }
  return result;
}
