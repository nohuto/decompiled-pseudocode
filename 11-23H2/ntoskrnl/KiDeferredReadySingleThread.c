/*
 * XREFs of KiDeferredReadySingleThread @ 0x14023A3A0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KiEnterLongDpcProcessing @ 0x140247AD0 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiDeferredReadyThread @ 0x1402BBCF0 (KiDeferredReadyThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402BBD80 (KiAbDeferredProcessingWorker.c)
 *     KiNormalPriorityReadyScan @ 0x140307080 (KiNormalPriorityReadyScan.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiInswapAndReadyThread @ 0x14034DBDC (KiInswapAndReadyThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1403D0A80 (KiProcessPendingForegroundBoosts.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E580 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiAddThreadToPrcbQueue @ 0x140238A10 (KiAddThreadToPrcbQueue.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiChooseTargetProcessor @ 0x1402393B0 (KiChooseTargetProcessor.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402438E0 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140243B10 (KiScheduleThreadToRescheduleContext.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiComputeHeteroThreadQos @ 0x1402B1080 (KiComputeHeteroThreadQos.c)
 *     KiComputePriorityFloor @ 0x1402B10CC (KiComputePriorityFloor.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402B3290 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B34D0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B86C0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402B9DEC (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeNewPriority @ 0x1402BAC50 (KiComputeNewPriority.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KiAddThreadToScbQueue @ 0x140305CB0 (KiAddThreadToScbQueue.c)
 *     KiCheckPrcbAffinityEx @ 0x140307B20 (KiCheckPrcbAffinityEx.c)
 *     KiSetPriorityBoost @ 0x140307D98 (KiSetPriorityBoost.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     KiCompleteRescheduleContextEntry @ 0x140308020 (KiCompleteRescheduleContextEntry.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14030932C (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14030934C (KiCheckForMaxOverQuotaScb.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x140333690 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140338550 (KeFindFirstSetLeftAffinityEx.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     KiScheduleNextForegroundBoost @ 0x1403D439C (KiScheduleNextForegroundBoost.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140410464 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiHeteroChooseTargetProcessor @ 0x140461D16 (KiHeteroChooseTargetProcessor.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 *     KiIsThreadRankBiased @ 0x140462D88 (KiIsThreadRankBiased.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x14056E53C (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiPopulateTrivialProcessorSelectionResult @ 0x140577B3C (KiPopulateTrivialProcessorSelectionResult.c)
 *     EtwTraceIdealProcessor @ 0x1405FD300 (EtwTraceIdealProcessor.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FDDD8 (EtwTraceXSchedulerPriorityUpdate.c)
 */

