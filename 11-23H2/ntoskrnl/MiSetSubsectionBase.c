/*
 * XREFs of MiSetSubsectionBase @ 0x14036AC7C
 * Callers:
 *     MiExtendSection @ 0x1407069E4 (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x140A33318 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x140289480 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiSetSubsectionBase(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v9; // r14
  volatile LONG *v10; // r15
  unsigned __int64 v11; // rbp
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  v4 = *(_QWORD *)BugCheckParameter2;
  v9 = 0LL;
  v10 = (volatile LONG *)(*(_QWORD *)BugCheckParameter2 + 72LL);
  v11 = ExAcquireSpinLockExclusive(v10);
  if ( (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    v9 = BugCheckParameter2;
    MiIncrementSubsectionViewCount((__int64 *)BugCheckParameter2, 0);
    *(_QWORD *)(BugCheckParameter2 + 112) = a4;
  }
  v12 = *(_DWORD *)(BugCheckParameter2 + 48);
  *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
  v13 = v12 & 0x3FFFFFFF;
  *(_QWORD *)(BugCheckParameter2 + 8) = a2;
  *(_DWORD *)(BugCheckParameter2 + 48) = v13;
  if ( v9 && a3 <= 1 )
  {
    if ( a3 == 1 )
      v14 = v13 | 0x40000000;
    else
      v14 = v13 | 0x80000000;
    *(_DWORD *)(BugCheckParameter2 + 48) = v14;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v11 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
}
