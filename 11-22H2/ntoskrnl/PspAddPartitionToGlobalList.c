/*
 * XREFs of PspAddPartitionToGlobalList @ 0x1403ABF30
 * Callers:
 *     PspAllocatePartition @ 0x14085A080 (PspAllocatePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PspAddPartitionToGlobalList(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = off_140C04288[0];
  v4 = a1 + 48;
  if ( *(_UNKNOWN ***)off_140C04288[0] != &PspActivePartitionListHead )
    __fastfail(3u);
  *(_QWORD *)v4 = &PspActivePartitionListHead;
  *(_QWORD *)(v4 + 8) = v3;
  *v3 = v4;
  off_140C04288[0] = (_UNKNOWN **)v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspActivePartitionListLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
}
