/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x140319A20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140305588 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     AlpcpQueueIoCompletion @ 0x14031A788 (AlpcpQueueIoCompletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // r14d
  int v6; // r15d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  void *v16; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  while ( 1 )
  {
    v6 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &LockHandle);
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 )
    {
      *(_DWORD *)(v2 + 16) = v7 - 1;
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 20);
      if ( v8 )
      {
        v6 = -1;
        *(_DWORD *)(v2 + 20) = v8 - 1;
      }
      else
      {
        v9 = *(_QWORD *)(v2 + 32);
        a1 = 0LL;
        --*(_DWORD *)(v2 + 12);
        *a2 = v9;
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v3 = 1;
      }
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !a1 )
      break;
    if ( ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40)) )
    {
      v16 = *(void **)(v2 + 40);
      AlpcpQueueIoCompletion((_DWORD)v16, *(_QWORD *)(v2 + 48), v6, a1, 0, 0);
      ObfDereferenceObjectWithTag(v16, 0x746C6644u);
      break;
    }
  }
  if ( v3 )
    AlpcpDeferredFreeCompletionPacketLookaside((_QWORD *)v2);
}