__int64 __fastcall KiDeferredReadySingleThread(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  bool v4; // zf
  ULONG_PTR v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  int v8; // edx
  int v9; // edi
  ULONG_PTR v10; // rcx
  char v11; // al
  ULONG_PTR v12; // rcx
  char v13; // al
  char v14; // al
  int v15; // r15d
  int v16; // r14d
  int v17; // edx
  char v18; // r15
  unsigned __int64 *v19; // r14
  char v20; // al
  int v21; // edx
  bool v22; // di
  unsigned int v23; // eax
  unsigned __int8 v24; // di
  char v25; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v27; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  int v29; // eax
  __int64 v30; // r8
  char v31; // r10
  int v32; // r11d
  char v33; // r12
  int v34; // r8d
  int v35; // r9d
  char v36; // cl
  char v37; // al
  int v38; // r8d
  unsigned __int64 v39; // rcx
  bool v40; // r12
  unsigned __int8 v41; // r15
  unsigned int v42; // eax
  __int64 FirstSetLeftAffinity; // rdi
  unsigned __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 *v49; // rcx
  __int64 v50; // rdi
  unsigned __int16 *v51; // r10
  __int64 v52; // r8
  unsigned __int16 v53; // r11
  unsigned __int64 *v54; // r9
  __int64 v55; // rdi
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r11
  char v61; // r10
  int v62; // eax
  __int64 v63; // rdx
  unsigned __int64 v64; // r8
  __int64 *v65; // rdx
  __int64 v66; // r9
  unsigned __int8 *v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // r11
  int v70; // edx
  _BYTE *v71; // rax
  __int64 *v72; // r9
  __int64 v73; // r10
  __int64 v74; // rax
  __int64 *v75; // r14
  __int64 v76; // rdx
  __int64 v77; // r12
  unsigned __int64 v78; // r13
  unsigned __int8 v79; // r8
  char v80; // r14
  unsigned int v81; // r15d
  unsigned int j; // edi
  char v83; // al
  unsigned __int8 *v84; // rdx
  unsigned __int8 v85; // al
  unsigned __int64 *v86; // r9
  int v87; // edx
  __int64 result; // rax
  char *v89; // r15
  __int64 k; // r13
  char v91; // r12
  __int64 v92; // rdi
  __int64 v93; // rdx
  _WORD *v94; // r14
  __int64 v95; // rcx
  __int64 v96; // rdx
  unsigned __int64 v97; // rdi
  int v98; // r9d
  unsigned __int64 v99; // rdx
  struct _KPRCB **v100; // r13
  unsigned int v101; // r10d
  unsigned int v102; // r8d
  __int64 v103; // r9
  _QWORD *v104; // rdi
  struct _KPRCB *v105; // r14
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  _KTHREAD *NextThread; // rax
  ULONG_PTR CurrentThread; // rcx
  char v109; // dl
  char v110; // dl
  char v111; // r12
  ULONG_PTR v112; // r15
  char v113; // al
  bool v114; // r8
  char v115; // al
  char v116; // dl
  unsigned __int8 v117; // dl
  _QWORD *v118; // r9
  unsigned int v119; // r8d
  _QWORD *v120; // rdx
  _BYTE *v121; // rcx
  __int64 v122; // rdx
  unsigned int v123; // r15d
  _QWORD *v124; // r13
  unsigned int v125; // ecx
  _QWORD *v126; // rax
  BOOL v127; // r12d
  char v128; // al
  unsigned __int8 *v129; // rdx
  __int64 v130; // rax
  char v131; // dl
  char v132; // cl
  char v133; // al
  unsigned int v134; // ecx
  unsigned int v135; // r14d
  _QWORD *v136; // rcx
  __int64 v137; // r12
  unsigned __int8 v138; // r8
  char v139; // r14
  unsigned int v140; // r15d
  unsigned int i; // edi
  char v142; // al
  unsigned __int8 *v143; // rdx
  unsigned __int8 v144; // al
  unsigned __int64 *v145; // r9
  unsigned __int64 v146; // r10
  int v147; // edx
  _QWORD *v148; // rdi
  __int64 v149; // r14
  unsigned __int64 *v150; // r8
  unsigned __int64 v151; // r9
  int v152; // edx
  char v153; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v154; // [rsp+30h] [rbp-D0h]
  char v155[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v156; // [rsp+34h] [rbp-CCh]
  int v157; // [rsp+38h] [rbp-C8h]
  unsigned int v158; // [rsp+3Ch] [rbp-C4h]
  unsigned int v159; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v160; // [rsp+48h] [rbp-B8h]
  __int64 v161; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v162; // [rsp+58h] [rbp-A8h]
  int v163; // [rsp+60h] [rbp-A0h] BYREF
  int v164; // [rsp+64h] [rbp-9Ch]
  unsigned int v165; // [rsp+68h] [rbp-98h]
  unsigned int v166; // [rsp+6Ch] [rbp-94h]
  __int64 v167; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v168; // [rsp+78h] [rbp-88h] BYREF
  __int64 v169; // [rsp+80h] [rbp-80h] BYREF
  __int64 v170; // [rsp+88h] [rbp-78h]
  __int128 v171; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v172; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v173; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v174; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v175; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v176; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v177; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v178[42]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v179[42]; // [rsp+230h] [rbp+130h] BYREF

  v3 = *(_QWORD *)(a2 + 72);
  v4 = *(_BYTE *)(a2 + 566) == 1;
  v170 = a3;
  v5 = a2;
  v162 = a2;
  v6 = a1;
  v161 = a1;
  v171 = 0LL;
  v158 = 0;
  if ( v4 )
    v153 = *(_BYTE *)(a2 + 567);
  else
    v153 = 0;
  v163 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v163);
    while ( *(_QWORD *)(v5 + 64) );
  }
  v4 = (*(_DWORD *)(v5 + 120) & 0x400000) == 0;
  v167 = 0LL;
  if ( v4 )
  {
    v18 = 0;
    goto LABEL_30;
  }
  _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x100000u);
  v7 = KiReadGuestSchedulerAssistPriority(v5, &v167);
  v8 = *(_DWORD *)(v5 + 1024);
  v9 = v7;
  if ( v7 != v8 )
  {
    v10 = v5 + (char)v7;
    v11 = *(_BYTE *)(v10 + 824);
    if ( v11 == -1 )
      KeBugCheckEx(0x157u, v5, (char)v9, 1uLL, 0LL);
    *(_BYTE *)(v10 + 824) = v11 + 1;
    *(_DWORD *)(v5 + 856) |= 1 << v9;
    if ( v8 != 32 )
    {
      v12 = v5 + (char)v8;
      v13 = *(_BYTE *)(v12 + 824);
      if ( !v13 )
        KeBugCheckEx(0x157u, v5, (char)v8, 2uLL, 0LL);
      v14 = v13 - 1;
      *(_BYTE *)(v12 + 824) = v14;
      if ( !v14 )
        *(_DWORD *)(v5 + 856) ^= 1 << v8;
    }
    *(_DWORD *)(v5 + 1024) = v9;
  }
  v15 = *(char *)(v5 + 195);
  v16 = (char)KiComputePriorityFloor(v5, (unsigned __int8)v9);
  if ( (*(_BYTE *)(v5 + 564) & 0xF0) != 0 )
  {
    if ( v16 > v15 )
      goto LABEL_20;
  }
  else if ( v16 != v15 )
  {
LABEL_20:
    KiSetBasePriorityAndClearDecrement(v5, 0LL, 0LL);
    KiUpdateThreadPriority(0, v17, v5, v16, 0);
  }
  v159 = *(unsigned __int8 *)(v5 + 1122);
  KiCheckAssistDataForBamQosLevelOverride(v5, &v159);
  a2 = v159;
  if ( v159 != (unsigned __int8)*(_DWORD *)(v5 + 512) )
    KiSetThreadQosLevelUnsafe(v5);
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(v5 + 968), 0xFFEFFFFF);
  if ( v15 != v16 && (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(v5, v15, v9, v16, (__int64)&v167);
  v18 = 1;
LABEL_30:
  v19 = (unsigned __int64 *)(v5 + 32);
  if ( !*(_BYTE *)(v5 + 566) )
  {
    if ( v3 < *v19 )
    {
      v158 = *(unsigned __int8 *)(v5 + 565);
      goto LABEL_89;
    }
    v20 = KiComputeNewPriority(v5, 1LL);
    if ( !v18 )
      KiUpdateThreadPriority(0, v21, v5, v20, 0);
    KiTryScheduleNextForegroundBoost(v5);
    goto LABEL_86;
  }
  if ( *(char *)(v5 + 195) >= 16 )
  {
    v22 = 1;
    goto LABEL_77;
  }
  v23 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436);
  if ( v3 < *v19 )
  {
    v24 = 0;
    if ( *(char *)(v5 + 563) < 14 && (*(_BYTE *)(v5 + 564) || v23 < 2) )
      goto LABEL_54;
  }
  else
  {
    v24 = 4;
    if ( v23 < 2 )
      v24 = 5;
  }
  v24 |= 8u;
  v25 = KiComputeNewPriority(v5, 1LL);
  if ( !v18 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v25 > *(char *)(v5 + 195) )
    {
      if ( *(_BYTE *)(v5 + 793) )
      {
        v27 = (struct _SINGLE_LIST_ENTRY *)(v5 + 808);
        if ( *(_QWORD *)(v5 + 808) == 1LL )
        {
          p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-35704LL )
          {
            v27->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v27;
            _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
    *(_BYTE *)(v5 + 195) = v25;
    v29 = KiComputeHeteroThreadQos(v5, 0LL);
    a2 = (unsigned __int8)*(_DWORD *)(v5 + 512);
    if ( v29 != (_DWORD)a2 )
      KiSetThreadQosLevelUnsafe(v5);
    if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    {
      LOBYTE(v30) = 1;
      KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 968), (unsigned int)*(char *)(v5 + 195), v30);
    }
  }
LABEL_54:
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 544) + 1850LL) == 2 )
    v24 |= 2u;
  if ( (v24 & 1) != 0 || (*(_DWORD *)(v5 + 120) & 8) != 0 || *(char *)(v5 + 195) <= 0 )
    goto LABEL_71;
  v31 = *(_BYTE *)(v5 + 564);
  if ( v31 )
  {
    if ( (v31 & 0xF0) == 0 && (v24 & 2) != 0 )
    {
      v32 = *(char *)(v5 + 563);
      v33 = v153;
      v34 = v153 + v32;
      v35 = v34;
LABEL_64:
      v35 += (char)PsPrioritySeparation;
      goto LABEL_65;
    }
LABEL_71:
    if ( (KiVelocityFlags & 0x8000) == 0
      && (v24 & 6) == 6
      && (*(_DWORD *)(v5 + 120) & 8) == 0
      && *(char *)(v5 + 195) > 0 )
    {
      KiScheduleNextForegroundBoost(v5);
    }
    goto LABEL_76;
  }
  v32 = *(char *)(v5 + 563);
  a2 = v24;
  v33 = v153;
  LOBYTE(a2) = v24 >> 1;
  v34 = v153 + v32;
  v35 = v34;
  if ( (v24 & 2) != 0 )
    goto LABEL_64;
