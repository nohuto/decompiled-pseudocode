/*
 * XREFs of MouseToggleWaitWake @ 0x1C00059D8
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C00057D0 (MouseClassWaitWakeComplete.c)
 *     MouseClassSetWmiDataBlock @ 0x1C000F340 (MouseClassSetWmiDataBlock.c)
 *     MouseClassSetWmiDataItem @ 0x1C000F3E0 (MouseClassSetWmiDataItem.c)
 * Callees:
 *     MouseToggleWaitWakeWorker @ 0x1C0005B20 (MouseToggleWaitWakeWorker.c)
 */

NTSTATUS __fastcall MouseToggleWaitWake(__int64 a1, char a2)
{
  struct _IO_REMOVE_LOCK *v2; // rsi
  NTSTATUS result; // eax
  __int64 Pool2; // rbx
  PIO_WORKITEM WorkItem; // rax

  v2 = (struct _IO_REMOVE_LOCK *)(a1 + 32);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 32), MouseToggleWaitWakeWorker, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 32LL, 1131769677LL);
    if ( Pool2 )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      *(_QWORD *)(Pool2 + 16) = WorkItem;
      if ( !WorkItem )
      {
        IoReleaseRemoveLockEx(v2, MouseToggleWaitWakeWorker, 0x20u);
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return -1073741670;
      }
      *(_QWORD *)(Pool2 + 8) = a1;
      *(_BYTE *)(Pool2 + 24) = a2;
      if ( KeGetCurrentIrql() )
        IoQueueWorkItem(*(PIO_WORKITEM *)(Pool2 + 16), MouseToggleWaitWakeWorker, DelayedWorkQueue, (PVOID)Pool2);
      else
        MouseToggleWaitWakeWorker(*(PDEVICE_OBJECT *)a1, (PVOID)Pool2);
    }
    else
    {
      IoReleaseRemoveLockEx(v2, MouseToggleWaitWakeWorker, 0x20u);
    }
    return 0;
  }
  return result;
}
