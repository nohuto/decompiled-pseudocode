/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140207670 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14024DDC0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E790 (RtlpHpSegPageRangeShrink.c)
 *     PsImpersonateContainerOfThread @ 0x14025A170 (PsImpersonateContainerOfThread.c)
 *     MiEmptyDecayClusterTimers @ 0x14025B1B0 (MiEmptyDecayClusterTimers.c)
 *     MiReferenceControlAreaPfn @ 0x14025B5B0 (MiReferenceControlAreaPfn.c)
 *     MiComputeAgingAmount @ 0x14025BDB0 (MiComputeAgingAmount.c)
 *     MiAgePte @ 0x14027BFF0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140287B70 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     MiGetVadWakeList @ 0x14028A400 (MiGetVadWakeList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiLockFreeLargePageLists @ 0x1402D8280 (MiLockFreeLargePageLists.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140337550 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14025B690 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x140601254 (PerfLogSpinLockAcquire.c)
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
