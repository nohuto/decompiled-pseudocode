/*
 * XREFs of PipFreeDependencyEdge @ 0x14056029C
 * Callers:
 *     PipDeleteAllDependencyRelations @ 0x140954610 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x140954918 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PipDereferenceDependencyNode @ 0x140838390 (PipDereferenceDependencyNode.c)
 *     PipNotifyDependenciesChanged @ 0x14083857C (PipNotifyDependenciesChanged.c)
 *     PipFreeBindingRequestEntry @ 0x1409548CC (PipFreeBindingRequestEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDependencyEdge(_DWORD *P, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r8
  PVOID *v9; // rdx
  _DWORD **v10; // r8
  PVOID *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (__int64 **)(P + 14);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v6 = *v5;
    if ( (__int64 **)v5[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      goto LABEL_20;
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    PipFreeBindingRequestEntry(v5);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= P[12];
  v8 = *(_QWORD **)P;
  v9 = (PVOID *)*((_QWORD *)P + 1);
  if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P
    || *v9 != P
    || (*v9 = v8, v8[1] = v9, v10 = (_DWORD **)*((_QWORD *)P + 2), v11 = (PVOID *)*((_QWORD *)P + 3), v10[1] != P + 4)
    || *v11 != P + 4 )
  {
LABEL_20:
    __fastfail(3u);
  }
  *v11 = v10;
  v10[1] = v11;
  KxReleaseSpinLock((volatile signed __int64 *)&PiDependencyEdgeWriteLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  PipNotifyDependenciesChanged(*((_QWORD *)P + 5), *((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 5));
  ExFreePoolWithTag(P, 0x53706E50u);
}
