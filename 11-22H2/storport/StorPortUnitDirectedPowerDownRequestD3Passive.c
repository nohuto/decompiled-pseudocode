/*
 * XREFs of StorPortUnitDirectedPowerDownRequestD3Passive @ 0x1C004ECD0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitDirectedPowerDownRequestD3 @ 0x1C004EA90 (StorPortUnitDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortUnitDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 488, 0);
  StorPortUnitDirectedPowerDownRequestD3((char *)Context);
}
