/*
 * XREFs of PopFreeIrp @ 0x14028E528
 * Callers:
 *     PopRequestCompletion @ 0x14028E350 (PopRequestCompletion.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x14028E430 (PopHandleDevicePowerIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140AA7430 (PopSystemIrpCompletion.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopFxReleasePowerIrp @ 0x14028DFD4 (PopFxReleasePowerIrp.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall PopFreeIrp(PIRP Irp)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  void *v4; // r14
  void *v5; // r15
  __int64 v6; // rcx
  __int64 **v7; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v15[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v15, 0, 24);
  v2 = (__int64 *)*((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v3 = v2[25];
  v4 = (void *)v2[4];
  v5 = (void *)v2[3];
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, v15);
  v6 = *v2;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  v7 = (__int64 **)v2[1];
  if ( *(__int64 **)(v6 + 8) != v2 || *v7 != v2 )
    __fastfail(3u);
  PopIrpLockThread = 0LL;
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v15);
  OldIrql = v15[0].OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v15[0].OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (v15[0].OldIrql + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v3 && *((_BYTE *)v2 + 184) == 2 && *((_DWORD *)v2 + 47) == 1 )
  {
    PopFxReleasePowerIrp(v3);
  }
  else
  {
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v2);
    IoFreeIrp(Irp);
  }
  ObfDereferenceObjectWithTag(v4, 0x72496F50u);
  return ObfDereferenceObjectWithTag(v5, 0x72496F50u);
}
