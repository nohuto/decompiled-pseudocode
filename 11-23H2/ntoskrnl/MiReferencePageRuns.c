/*
 * XREFs of MiReferencePageRuns @ 0x1403576E0
 * Callers:
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiReferencePageRuns @ 0x1403576E0 (MiReferencePageRuns.c)
 *     MiComputeNodeMemory @ 0x1403AC99C (MiComputeNodeMemory.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiRebuildLargePage @ 0x14046E7E8 (MiRebuildLargePage.c)
 *     MiFinishResume @ 0x1406268D0 (MiFinishResume.c)
 *     MiGetListOfPendingBadPages @ 0x140629FF8 (MiGetListOfPendingBadPages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F9D10 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x140834478 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1408520E8 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140A2B6C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2ED08 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A32BE0 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x140A46AC4 (MmScrubMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferencePageRuns @ 0x1403576E0 (MiReferencePageRuns.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v4 = ExAcquireSpinLockExclusive(&dword_140C6B520);
  if ( (_UNKNOWN *)a1 != &MiSystemPartition )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
  if ( a2 )
  {
    v5 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v5 = MmPhysicalMemoryBlock;
    if ( (_UNKNOWN *)a1 != &MiSystemPartition )
      v5 = *(_QWORD **)(a1 + 96);
  }
  if ( v5 )
  {
    ++*(v5 - 1);
    ++qword_140C6B468;
  }
  if ( (_UNKNOWN *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6B520);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( !v5 )
    return MiReferencePageRuns(&MiSystemPartition, a2);
  return (__int64)v5;
}
