/*
 * XREFs of KeyboardToggleWaitWake @ 0x1C0005ED8
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0005CC0 (KeyboardClassWaitWakeComplete.c)
 *     KeyboardClassSetWmiDataBlock @ 0x1C000F8F0 (KeyboardClassSetWmiDataBlock.c)
 *     KeyboardClassSetWmiDataItem @ 0x1C000F990 (KeyboardClassSetWmiDataItem.c)
 * Callees:
 *     KeyboardToggleWaitWakeWorker @ 0x1C0006020 (KeyboardToggleWaitWakeWorker.c)
 */

NTSTATUS __fastcall KeyboardToggleWaitWake(__int64 a1, char a2)
{
  struct _IO_REMOVE_LOCK *v2; // rsi
  NTSTATUS result; // eax
  __int64 Pool2; // rbx
  PIO_WORKITEM WorkItem; // rax

  v2 = (struct _IO_REMOVE_LOCK *)(a1 + 32);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 32), KeyboardToggleWaitWakeWorker, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 32LL, 1130652235LL);
    if ( Pool2 )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      *(_QWORD *)(Pool2 + 16) = WorkItem;
      if ( !WorkItem )
      {
        IoReleaseRemoveLockEx(v2, KeyboardToggleWaitWakeWorker, 0x20u);
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return -1073741670;
      }
      *(_QWORD *)(Pool2 + 8) = a1;
      *(_BYTE *)(Pool2 + 24) = a2;
      if ( KeGetCurrentIrql() )
        IoQueueWorkItem(*(PIO_WORKITEM *)(Pool2 + 16), KeyboardToggleWaitWakeWorker, DelayedWorkQueue, (PVOID)Pool2);
      else
        KeyboardToggleWaitWakeWorker(*(PDEVICE_OBJECT *)a1, (PVOID)Pool2);
    }
    else
    {
      IoReleaseRemoveLockEx(v2, KeyboardToggleWaitWakeWorker, 0x20u);
    }
    return 0;
  }
  return result;
}
