/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x1C0038104
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x1C0078B30 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
