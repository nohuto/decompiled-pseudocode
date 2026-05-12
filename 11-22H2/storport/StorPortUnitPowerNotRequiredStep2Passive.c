/*
 * XREFs of StorPortUnitPowerNotRequiredStep2Passive @ 0x1C004F6D0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C004F438 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 488, 0);
  StorPortUnitPowerNotRequiredStep2((char *)Context);
}
