/*
 * XREFs of PpIrpAllocateDeviceUsageNotification @ 0x140854030
 * Callers:
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x14096F204 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E720 (IoAllocateIrp.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 */

PIRP __fastcall PpIrpAllocateDeviceUsageNotification(__int64 a1)
{
  struct _KEVENT *v1; // rdi
  PIRP result; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  v1 = (struct _KEVENT *)(a1 + 40);
  KeInitializeEvent((PRKEVENT)(a1 + 40), NotificationEvent, 0);
  result = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)a1 + 76LL), 0);
  if ( result )
  {
    result->Tail.Overlay.OriginalFileObject = *(PFILE_OBJECT *)(a1 + 16);
    result->Tail.Overlay.Thread = KeGetCurrentThread();
    result->UserIosb = (PIO_STATUS_BLOCK)(a1 + 24);
    CurrentStackLocation = result->Tail.Overlay.CurrentStackLocation;
    result->RequestorMode = 0;
    result->UserEvent = v1;
    result->Flags = 4;
    result->Overlay.AllocationSize.QuadPart = 0LL;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 5659;
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
    result->IoStatus.Status = -1073741637;
    result->AssociatedIrp.MasterIrp = 0LL;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = *(_BYTE *)(a1 + 12);
    CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 8);
  }
  return result;
}
