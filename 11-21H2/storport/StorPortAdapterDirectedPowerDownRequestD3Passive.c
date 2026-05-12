/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x1C004A9B0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C004A790 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3Passive(
        PDEVICE_OBJECT DeviceObject,
        volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1388, 0);
  StorPortAdapterDirectedPowerDownRequestD3((PVOID)Context);
}
