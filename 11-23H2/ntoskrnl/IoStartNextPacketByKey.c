/*
 * XREFs of IoStartNextPacketByKey @ 0x140557950
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKey @ 0x1405581D8 (IopStartNextPacketByKey.c)
 *     IopStartNextPacketByKeyEx @ 0x14055829C (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable);
}
