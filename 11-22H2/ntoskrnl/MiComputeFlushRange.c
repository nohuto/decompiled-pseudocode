/*
 * XREFs of MiComputeFlushRange @ 0x140287908
 * Callers:
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     MmTrimSection @ 0x1402EF8D8 (MmTrimSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiComputeDataFlushRange @ 0x140288D60 (MiComputeDataFlushRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312010 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14034AE20 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 *a1, int a2, int a3, int a4, __int64 a5)
{
  KIRQL v9; // al
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  int v12; // edx
  __int64 result; // rax
  volatile LONG *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  int v22; // eax
  _DWORD *v23; // r8

  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140C65640);
    v10 = *a1;
    v11 = v9;
    if ( !*a1 )
    {
      v14 = &dword_140C65640;
      goto LABEL_8;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65640);
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
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65640);
  if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v10))
    && (*(_DWORD *)(v10 + 56) & 3) == 0
    && *(_QWORD *)(v10 + 32) )
  {
    LOBYTE(v12) = v11;
    return MiComputeDataFlushRange(v10, v12, a2, a3, 0, a5);
  }
  v14 = (volatile LONG *)(v10 + 72);
LABEL_8:
  ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  if ( (_DWORD)KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v23 = v21->SchedulerAssist;
      v19 = (v22 & v23[5]) == 0;
      v23[5] &= v22;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  result = 0LL;
  __writecr8(v11);
  return result;
}
