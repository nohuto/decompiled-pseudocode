/*
 * XREFs of MiDeleteAcceleratorDescriptor @ 0x140654F4C
 * Callers:
 *     MiDrainEngineDescriptors @ 0x140222194 (MiDrainEngineDescriptors.c)
 *     MiZeroInParallel @ 0x1403044C0 (MiZeroInParallel.c)
 *     MiZeroPageCalibrate @ 0x1403AA7D0 (MiZeroPageCalibrate.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiReturnUnusedHugeDescriptors @ 0x140622C60 (MiReturnUnusedHugeDescriptors.c)
 *     MiZeroHugeRangeWorker @ 0x140623320 (MiZeroHugeRangeWorker.c)
 *     MiFreeHardwareDescriptor @ 0x1406553EC (MiFreeHardwareDescriptor.c)
 *     MiZeroNodeExiting @ 0x140655C88 (MiZeroNodeExiting.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A445CC (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeLargePageWaiters @ 0x140650554 (MiWakeLargePageWaiters.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAcceleratorDescriptor(__int64 a1)
{
  void *v1; // rsi
  _DWORD *v2; // rbx
  unsigned __int64 v3; // rdi
  bool v4; // zf
  _QWORD *v5; // rcx
  void **v6; // rax
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax

  v1 = (void *)(a1 - 32);
  v2 = *(_DWORD **)(a1 - 32 + 24);
  v3 = ExAcquireSpinLockExclusive(&dword_140C69820);
  v4 = v2[12]-- == 1;
  if ( v4 && (v2[13] & 1) != 0 )
  {
    v5 = *(_QWORD **)v2;
    v6 = (void **)*((_QWORD *)v2 + 1);
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 || *v6 != v2 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    --dword_140C69810;
    v7 = *(_QWORD *)(qword_140C65AA0 + 376LL * (unsigned int)v2[6] + 368);
    --*(_WORD *)(v7 + 10);
    --*(_WORD *)(v7 + 16);
    MiWakeLargePageWaiters(*((_QWORD **)v2 + 5));
  }
  else
  {
    v2 = 0LL;
  }
  ExFreePoolWithTag(v1, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C69820);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v4 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
}