LABEL_65:
  if ( v35 >= 16 )
    v35 = 15;
  if ( v35 > *(char *)(v5 + 195) )
  {
    v36 = 0;
    if ( v35 > v34 )
      v36 = v35 - v32 - v33;
    *(_BYTE *)(v5 + 564) = v31 ^ (v36 ^ v31) & 0xF;
    KiUpdateThreadPriority(0, a2, v5, v35, 0);
  }
LABEL_76:
  v22 = (v24 & 8) != 0;
LABEL_77:
  if ( *(_BYTE *)(v5 + 566) != 2 )
    goto LABEL_85;
  v37 = *(_BYTE *)(v5 + 195);
  if ( v37 > 0 )
  {
    a2 = *(unsigned __int8 *)(v5 + 567);
    if ( v37 < (char)a2 && v37 < 13 && (*(_DWORD *)(v5 + 120) & 8) == 0 )
    {
      v38 = 13;
      if ( (char)a2 < 13 )
        v38 = *(unsigned __int8 *)(v5 + 567);
      KiSetPriorityBoost(0, v5, v38, v3, KiLockQuantumTarget);
LABEL_85:
      if ( !v22 )
        goto LABEL_89;
      goto LABEL_86;
    }
  }
  if ( v22 )
  {
LABEL_86:
    v39 = v3 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
    if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
    *v19 = v39;
    goto LABEL_89;
  }
  a2 = *v19;
  if ( v3 > *v19 || (a2 -= v3, a2 < (unsigned int)KiLockQuantumTarget) )
    *v19 = v3 + (unsigned int)KiLockQuantumTarget;
