/*
 * XREFs of sub_1C006265C @ 0x1C006265C
 * Callers:
 *     sub_1C005F3EC @ 0x1C005F3EC (sub_1C005F3EC.c)
 *     sub_1C00627D8 @ 0x1C00627D8 (sub_1C00627D8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C006265C(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  unsigned int v5; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  WorkItem = IoAllocateWorkItem(v2);
  if ( !WorkItem )
    return *(_QWORD *)(a1 + 1816) != 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1840), &LockHandle);
  if ( *(_QWORD *)(a1 + 1816) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoFreeWorkItem(WorkItem);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 968));
    v5 = *(_DWORD *)(a1 + 1320);
    *(_QWORD *)(a1 + 1816) = WorkItem;
    if ( v5 < 0x1E )
      v5 = 30;
    *(_DWORD *)(a1 + 1828) = 0;
    *(_DWORD *)(a1 + 1824) = 4 * v5 + 42;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)sub_1C0060DE0, CriticalWorkQueue, WorkItem);
  }
  return 1;
}
