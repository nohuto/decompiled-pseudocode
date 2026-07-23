/*
 * XREFs of IoStopTimer @ 0x140557B80
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1405556F4 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