LABEL_89:
  v4 = *(_DWORD *)(v5 + 484) == 0;
  v166 = *(_DWORD *)(v5 + 588);
  *(_WORD *)(v5 + 565) = 0;
  v40 = !v4 || *(_BYTE *)(v5 + 390) == 1;
  v41 = 0;
  v154 = _bittestandreset((signed __int32 *)(v5 + 116), 1u);
  if ( *(_QWORD *)(v5 + 568) != KiCpuSetSequence && (*(_DWORD *)(v5 + 116) & 8) == 0 )
    KiComputeThreadAffinity(v5);
  v42 = *(_DWORD *)(v5 + 588);
  v177 = 0LL;
  v165 = v42;
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    FirstSetLeftAffinity = *(unsigned int *)(v5 + 536);
    LODWORD(FirstSetLeftAffinity) = FirstSetLeftAffinity & 0x7FFFFFFF;
    v44 = KiProcessorBlock[FirstSetLeftAffinity];
    if ( !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v5 + 576), v44) )
    {
      FirstSetLeftAffinity = (unsigned int)KeFindFirstSetLeftAffinityEx(v47, v45, v46);
      v44 = KiProcessorBlock[FirstSetLeftAffinity];
    }
    KiPopulateTrivialProcessorSelectionResult(&v177, v5, v44);
    v49 = (__int64 *)(v5 + 104);
    *(_DWORD *)(v5 + 536) = FirstSetLeftAffinity;
    v50 = *(_QWORD *)(v5 + 104);
    if ( v50 )
      v50 += *(unsigned int *)(v44 + 216);
    goto LABEL_240;
  }
  v51 = *(unsigned __int16 **)(v5 + 576);
  v52 = 0LL;
  v53 = *v51;
  if ( !*v51 )
    goto LABEL_120;
  v54 = (unsigned __int64 *)(v51 + 4);
  v55 = *v51;
  do
  {
    v56 = *v54++;
    v57 = v56 - ((v56 >> 1) & 0x5555555555555555LL);
    a2 = v57 & 0x3333333333333333LL;
    v52 = ((unsigned int)((0x101010101010101LL
                         * (((v57 & 0x3333333333333333LL)
                           + ((v57 >> 2) & 0x3333333333333333LL)
                           + (((v57 & 0x3333333333333333LL) + ((v57 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
        + (unsigned int)v52;
    --v55;
  }
  while ( v55 );
  v5 = v162;
  v41 = 0;
  v6 = v161;
  if ( (unsigned int)v52 > 1 )
  {
    if ( *(_BYTE *)(v162 + 125) )
    {
      v58 = *(unsigned __int16 *)(v162 + 584);
      v171 = 0LL;
      WORD4(v171) = v58;
      if ( (unsigned __int16)v58 >= v53 )
        v59 = 0LL;
      else
        v59 = *(_QWORD *)&v51[4 * v58 + 4];
      *(_QWORD *)&v171 = v59;
      KiHeteroChooseTargetProcessor(v59, v162, &v171, &v177);
    }
    else
    {
      if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v162, v161, v52, v54) )
        v41 = !v40;
      KiChooseTargetProcessor(v6, (_DWORD *)v5, *(unsigned __int16 **)(v5 + 576), (__int64)&v177, v41);
    }
    v60 = v177;
    v48 = DWORD2(v177);
    v44 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v61 = v177;
    v160 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
LABEL_120:
    v62 = KeFindFirstSetLeftAffinityEx(v51, a2, v52);
    v63 = (*(_DWORD *)(v5 + 120) >> 1) & 1;
    v44 = KiProcessorBlock[v62];
    v160 = v44;
    KiAcquirePrcbLocksForPreemptionAttempt(v44, v63, &v177);
    v60 = v177;
    v64 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v61 = v177;
    v172 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v65 = 0LL;
    v66 = 0LL;
    if ( (v177 & 1) != 0 )
    {
      if ( (v177 & 1) == 1 )
      {
        v67 = *(unsigned __int8 **)(v64 + 34904);
        v66 = *v67;
        v65 = (__int64 *)(v67 + 8);
      }
      v48 = 1LL;
      if ( (_DWORD)v66 )
      {
        do
        {
          v68 = *v65++;
          v48 = ((*(_BYTE *)(v68 + 35) & 1) == 0) & (unsigned __int8)v48;
          --v66;
        }
        while ( v66 );
      }
    }
    else
    {
      v48 = (*(_BYTE *)(v64 + 35) & 1) == 0;
    }
    *((_QWORD *)&v177 + 1) = (unsigned int)v48;
  }
  v69 = v60 & 0xFFFFFFFFFFFFFFFEuLL;
  v173 = v69;
  if ( (v61 & 1) != 0 )
  {
    v71 = *(_BYTE **)(v69 + 34904);
    v72 = (__int64 *)(v71 + 8);
    v70 = 1;
    if ( *v71 )
    {
      v73 = (unsigned __int8)*v71;
      do
      {
        v74 = *v72++;
        v70 = ((*(_BYTE *)(v74 + 35) & 1) == 0) & (unsigned __int8)v70;
        --v73;
      }
      while ( v73 );
    }
  }
  else
  {
    v70 = (*(_BYTE *)(v69 + 35) & 1) == 0;
  }
  if ( v70 != (_DWORD)v48 )
    __fastfail(0x21u);
  v75 = (__int64 *)(v5 + 104);
  *(_DWORD *)(v5 + 536) = *(_DWORD *)(v44 + 36);
  v50 = *(_QWORD *)(v5 + 104);
  if ( v50 )
  {
    v50 += *(unsigned int *)(v44 + 216);
    if ( v50 )
    {
      if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v5) )
      {
        if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v50, v76) )
        {
          v49 = (__int64 *)(v5 + 104);
          if ( !v40 )
          {
LABEL_240:
            if ( !v154 )
              *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
            if ( !v50 )
            {
              v50 = *v49;
              if ( *v49 )
                v50 += *(unsigned int *)(v44 + 216);
            }
            v130 = *(_QWORD *)(v44 + 35000);
            if ( v130 )
              *(_BYTE *)(v130 + 16) = 0;
            v131 = 0;
            *(_BYTE *)(v5 + 388) = 1;
            v155[0] = 0;
            if ( v50 && (*(_DWORD *)(v5 + 120) & 0xC00) == 0 )
            {
              LOBYTE(v48) = 1;
              if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v50, v48, v155) )
              {
                KiAddThreadToScbQueue(v44, v50, v5, v158);
                goto LABEL_291;
              }
              v131 = v155[0];
            }
            KiAddThreadToPrcbQueue(v44, v5, *(char *)(v5 + 195), v158, v131);
LABEL_291:
            v150 = 0LL;
            v151 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
            v152 = 0;
            v176 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v177 & 1) != 0 )
            {
              if ( (v177 & 1) == 1 )
              {
                v150 = (unsigned __int64 *)(*(_QWORD *)(v151 + 34904) + 8LL);
                v152 = **(unsigned __int8 **)(v151 + 34904);
              }
              if ( !v152 )
                goto LABEL_298;
            }
            else
            {
              v150 = &v176;
              v152 = 1;
            }
            do
              _InterlockedAnd64((volatile signed __int64 *)(v150[--v152] + 48), 0LL);
            while ( v152 );
LABEL_298:
            result = 0LL;
            *(_QWORD *)&v177 = 0LL;
            *(_QWORD *)(v5 + 64) = 0LL;
            goto LABEL_299;
          }
        }
      }
    }
  }
  if ( !DWORD2(v177) )
  {
    v49 = (__int64 *)(v5 + 104);
    if ( v41 )
      goto LABEL_240;
    v97 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v162 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    memset(v178, 0, sizeof(v178));
    v98 = v177 & 1;
    v157 = 0;
    v99 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v164 = v98;
    v100 = 0LL;
    v168 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v101 = 0;
    if ( (v177 & 1) == 0 )
    {
      v101 = 1;
      v156 = 0;
      v157 = 1;
      v100 = (struct _KPRCB **)&v168;
LABEL_185:
      v103 = v101;
      v104 = &v178[6];
      v161 = v101;
      while ( 1 )
      {
        *(v104 - 3) = 0LL;
        *v104 = 0LL;
        v105 = *v100;
        *(v104 - 1) = -1LL;
        *((_BYTE *)v104 + 4) = 63;
        *(v104 - 4) = v105;
        SharedReadyQueue = v105->SharedReadyQueue;
        if ( (v105->IdleState & 8) != 0 && (v105->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
          SharedReadyQueue = 0LL;
        NextThread = v105->NextThread;
        *(v104 - 3) = SharedReadyQueue;
        CurrentThread = (ULONG_PTR)NextThread;
        *(v104 - 2) = NextThread;
        if ( !NextThread )
        {
          CurrentThread = (ULONG_PTR)v105->CurrentThread;
          *(v104 - 2) = CurrentThread;
        }
        if ( NextThread == (_KTHREAD *)CurrentThread )
        {
          *(_BYTE *)v104 |= 4u;
        }
        else
        {
          v109 = *(_BYTE *)v104;
          if ( v105 == KeGetCurrentPrcb() )
            v110 = v109 | 4;
          else
            v110 = v109 & 0xFB;
          *(_BYTE *)v104 = v110;
        }
        v111 = 0;
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) == 0 )
          goto LABEL_211;
        if ( CurrentThread == v5 )
          goto LABEL_201;
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
          break;
LABEL_211:
        v114 = (v105->IdleState & 1) == 0;
        v115 = v114 | *(_BYTE *)v104 & 0xFE;
        v116 = (v105->PriorityState->AllFields >> 6) ^ (*(_BYTE *)v104 | v114);
        v102 = v156;
        v117 = v115 ^ v116 & 2;
        *(_BYTE *)v104 = v117;
        if ( ((v117 >> 1) & 1u) > v102 )
          v102 = (v117 >> 1) & 1;
        v104 += 5;
        ++v100;
        v156 = v102;
        v161 = --v103;
        if ( !v103 )
        {
          v99 = v168;
          v75 = (__int64 *)(v5 + 104);
          v101 = v157;
          v98 = v164;
          v97 = v162;
          goto LABEL_215;
        }
      }
      v111 = 1;
LABEL_201:
      v112 = CurrentThread;
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0 && *(_DWORD *)(CurrentThread + 536) == v105->Number )
      {
        if ( *(_BYTE *)(CurrentThread + 388) == 2
          || *(_BYTE *)(CurrentThread + 388) == 3
          || *(_BYTE *)(CurrentThread + 388) == 5
          && (v113 = *(_BYTE *)(CurrentThread + 112) & 7, v113 != 1)
          && (unsigned __int8)(v113 - 3) > 3u )
        {
          KiUpdateVPBackingThreadPriority(CurrentThread);
          v103 = v161;
        }
      }
      if ( v111 )
        *(_QWORD *)(v112 + 64) = 0LL;
      goto LABEL_211;
    }
    if ( v98 == 1 )
    {
      v100 = (struct _KPRCB **)(*(_QWORD *)(v97 + 34904) + 8LL);
      v101 = **(unsigned __int8 **)(v97 + 34904);
      v157 = v101;
    }
    v156 = 0;
    v102 = 0;
    if ( v101 )
      goto LABEL_185;
