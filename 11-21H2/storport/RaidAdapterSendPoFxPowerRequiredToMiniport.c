/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0048D60
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C00152F0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C001E3A0 (StorPortAdapterPowerRequiredStep1.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C004A660 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C004A9D0 (StorPortAdapterDirectedPowerUp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 336);
  return v2;
}
