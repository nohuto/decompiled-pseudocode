/*
 * XREFs of RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0055230
 * Callers:
 *     RaUnitSetUnresponsiveAttribute @ 0x1C005256C (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C005532C (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitQueueHierarchicalResetWorkItem(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  unsigned int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  WorkItem = IoAllocateWorkItem(v2);
  if ( !WorkItem )
    return *(_QWORD *)(a1 + 1768) != 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1792), &LockHandle);
  if ( *(_QWORD *)(a1 + 1768) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoFreeWorkItem(WorkItem);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
    v5 = *(_DWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 1768) = WorkItem;
    if ( v5 < 0x1E )
      v5 = 30;
    *(_DWORD *)(a1 + 1780) = 0;
    *(_DWORD *)(a1 + 1776) = 4 * v5 + 42;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)RaidHierarchicalResetWorkRoutine, CriticalWorkQueue, WorkItem);
  }
  return 1;
}
