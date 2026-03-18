/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B438
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140207670 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MiIdentifyPfn @ 0x14023E4C0 (MiIdentifyPfn.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14024DCF0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E6C0 (RtlpHpSegPageRangeShrink.c)
 *     PsImpersonateContainerOfThread @ 0x140259EE0 (PsImpersonateContainerOfThread.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AF20 (MiEmptyDecayClusterTimers.c)
 *     MiReferenceControlAreaPfn @ 0x14025B320 (MiReferenceControlAreaPfn.c)
 *     MiComputeAgingAmount @ 0x14025BB20 (MiComputeAgingAmount.c)
 *     MiAgePte @ 0x14027BD60 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14027CBB0 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402878E0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140288770 (MiAddViewsForSection.c)
 *     MiGetVadWakeList @ 0x14028A170 (MiGetVadWakeList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExDeleteResourceLite @ 0x1402A8DC0 (ExDeleteResourceLite.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiLockFreeLargePageLists @ 0x1402D7FF0 (MiLockFreeLargePageLists.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1403372C0 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14025B400 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x140600D04 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(int *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // ebp
  int v4; // r14d
  char v5; // di
  unsigned __int64 v6; // rax
  unsigned int InterruptCount; // esi
  __int64 result; // rax
  int v9; // r9d
  unsigned __int64 v10; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v3 = v6;
  }
  else
  {
    v5 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  result = ExpAcquireSpinLockExclusive(a1, a2);
  v9 = result;
  if ( (_DWORD)result )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v5 )
  {
    v10 = __rdtsc();
    return PerfLogSpinLockAcquire(v4, v10, (int)v10 - v3, v9, InterruptCount, 3);
  }
  return result;
}
