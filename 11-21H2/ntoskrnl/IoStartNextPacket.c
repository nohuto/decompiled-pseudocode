/*
 * XREFs of IoStartNextPacket @ 0x1402577B0
 * Callers:
 *     sub_1406112B0 @ 0x1406112B0 (sub_1406112B0.c)
 * Callees:
 *     sub_1402577EC @ 0x1402577EC (sub_1402577EC.c)
 *     sub_140257964 @ 0x140257964 (sub_140257964.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    sub_1402577EC(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    sub_140257964(DeviceObject, Cancelable);
}
