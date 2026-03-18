/*
 * XREFs of IoStartNextPacket @ 0x140557240
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x1405E16F0 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacket @ 0x14045F7CC (IopStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x140557BDC (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket((__int64)DeviceObject, Cancelable);
}
