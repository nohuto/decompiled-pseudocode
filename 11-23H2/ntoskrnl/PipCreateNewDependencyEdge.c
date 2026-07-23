/*
 * XREFs of PipCreateNewDependencyEdge @ 0x1403984F4
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x140398458 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PipReferenceDependencyNode @ 0x1408383B0 (PipReferenceDependencyNode.c)
 *     PipAddRequestToEdge @ 0x1408383BC (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x14083857C (PipNotifyDependenciesChanged.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
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
      v8 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
      v9 = *(_QWORD **)(a2 + 40);
      v10 = v7 + 2;
      if ( *v9 != a2 + 32
        || (*v10 = a2 + 32,
            v7[3] = v9,
            *v9 = v10,
            *(_QWORD *)(a2 + 40) = v10,
            v11 = *(_QWORD **)(a1 + 24),
            *v11 != a1 + 16) )
      {
        __fastfail(3u);
      }
      *v7 = a1 + 16;
      v7[1] = v11;
      *v11 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KxReleaseSpinLock((volatile signed __int64 *)&PiDependencyEdgeWriteLock);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v8 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v8);
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
