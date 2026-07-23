/*
 * XREFs of IoStartTimer @ 0x140557DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405568E4 @ 0x1405568E4 (sub_1405568E4.c)
 */

void __stdcall IoStartTimer(PDEVICE_OBJECT DeviceObject)
{
  if ( (DeviceObject->DeviceObjectExtension->ExtensionFlags & 0xF) == 0 )
    sub_1405568E4((__int64)DeviceObject->Timer);
}
