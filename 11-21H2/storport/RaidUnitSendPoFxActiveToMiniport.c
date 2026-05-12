/*
 * XREFs of RaidUnitSendPoFxActiveToMiniport @ 0x1C0022470
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C000C2D0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C000C470 (StorPortUnitIdleCondition.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxActiveToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 336LL);
  return v2;
}
