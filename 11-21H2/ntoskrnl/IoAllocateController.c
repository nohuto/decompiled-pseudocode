/*
 * XREFs of IoAllocateController @ 0x1402578A0
 * Callers:
 *     sub_14060C8C0 @ 0x14060C8C0 (sub_14060C8C0.c)
 * Callees:
 *     IoFreeController @ 0x140257920 (IoFreeController.c)
 *     KeInsertDeviceQueue @ 0x140257A00 (KeInsertDeviceQueue.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall IoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  DeviceObject->Queue.Wcb.DeviceRoutine = ExecutionRoutine;
  DeviceObject->Queue.Wcb.DeviceContext = Context;
  if ( !KeInsertDeviceQueue(&ControllerObject->DeviceWaitQueue, (PKDEVICE_QUEUE_ENTRY)&DeviceObject->Queue)
    && (unsigned int)sub_14042A5E0(DeviceObject, DeviceObject->CurrentIrp) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
