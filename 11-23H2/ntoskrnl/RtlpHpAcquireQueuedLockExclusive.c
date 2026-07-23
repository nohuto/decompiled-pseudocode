/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x140207670
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x14024A180 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x14024A550 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x14024D6D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextFreeList @ 0x14024EEC0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpAcquireQueuedLockExclusive(volatile signed __int32 *a1, int a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    a3[1] = a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v9) = 4;
      else
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    }
    else
    {
      v10 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql);
      while ( (*a1 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (*a1 & 0x40000000) == 0 )
          _InterlockedOr(a1, 0x40000000u);
        KeYieldProcessorEx(&v10);
      }
    }
    result = CurrentIrql;
    a3[2] = CurrentIrql;
  }
  else
  {
    *a3 = 0LL;
    a3[2] = 0LL;
    CurrentThread = KeGetCurrentThread();
    a3[1] = a1;
    --CurrentThread->SpecialApcDisable;
    return ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  }
  return result;
}
