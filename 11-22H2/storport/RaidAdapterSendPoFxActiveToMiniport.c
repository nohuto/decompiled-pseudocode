/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F708
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C001F5B0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001F670 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 336);
  return v2;
}
