/*
 * XREFs of PipCreateNewDependencyEdge @ 0x14055F904
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x14055F864 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PipAddRequestToEdge @ 0x140942760 (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x140942D5C (PipNotifyDependenciesChanged.c)
 *     PipReferenceDependencyNode @ 0x140942DD8 (PipReferenceDependencyNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  Pool2 = ExAllocatePool2(64LL, 80LL, 1399877200LL);
  v7 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
    *(_QWORD *)(Pool2 + 40) = a1;
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_BYTE *)(Pool2 + 72) = 0;
    if ( PipAddRequestToEdge(Pool2, a3) )
    {
      PipReferenceDependencyNode(a1);
      PipReferenceDependencyNode(a2);
      v9 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
      v10 = v7 + 2;
      v11 = *(_QWORD **)(a2 + 40);
      if ( *v11 != a2 + 32
        || (*v10 = a2 + 32,
            v7[3] = v11,
            *v11 = v10,
            *(_QWORD *)(a2 + 40) = v10,
            v12 = *(_QWORD **)(a1 + 24),
            *v12 != a1 + 16) )
      {
        __fastfail(3u);
      }
      *v7 = a1 + 16;
      v7[1] = v12;
      *v12 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
      PipNotifyDependenciesChanged(a1, a2);
    }
    else
    {
      ExFreePoolWithTag(v7, 0x53706E50u);
      return 0LL;
    }
  }
  return v7;
}
