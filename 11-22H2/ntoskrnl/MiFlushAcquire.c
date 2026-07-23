/*
 * XREFs of MiFlushAcquire @ 0x14033D104
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiReferenceSubsection @ 0x140289050 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  volatile LONG *v3; // r14
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  int v12; // eax
  _DWORD *SchedulerAssist; // r8
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  _DWORD *v18; // r8

  v3 = (volatile LONG *)(a1 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    v8 = 0;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v7 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2);
      MiReferenceSubsection(a3);
    }
    ++*(_QWORD *)(a1 + 40);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( (_DWORD)KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v18 = v16->SchedulerAssist;
        v14 = (v17 & v18[5]) == 0;
        v18[5] &= v17;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    v8 = 1;
  }
  __writecr8(v7);
  return v8;
}
