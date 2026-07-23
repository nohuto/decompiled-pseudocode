/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x14080ED80
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x140374A1C (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x14080EE74 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *Pool2; // rdi

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1750298441LL);
  if ( !Pool2 )
    return -1073741670;
  ObfReferenceObject(DeviceObject);
  Pool2[2] = DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyLastChanceShutdownQueueHead, Pool2);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION);
  return 0;
}
