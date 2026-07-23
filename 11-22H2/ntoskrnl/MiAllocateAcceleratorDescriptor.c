/*
 * XREFs of MiAllocateAcceleratorDescriptor @ 0x140222100
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140221074 (MiAbsorbPossibleEngineChanges.c)
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     MiZeroPageCalibrate @ 0x1403A9F00 (MiZeroPageCalibrate.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4438C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x1402E26E0 (ExAllocatePoolMm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiEngineHasDescriptors @ 0x140654DAC (MiEngineHasDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateAcceleratorDescriptor(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  int v7; // r14d
  KIRQL v8; // al
  PVOID **v9; // rdi
  unsigned __int64 v10; // rbp
  PVOID *v12; // rsi
  __int64 v13; // r9
  void *PoolMm; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  *a4 = 0LL;
  v7 = 1;
  v8 = ExAcquireSpinLockExclusive(&dword_140C69920);
  v9 = (PVOID **)qword_140C69900;
  v10 = v8;
  if ( qword_140C69900 != &qword_140C69900 )
  {
    while ( 1 )
    {
      v12 = *v9;
      if ( *((_DWORD *)v9 + 6) == a2
        && (*((_DWORD *)v9 + 13) & 1) == 0
        && !byte_140C69914
        && (!a1 || !(unsigned int)MiEngineHasDescriptors(a1, v9)) )
      {
        break;
      }
      v9 = (PVOID **)v12;
      if ( v12 == &qword_140C69900 )
        goto LABEL_2;
    }
    v13 = *((unsigned int *)v9 + 6);
    LODWORD(v13) = v13 | 0x80000000;
    PoolMm = (void *)ExAllocatePoolMm(64LL, v9[4] + 4, 1817143629LL, v13);
    if ( PoolMm )
      ExFreePoolWithTag(PoolMm, 0);
    v7 = 0;
  }
LABEL_2:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C69920);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  if ( !a1 || !v7 )
    return 0LL;
  *a4 = 0LL;
  return 1LL;
}
