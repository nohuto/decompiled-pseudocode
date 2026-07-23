/*
 * XREFs of KeRemoveSchedulingGroup @ 0x140206C84
 * Callers:
 *     PspRemoveCpuRateControl @ 0x140684E4C (PspRemoveCpuRateControl.c)
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     PspEstablishDfssHierarchy @ 0x1409B24E0 (PspEstablishDfssHierarchy.c)
 *     MiSessionObjectDelete @ 0x140A32800 (MiSessionObjectDelete.c)
 * Callees:
 *     KiAssignSchedulingGroupWeights @ 0x140205544 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1402055F8 (KiUpdateMinimumWeight.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  unsigned __int16 **v12; // rcx
  _DWORD *v13; // r8
  __int64 v14; // r8
  unsigned __int64 OldIrql; // rbx
  int v17; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+70h] [rbp+8h] BYREF

  memset(&v23, 0, sizeof(v23));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &v23);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 28 || *v3 != a1 + 28 )
    goto LABEL_33;
  *v3 = (unsigned __int16 *)v2;
  v4 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v5 = 0LL;
  v6 = KeNumberProcessors_0;
  v7 = *((_QWORD *)a1 + 12);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v8 = KiProcessorBlock[v5];
      v9 = 212LL * (unsigned int)v5;
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(_QWORD *)(v8 + 48) );
      }
      v10 = &a1[v9 + 100];
      v11 = *(_QWORD *)v10;
      v12 = (unsigned __int16 **)*((_QWORD *)v10 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
        break;
      *v12 = (unsigned __int16 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
      v4 += *(_QWORD *)&a1[v9 + 92];
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        goto LABEL_9;
    }
LABEL_33:
    __fastfail(3u);
  }
LABEL_9:
  if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
  {
    if ( !v7 )
    {
LABEL_11:
      if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
      {
        KiGroupSchedulingMinimumWeight = 0;
        KiGroupSchedulingMinimumRate = 0;
        goto LABEL_15;
      }
      v13 = 0LL;
      goto LABEL_13;
    }
  }
  else
  {
    v17 = *a1;
    if ( !v7 )
    {
      KiGroupSchedulingTotalWeight -= v17;
      goto LABEL_11;
    }
    *(_DWORD *)(v7 + 20) -= v17;
  }
  if ( *(_QWORD *)(v7 + 80) == v7 + 80 )
  {
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 12) = 0;
    goto LABEL_15;
  }
  v13 = (_DWORD *)v7;
LABEL_13:
  if ( KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0, v13) || (*((_DWORD *)a1 + 1) & 1) == 0 )
    KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0, v14);
LABEL_15:
  KxReleaseQueuedSpinLock(&v23);
  OldIrql = v23.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v23.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (v23.OldIrql + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v4;
}
