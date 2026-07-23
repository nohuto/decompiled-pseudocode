/*
 * XREFs of IoSetDeviceToVerify @ 0x140410090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetDeviceToVerify(PETHREAD Thread, PDEVICE_OBJECT DeviceObject)
{
  Thread[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)DeviceObject;
}