LABEL_215:
    HIDWORD(v178[0]) = v102;
    LODWORD(v178[1]) = v98;
    LOBYTE(v178[0]) = v101;
    if ( v98 )
      BYTE1(v178[0]) = *(_BYTE *)(*(_QWORD *)(v99 + 34904) + 1LL);
    else
      BYTE1(v178[0]) = 0;
    if ( v102 )
    {
      v118 = 0LL;
      v119 = 0;
      if ( v101 )
      {
        v120 = &v178[2];
        while ( v120[2] == *(_QWORD *)(*v120 + 34944LL) )
        {
          ++v119;
          v120 += 5;
          if ( v119 >= v101 )
            goto LABEL_225;
        }
        v118 = v120;
LABEL_225:
        v121 = &v178[6];
        v122 = v101;
        do
        {
          if ( v121 - 32 != (_BYTE *)v118 )
          {
            *((_QWORD *)v121 - 2) = v118[2];
            *v121 = *((_BYTE *)v118 + 32) | 0x20;
          }
          v121 += 40;
          --v122;
        }
        while ( v122 );
        LOBYTE(v101) = v178[0];
      }
    }
    v123 = (unsigned __int8)v101;
    v124 = 0LL;
    v125 = 0;
    if ( (_BYTE)v101 )
    {
      v126 = &v178[2];
      while ( *v126 != v97 )
      {
        ++v125;
        v126 += 5;
        if ( v125 >= (unsigned __int8)v101 )
          goto LABEL_236;
      }
      v124 = v126;
    }
