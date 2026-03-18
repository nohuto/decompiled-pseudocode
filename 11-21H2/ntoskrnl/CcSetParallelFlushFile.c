/*
 * XREFs of CcSetParallelFlushFile @ 0x140238FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(SharedCacheMap[66] + 704LL), &LockHandle);
  if ( EnableParallelFlush )
    *((_DWORD *)SharedCacheMap + 38) |= 0x40000u;
  else
    *((_DWORD *)SharedCacheMap + 38) &= ~0x40000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
}
