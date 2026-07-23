/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x140289E70
 * Callers:
 *     RtlpHpVsContextMultiAlloc @ 0x140249E80 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A180 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x14024A550 (RtlpHpVsChunkSplit.c)
 *     RtlpHpAllocateHeap @ 0x14024D4F0 (RtlpHpAllocateHeap.c)
 *     RtlpHpVsChunkFree @ 0x14024D6D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextFreeList @ 0x14024EEC0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocate @ 0x14034CD54 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

int __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  _DWORD *v3; // rcx
  unsigned __int64 v4; // rsi
  $C71981A45BEB2B45F82C232A7085991E *v5; // rax
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rcx
  bool v11; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v3 = *(_DWORD **)(a2 + 8);
    v4 = *(unsigned __int8 *)(a2 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
    else
      *v3 = 0;
    LODWORD(v5) = (_DWORD)KiIrqlFlags;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v4 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = ($C71981A45BEB2B45F82C232A7085991E *)(-1LL << ((unsigned __int8)v4 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)v5;
        v11 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v11 )
          LODWORD(v5) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    v6 = *(volatile signed __int64 **)(a2 + 8);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    LODWORD(v5) = KeAbPostRelease((ULONG_PTR)v6);
    CurrentThread = KeGetCurrentThread();
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 )
    {
      v5 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v5->ApcState.ApcListHead[0].Flink != v5 )
        LODWORD(v5) = KiCheckForKernelApcDelivery(CurrentThread, v7, v8, v9);
    }
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return (int)v5;
}
