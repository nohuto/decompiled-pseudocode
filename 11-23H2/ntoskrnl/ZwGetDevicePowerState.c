/*
 * XREFs of ZwGetDevicePowerState @ 0x14041D070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Device);
}
