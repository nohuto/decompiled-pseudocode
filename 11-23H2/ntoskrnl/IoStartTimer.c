/*
 * XREFs of IoStartTimer @ 0x140557B50
 * Callers:
 *     <none>
 * Callees:
 *     IopEnableTimer @ 0x140555A98 (IopEnableTimer.c)
 */

void __stdcall IoStartTimer(PDEVICE_OBJECT DeviceObject)
{
  if ( (DeviceObject->DeviceObjectExtension->ExtensionFlags & 0xF) == 0 )
    IopEnableTimer((__int64)DeviceObject->Timer);
}
