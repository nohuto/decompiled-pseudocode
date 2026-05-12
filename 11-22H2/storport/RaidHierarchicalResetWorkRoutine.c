/*
 * XREFs of RaidHierarchicalResetWorkRoutine @ 0x1C0060770
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     StorLogIoError @ 0x1C005C324 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1C0061604 (RaidUnitHierarchicalReset.c)
 */

void __fastcall RaidHierarchicalResetWorkRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  struct _IO_WORKITEM *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 230, &LockHandle);
  v4 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 227);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 == Context )
  {
    StorLogIoError(*((_QWORD *)DeviceExtension + 3), *((_DWORD *)DeviceExtension + 24), -2147221375, 1);
    ++*(_DWORD *)(*((_QWORD *)DeviceExtension + 3) + 4636LL);
    RaidUnitHierarchicalReset(DeviceExtension);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 230, &LockHandle);
    if ( *((struct _IO_WORKITEM **)DeviceExtension + 227) == Context )
    {
      *((_QWORD *)DeviceExtension + 227) = 0LL;
      *((_DWORD *)DeviceExtension + 456) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  IoFreeWorkItem(Context);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
