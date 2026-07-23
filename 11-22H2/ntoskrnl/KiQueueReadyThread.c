/*
 * XREFs of KiQueueReadyThread @ 0x1402344F0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140206878 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToReadyQueue @ 0x1402348C0 (KiAddThreadToReadyQueue.c)
 *     KiCheckThreadAffinity @ 0x140243570 (KiCheckThreadAffinity.c)
 *     KiEnterDeferredReadyState @ 0x1402B9160 (KiEnterDeferredReadyState.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402B9B2C (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeNewPriority @ 0x1402BA990 (KiComputeNewPriority.c)
 *     KiDeferredReadyThread @ 0x1402BBA30 (KiDeferredReadyThread.c)
 *     KiComputeThreadAffinity @ 0x1402BF804 (KiComputeThreadAffinity.c)
 *     KiComputeGroupSchedulingRank @ 0x140305708 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140305858 (KiCheckMaxOverQuotaTransition.c)
 *     KiShouldPreemptionBeDeferred @ 0x140307740 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckPrcbAffinityEx @ 0x140307760 (KiCheckPrcbAffinityEx.c)
 *     KiUpdateThreadPriority @ 0x140307A60 (KiUpdateThreadPriority.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140308F6C (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140308F8C (KiCheckForMaxOverQuotaScb.c)
 *     KiRequestSoftwareInterrupt @ 0x140318788 (KiRequestSoftwareInterrupt.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034DCD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140364F20 (KiRecomputeGroupSchedulingRank.c)
 *     EtwTraceIdealProcessor @ 0x1405FCE20 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(__int64 a1, __int64 *a2, ULONG_PTR a3)
{
  unsigned __int64 v3; // rbx
  int v6; // r12d
  unsigned int v8; // r15d
  int v9; // ebp
  int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rbx
  int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _WORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 *v26; // r14
  int v27; // edx
  __int64 result; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 *v32; // r14
  int v33; // edx
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a3 + 72);
  v6 = *(unsigned __int8 *)(a3 + 565);
  if ( *(_QWORD *)(a3 + 568) != KiCpuSetSequence && (*(_DWORD *)(a3 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a3 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xCu);
    }
    else
    {
      v8 = *(_DWORD *)(a3 + 588);
      if ( v3 >= *(_QWORD *)(a3 + 32) )
      {
        v9 = (char)KiComputeNewPriority(a3, 1LL);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(a3) )
          KiUpdateThreadPriority(0, v10, a3, v9, 0);
        v11 = v3 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a3 + 651);
        if ( (*(_DWORD *)(a3 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a3 + 120), 5u);
        *(_QWORD *)(a3 + 32) = v11;
        KiTryScheduleNextForegroundBoost(a3);
        v6 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(a3)
        && (unsigned int)KiComputeThreadAffinity(v12)
        && !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(a3 + 576), a1) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xCu);
      }
      v13 = *(unsigned int *)(a3 + 588);
      *(_QWORD *)(a3 + 64) = 0LL;
      if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a3, 1350LL, v8, v13);
    }
  }
  v14 = *(_QWORD *)(a3 + 104);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(a1 + 216) + v14;
    if ( v16 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v16 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v16, v15) )
          {
            if ( (*(_BYTE *)(v16 + 112) & 1) != 0 )
              KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a1, v16, 1);
          }
          else if ( *(_QWORD *)v16 >= *(_QWORD *)(v16 + 24) && (*(_BYTE *)(v16 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v15, v16, a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v15, a1, a3, v16);
        }
        v17 += *(_DWORD *)(v16 + 116);
        v16 = *(_QWORD *)(v16 + 408);
        if ( !v16 )
          break;
        v15 = v16 - *(unsigned int *)(a1 + 216);
      }
      if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a3)
        && (unsigned __int8)KiShouldPreemptionBeDeferred()
        && v17
        && (*(_DWORD *)(a3 + 120) & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xBu);
      }
    }
  }
  v18 = 0LL;
  if ( *(char *)(a3 + 195) >= KiRebalanceMinPriority || (*(_BYTE *)(a1 + 35) & 8) != 0 )
  {
    v19 = *(_QWORD *)(a3 + 104);
    if ( !v19 || (v20 = *(unsigned int *)(a1 + 216) + v19) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v20, 0LL) )
    {
      v21 = *(_WORD **)(a3 + 576);
      v22 = *(unsigned __int8 *)(a1 + 208);
      if ( (unsigned __int16)v22 >= *v21 )
        v23 = 0LL;
      else
        v23 = *(_QWORD *)&v21[4 * v22 + 4];
      v18 = v23 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL);
    }
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x1000) == 0 && !v18 )
  {
    *(_BYTE *)(a3 + 565) = 0;
    KiAddThreadToReadyQueue(a1, 0, a3, 0, v6);
    v24 = *a2;
    v25 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v35 = v25;
    if ( (v24 & 1) != 0 )
    {
      v26 = (unsigned __int64 *)(*(_QWORD *)(v25 + 34904) + 8LL);
      v27 = **(unsigned __int8 **)(v25 + 34904);
      if ( !**(_BYTE **)(v25 + 34904) )
      {
LABEL_52:
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
    }
    else
    {
      v26 = &v35;
      v27 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v26[--v27] + 48), 0LL);
    while ( v27 );
    goto LABEL_52;
  }
  v29 = *(_QWORD *)(a1 + 16);
  KiEnterDeferredReadyState(a3);
  v30 = *a2;
  v31 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v36 = v31;
  if ( (v30 & 1) != 0 )
  {
    v32 = (unsigned __int64 *)(*(_QWORD *)(v31 + 34904) + 8LL);
    v33 = **(unsigned __int8 **)(v31 + 34904);
    if ( !**(_BYTE **)(v31 + 34904) )
      goto LABEL_58;
  }
  else
  {
    v32 = &v36;
    v33 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v32[--v33] + 48), 0LL);
  while ( v33 );
LABEL_58:
  *a2 = 0LL;
  _interlockedbittestandreset((volatile signed __int32 *)(a3 + 120), 0xCu);
  *(_BYTE *)(a3 + 565) = v6;
  result = KiDeferredReadyThread(a1, a3);
  if ( !v29 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v34) = 2;
        return KiRequestSoftwareInterrupt(a1, v34);
      }
    }
  }
  return result;
}
