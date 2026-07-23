/*
 * XREFs of MiDeleteEmptySubsections @ 0x140361418
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403A7500 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiReduceUnusedSubsectionCount @ 0x14021BA20 (MiReduceUnusedSubsectionCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF50 (MiUpdateSystemProtoPtesTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312010 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  volatile LONG *v1; // rbp
  _QWORD **v2; // r12
  KIRQL i; // al
  _QWORD *v4; // rdi
  KIRQL v5; // bl
  __int64 v6; // r13
  void *v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax

  v1 = (volatile LONG *)(a1 + 1408);
  v2 = (_QWORD **)(a1 + 1800);
  for ( i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408)); ; i = ExAcquireSpinLockExclusive(v1) )
  {
    v4 = *v2;
    v5 = i;
    if ( *v2 == v2 )
      break;
    v6 = *(v4 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      if ( (*((_BYTE *)v4 - 46) & 8) != 0 )
      {
        v7 = (void *)*(v4 - 9);
        MiUpdateSystemProtoPtesTree((__int64)(v4 + 5), 0);
        *(v4 - 9) = 0LL;
        v8 = *v4;
        v9 = (_QWORD *)v4[1];
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v9 != v4 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *((_WORD *)v4 - 23) &= ~8u;
        v4[1] = v4;
        *v4 = v4;
        MiReduceUnusedSubsectionCount((unsigned int *)v4 - 20);
      }
      else
      {
        v7 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( (_DWORD)KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && v5 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v15 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      __writecr8(v5);
    }
  }
  *(_QWORD *)(a1 + 1488) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( (_DWORD)KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && v5 <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v15 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
