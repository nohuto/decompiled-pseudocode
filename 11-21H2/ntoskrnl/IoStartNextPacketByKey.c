/*
 * XREFs of IoStartNextPacketByKey @ 0x140557DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402577EC @ 0x1402577EC (sub_1402577EC.c)
 *     sub_14055838C @ 0x14055838C (sub_14055838C.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    sub_1402577EC((__int64)DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    sub_14055838C(DeviceObject, Cancelable, Key);
}