LABEL_236:
    v169 = 0LL;
    v127 = HIDWORD(v177) != 0;
    v50 = 0LL;
    if ( KiGroupSchedulingEnabled )
    {
      v128 = KiEvaluateGroupSchedulingPreemption(v124, v5, HIDWORD(v177) != 0, &v169);
      v50 = v169;
      v129 = (unsigned __int8 *)(v124 + 4);
      if ( !v128 )
      {
LABEL_238:
        v49 = v75;
LABEL_239:
        v44 = v160;
        goto LABEL_240;
      }
    }
    else
    {
      v132 = *((_BYTE *)v124 + 32);
      v129 = (unsigned __int8 *)(v124 + 4);
      v48 = v124[2];
      if ( (v132 & 1) == 0 )
      {
        v133 = *(_BYTE *)(v5 + 195);
        if ( v133 <= *(char *)(v48 + 195)
          && (v133 != *(_BYTE *)(v48 + 195) || !HIDWORD(v177) && (v132 & 0x18) == 0)
          && ((v132 & 0x10) == 0 || !v133) )
        {
          goto LABEL_238;
        }
      }
    }
    v134 = (*(_DWORD *)(v5 + 120) >> 1) & 1;
    if ( v134 < ((*v129 >> 1) & 1u) )
      v134 = (*v129 >> 1) & 1;
    if ( v134 == 1 )
    {
      v135 = 0;
      if ( v123 )
      {
        while ( 1 )
        {
          v136 = &v178[5 * v135 + 2];
          if ( v136 != v124 && !(unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(v136, v5, v127, 0LL) )
            break;
          if ( ++v135 >= v123 )
            goto LABEL_265;
        }
        v49 = (__int64 *)(v5 + 104);
        goto LABEL_239;
      }
    }
LABEL_265:
    v137 = v170;
    if ( (unsigned __int8)KiScheduleThreadToRescheduleContext((unsigned int)v178, v5, v162, v154, v170) )
      KiSearchForNewThreadsForRescheduleContext(v178, v137);
    v138 = v178[0];
    v139 = 0;
    v140 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v140 = 2;
    for ( i = 0; i < LOBYTE(v178[0]); ++i )
    {
      v142 = KiCommitRescheduleContextEntry(&v178[5 * i + 2], v6, v140, v137);
      v138 = v178[0];
      v139 |= v142;
    }
    if ( LODWORD(v178[1]) == 1 )
    {
      v143 = *(unsigned __int8 **)(v178[2] + 34904LL);
      v144 = v143[1] + 1;
      if ( v144 >= *v143 )
        v144 = 0;
      v143[1] = v144;
    }
    v145 = 0LL;
    v146 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v175 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
    v147 = 0;
    if ( (v177 & 1) != 0 )
    {
      if ( (v177 & 1) == 1 )
      {
        v145 = (unsigned __int64 *)(*(_QWORD *)(v146 + 34904) + 8LL);
        v147 = **(unsigned __int8 **)(v146 + 34904);
      }
      if ( !v147 )
        goto LABEL_284;
    }
    else
    {
      v145 = &v175;
      v147 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v145[--v147] + 48), 0LL);
    while ( v147 );
    v138 = v178[0];
