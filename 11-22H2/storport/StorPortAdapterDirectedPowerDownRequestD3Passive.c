/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x1C004DD10
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C004DB00 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3Passive(
        PDEVICE_OBJECT DeviceObject,
        volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1404, 0);
  StorPortAdapterDirectedPowerDownRequestD3((char *)Context);
}
