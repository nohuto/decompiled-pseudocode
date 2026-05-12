/*
 * XREFs of RaMiniportIsFeatureSupported @ 0x1C0022BC8
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     StorPortAdapterIdleCondition @ 0x1C0014140 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     <none>
 */

char __fastcall RaMiniportIsFeatureSupported(__int64 a1, int a2)
{
  int v2; // r8d
  char result; // al

  v2 = *(_DWORD *)(a1 + 300);
  result = 0;
  if ( v2 )
  {
    if ( a2 < v2 )
      return *(_BYTE *)(a2 + a1 + 304);
  }
  return result;
}
