/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2Passive @ 0x1C004AE20
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C0015344 (StorPortAdapterPowerNotRequiredStep2.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1388, 0);
  StorPortAdapterPowerNotRequiredStep2((PVOID)Context);
}
