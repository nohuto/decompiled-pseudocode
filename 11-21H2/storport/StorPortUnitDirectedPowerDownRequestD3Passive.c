/*
 * XREFs of StorPortUnitDirectedPowerDownRequestD3Passive @ 0x1C004B2E0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitDirectedPowerDownRequestD3 @ 0x1C004B0B0 (StorPortUnitDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortUnitDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 476, 0);
  StorPortUnitDirectedPowerDownRequestD3((PVOID)Context);
}
