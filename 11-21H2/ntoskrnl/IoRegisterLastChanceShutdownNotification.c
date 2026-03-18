/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x14084DE80
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x1403D23B8 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x14084DF74 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
