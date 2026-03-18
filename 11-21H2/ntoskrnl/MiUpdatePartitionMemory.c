/*
 * XREFs of MiUpdatePartitionMemory @ 0x1405BFED0
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x140981F58 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeNodeMemory @ 0x14081DDB0 (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (volatile LONG *)(a1 + 200);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = v8;
  v11 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  MiComputeNodeMemory(a1, a3);
  if ( v10 )
    MiDereferencePageRunsEx(v10, 0);
  if ( v9 )
    MiDereferencePageRunsEx(v9, 0);
}
