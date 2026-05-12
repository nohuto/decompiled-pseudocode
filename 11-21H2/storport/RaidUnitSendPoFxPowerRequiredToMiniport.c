/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C004A334
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x1C004AE40 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C004B300 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C004B990 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C004BD30 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 336LL);
  return v2;
}
