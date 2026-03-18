/*
 * XREFs of KeInsertSchedulingGroup @ 0x140208434
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x140679480 (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x1406822EC (PspEstablishJobHierarchy.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x1409B01E0 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KiAssignSchedulingGroupWeights @ 0x140207880 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x140207CCC (KiUpdateCpuTargetByRate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiEnableGroupScheduling @ 0x1403DB2F0 (KiEnableGroupScheduling.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  bool v7; // zf
  _QWORD *v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // al
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v19; // r15
  __int64 v20; // rsi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // rcx
  _QWORD *v35; // rcx
  unsigned int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v44; // [rsp+80h] [rbp+8h] BYREF
  __int64 v45; // [rsp+88h] [rbp+10h]
  __int64 v46; // [rsp+90h] [rbp+18h]

  v45 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling(a1, a2);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = KeMaximumProcessors == 0;
  v8 = (_QWORD *)(a1 + 56);
  *(LARGE_INTEGER *)(a1 + 24) = PerformanceCounter;
  v9 = 0;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !v7 )
  {
    v10 = a1 + 136;
    do
    {
      memset((void *)(v10 - 8), 0, 0x88uLL);
      v11 = (_QWORD *)(v10 + 128);
      v12 = 16LL;
      do
      {
        v11[1] = v11;
        *v11 = v11;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = KiCycleDivisorShortTerm;
      *(_QWORD *)v10 = KiCycleDivisorShortTerm;
      *(_QWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      if ( a3 )
      {
        v32 = 424LL * v9 + a3 + 128;
        *(_QWORD *)(v10 + 400) = v32;
        *(_QWORD *)(v10 + 408) = *(_QWORD *)(v32 + 416);
        v14 = *(_BYTE *)(v32 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 400) = 0LL;
        v14 = 0;
        *(_QWORD *)(v10 + 408) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v14;
      ++v9;
      v10 += 424LL;
    }
    while ( v9 < KeMaximumProcessors );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v35 = *(_QWORD **)(a3 + 88);
    if ( *v35 != a3 + 80 )
      goto LABEL_73;
    *v8 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v35;
    *v35 = v8;
    *(_QWORD *)(a3 + 88) = v8;
  }
  else
  {
    v15 = (_QWORD *)qword_140C2B888;
    if ( *(__int64 **)qword_140C2B888 != &KiSchedulingGroupList )
      goto LABEL_73;
    *v8 = &KiSchedulingGroupList;
    *(_QWORD *)(a1 + 64) = v15;
    *v15 = v8;
    qword_140C2B888 = a1 + 56;
  }
  v16 = KeNumberProcessors_0;
  v17 = 0;
  v46 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = KiProcessorBlock[v17];
      v20 = a1 + 424LL * v17;
      v44 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v38 = SchedulerAssist[6];
            SchedulerAssist[6] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
          break;
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v39 = v34[6] - 1;
            v34[6] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v44);
        while ( *(_QWORD *)(v19 + 48) );
      }
      v22 = *(_QWORD **)(v19 + 34192);
      v23 = (_QWORD *)(v20 + 200);
      if ( *v22 != v19 + 34184 )
        break;
      v7 = (v45 & 0x400000000LL) == 0;
      *v23 = v19 + 34184;
      *(_QWORD *)(v20 + 208) = v22;
      *v22 = v23;
      *(_QWORD *)(v19 + 34192) = v23;
      if ( !v7 )
      {
        *(_BYTE *)(v20 + 240) |= 0xCu;
        *(_DWORD *)(v20 + 244) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v40 = v25[6] - 1;
          v25[6] = v40;
          if ( !v40 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      if ( *(_QWORD *)(v19 + 34880) )
      {
        if ( *(_BYTE *)(v19 + 209) == *(_BYTE *)(*(_QWORD *)(v19 + 34888) + 657LL) )
        {
          *(_BYTE *)(v20 + 240) |= 0x20u;
          v26 = v20 + 256;
          v46 = v20 + 256;
        }
        else
        {
          v26 = v46;
        }
        *(_QWORD *)(v20 + 248) = v26;
      }
      if ( ++v17 >= v16 )
        goto LABEL_26;
    }
LABEL_73:
    __fastfail(3u);
  }
LABEL_26:
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v30 = *(_DWORD *)(a3 + 12);
      if ( v30 )
      {
        v31 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= v30 )
          goto LABEL_40;
      }
      v33 = a3;
      *(_DWORD *)(a3 + 12) = (unsigned __int16)a2;
    }
    else
    {
      v30 = KiGroupSchedulingMinimumRate;
      if ( KiGroupSchedulingMinimumRate )
      {
        v31 = (unsigned __int16)a2;
        if ( (unsigned __int16)a2 >= (unsigned int)KiGroupSchedulingMinimumRate )
        {
LABEL_40:
          *(_DWORD *)(a1 + 8) = (v31 << 7) / v30;
LABEL_41:
          KiUpdateCpuTargetByRate((unsigned __int16 *)a1, 0);
          goto LABEL_32;
        }
      }
      v33 = 0LL;
      KiGroupSchedulingMinimumRate = (unsigned __int16)a2;
    }
    KiAssignSchedulingGroupWeights(1, 0, v33);
    goto LABEL_41;
  }
  if ( a3 )
  {
    v36 = *(_DWORD *)(a3 + 16);
    if ( !v36 || (v37 = (unsigned __int16)a2, (unsigned __int16)a2 < v36) )
    {
      v37 = (unsigned __int16)a2;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)a2;
    }
    *(_DWORD *)(a3 + 20) += v37;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v27 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v27 = (unsigned __int16)a2;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)a2;
    }
    KiGroupSchedulingTotalWeight += v27;
  }
  KiAssignSchedulingGroupWeights(0, 0, a3);
LABEL_32:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = ((unsigned int)result & v42[5]) == 0;
        v42[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(v41);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