LABEL_284:
    result = 0LL;
    *(_QWORD *)&v177 = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( v139 )
    {
      result = v138;
      if ( v138 )
      {
        v148 = &v178[2];
        v149 = v138;
        do
        {
          result = KiCompleteRescheduleContextEntry(v148, v6);
          v148 += 5;
          --v149;
        }
        while ( v149 );
      }
    }
    goto LABEL_299;
  }
  memset(v179, 0, sizeof(v179));
  KiStartRescheduleContext((__int64)v179, (__int64 *)&v177, v5);
  v77 = v170;
  v78 = v177 & 0xFFFFFFFFFFFFFFFEuLL;
  KiScheduleThreadToRescheduleContext((unsigned int)v179, v5, v177 & 0xFFFFFFFE, v154, v170);
  v79 = v179[0];
  v80 = 0;
  v81 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v81 = 2;
  for ( j = 0; j < LOBYTE(v179[0]); ++j )
  {
    v83 = KiCommitRescheduleContextEntry(&v179[5 * j + 2], v6, v81, v77);
    v79 = v179[0];
    v80 |= v83;
  }
  if ( LODWORD(v179[1]) == 1 )
  {
    v84 = *(unsigned __int8 **)(v179[2] + 34904LL);
    v85 = v84[1] + 1;
    if ( v85 >= *v84 )
      v85 = 0;
    v84[1] = v85;
  }
  v86 = 0LL;
  v174 = v78;
  v87 = 0;
  if ( (v177 & 1) == 0 )
  {
    v86 = &v174;
    v87 = 1;
    do
LABEL_154:
      _InterlockedAnd64((volatile signed __int64 *)(v86[--v87] + 48), 0LL);
    while ( v87 );
    v79 = v179[0];
    goto LABEL_156;
  }
  if ( (v177 & 1) == 1 )
  {
    v86 = (unsigned __int64 *)(*(_QWORD *)(v78 + 34904) + 8LL);
    v87 = **(unsigned __int8 **)(v78 + 34904);
  }
  if ( v87 )
    goto LABEL_154;
