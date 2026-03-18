/*
 * XREFs of IoStartNextPacket @ 0x1402577B0
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x1406112B0 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x1402577EC (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacket @ 0x140257964 (IopStartNextPacket.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
