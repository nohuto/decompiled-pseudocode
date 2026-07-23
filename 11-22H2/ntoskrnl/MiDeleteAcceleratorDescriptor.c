/*
 * XREFs of MiDeleteAcceleratorDescriptor @ 0x140654A6C
 * Callers:
 *     MiDrainEngineDescriptors @ 0x1402221B4 (MiDrainEngineDescriptors.c)
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     MiZeroPageCalibrate @ 0x1403A9F00 (MiZeroPageCalibrate.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiReturnUnusedHugeDescriptors @ 0x140622780 (MiReturnUnusedHugeDescriptors.c)
 *     MiZeroHugeRangeWorker @ 0x140622E40 (MiZeroHugeRangeWorker.c)
 *     MiFreeHardwareDescriptor @ 0x140654F0C (MiFreeHardwareDescriptor.c)
 *     MiZeroNodeExiting @ 0x1406557A8 (MiZeroNodeExiting.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4438C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeLargePageWaiters @ 0x140650074 (MiWakeLargePageWaiters.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
  v3 = ExAcquireSpinLockExclusive(&dword_140C69920);
  v4 = v2[12]-- == 1;
  if ( v4 && (v2[13] & 1) != 0 )
  {
    v5 = *(_QWORD **)v2;
    v6 = (void **)*((_QWORD *)v2 + 1);
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 || *v6 != v2 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    --dword_140C69910;
    v7 = *(_QWORD *)(qword_140C65BA0 + 376LL * (unsigned int)v2[6] + 368);
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
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C69920);
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
