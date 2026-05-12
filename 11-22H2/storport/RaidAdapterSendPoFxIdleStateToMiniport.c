/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C004BD3C
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C004E010 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 336);
  return v2;
}
