/*
 * XREFs of MmSetAccessLogging @ 0x14036A840
 * Callers:
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A88964 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140AA07D4 (PfTSetTracingPriority.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmSetAccessLogging(int a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v10; // zf
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  dword_140C680E8 = a1;
  dword_140C680EC = a2;
  if ( a1 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    result = (unsigned int)KiIrqlFlags;
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
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !ListEntry )
      return KiInsertQueueDpc((ULONG_PTR)&dword_140C683A0, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    if ( stru_140C680C8.Parameter )
    {
      if ( stru_140C680C8.Parameter == (void *)2 )
        stru_140C680C8.Parameter = (void *)3;
    }
    else
    {
      stru_140C680C8.List.Flink = 0LL;
      stru_140C680C8.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_140C680C8.Parameter = (void *)1;
      ExQueueWorkItem(&stru_140C680C8, DelayedWorkQueue);
    }
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v6 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = ((unsigned int)result & v12[5]) == 0;
        v12[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    __writecr8(v6);
  }
  return result;
}