LABEL_156:
  result = 0LL;
  *(_QWORD *)&v177 = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  if ( v80 )
  {
    result = v79;
    if ( v79 )
    {
      v89 = (char *)&v179[6] + 3;
      for ( k = v79; k; --k )
      {
        v91 = *v89;
        v92 = *(_QWORD *)(v89 - 35);
        if ( (*v89 & 0x10) == 0 && ((v91 & 8) == 0 || !*(_BYTE *)(v92 + 7)) )
          goto LABEL_172;
        result = *(unsigned __int8 *)(v6 + 12761);
        if ( (_BYTE)result )
        {
          if ( (_BYTE)result == 1 )
          {
            v93 = *(unsigned int *)(v6 + 12764);
            if ( (_DWORD)v93 == *(_DWORD *)(v92 + 36) )
              goto LABEL_172;
            v94 = (_WORD *)(v6 + 12768);
            *(_BYTE *)(v6 + 12761) = 2;
            result = KeAddProcessorAffinityEx(v6 + 12768, v93);
          }
          else
          {
            v94 = (_WORD *)(v6 + 12768);
          }
          v95 = *(unsigned __int8 *)(v92 + 208);
          v96 = *(_QWORD *)(v92 + 200);
          if ( *v94 > (unsigned __int16)v95 )
            goto LABEL_171;
          if ( v94[1] > (unsigned __int16)v95 )
          {
            result = (unsigned int)(v95 + 1);
            *v94 = v95 + 1;
LABEL_171:
            *(_QWORD *)&v94[4 * v95 + 4] |= v96;
          }
        }
        else
        {
          *(_BYTE *)(v6 + 12761) = 1;
          result = *(unsigned int *)(v92 + 36);
          *(_DWORD *)(v6 + 12764) = result;
        }
LABEL_172:
        if ( (v91 & 4) != 0 )
          result = KiHvEnlightenedGuestPriorityKick(v6, v92, (unsigned int)v89[1], v86);
        if ( (v91 & 1) != 0 )
        {
          result = *(_QWORD *)(v89 - 11);
          _InterlockedDecrement16((volatile signed __int16 *)(result + 868));
        }
        v89 += 40;
      }
    }
  }
LABEL_299:
  if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
    return EtwTraceIdealProcessor(v5, 1350LL, v166, v165);
  return result;
}
