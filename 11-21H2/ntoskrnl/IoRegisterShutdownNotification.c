/*
 * XREFs of IoRegisterShutdownNotification @ 0x14084DF00
 * Callers:
 *     DifIoRegisterShutdownNotificationWrapper @ 0x1406107C0 (DifIoRegisterShutdownNotificationWrapper.c)
 *     RawInitialize @ 0x140B229D0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B22C40 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x1403D23B8 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x14084DF74 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi

  Pool2 = ExAllocatePool2(64LL, 24LL, 1750298441LL);
  v3 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 16) = DeviceObject;
  ObfReferenceObject(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION);
  return 0;
}
