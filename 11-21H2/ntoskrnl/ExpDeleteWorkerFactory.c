/*
 * XREFs of ExpDeleteWorkerFactory @ 0x1402D53C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 */

LONG_PTR __fastcall ExpDeleteWorkerFactory(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rax
  void *v4; // rsi
  char v5; // bp
  unsigned __int64 OldIrql; // rdi
  LONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(KSPIN_LOCK **)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 34LL) = 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(void **)(v3 + 8);
  v5 = *(_BYTE *)(v3 + 32);
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
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x66577845u);
  ObCloseHandle(*(HANDLE *)(a1 + 40), 0);
  result = ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  if ( !v5 )
  {
    IoFreeMiniCompletionPacket(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
    return ExFreeHeapPool(*(_QWORD *)(a1 + 16));
  }
  return result;
}
