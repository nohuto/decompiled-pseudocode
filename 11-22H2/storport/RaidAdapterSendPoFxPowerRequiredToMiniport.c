/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C004BDC0
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C004D9D0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C004DD30 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C004E350 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C004E610 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 336);
  return v2;
}
