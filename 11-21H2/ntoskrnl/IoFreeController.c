/*
 * XREFs of IoFreeController @ 0x140257920
 * Callers:
 *     IoAllocateController @ 0x1402578A0 (IoAllocateController.c)
 *     sub_14060ECB0 @ 0x14060ECB0 (sub_14060ECB0.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x140257A90 (KeRemoveDeviceQueue.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall IoFreeController(PCONTROLLER_OBJECT ControllerObject)
{
  KDEVICE_QUEUE *p_DeviceWaitQueue; // rbx
  PKDEVICE_QUEUE_ENTRY v2; // rax

  p_DeviceWaitQueue = &ControllerObject->DeviceWaitQueue;
  do
    v2 = KeRemoveDeviceQueue(p_DeviceWaitQueue);
  while ( v2 && (unsigned int)sub_14042A5E0(&v2[-4].SortKey, v2[-2].DeviceListEntry.Flink) == 2 );
}
