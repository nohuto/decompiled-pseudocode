/*
 * XREFs of KiRemoveBoostThread @ 0x1402BB4E0
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260EC0 (ExpCommitWakeResourceShared.c)
 *     KiCompleteDirectSwitchThread @ 0x1402B9E38 (KiCompleteDirectSwitchThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BC260 (KeSetEventBoostPriorityEx.c)
 *     KeGenericProcessorCallback @ 0x140305DC4 (KeGenericProcessorCallback.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiComputeHeteroThreadQos @ 0x1402B1080 (KiComputeHeteroThreadQos.c)
 *     KiComputePriorityFloor @ 0x1402B10CC (KiComputePriorityFloor.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 *     KiGetCurrentScheduledThreadProcessor @ 0x140577750 (KiGetCurrentScheduledThreadProcessor.c)
 *     KiGetThreadHeteroRunningType @ 0x140577768 (KiGetThreadHeteroRunningType.c)
 */

char __fastcall KiRemoveBoostThread(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r8
  char v5; // cl
  char v6; // dl
  int v7; // ebx
  char v8; // r8
  char v9; // al
  int v10; // ebx
  struct _KPRCB *CurrentPrcb; // r15
  int v12; // r13d
  int v13; // r12d
  _KTHREAD *NextThread; // r14
  struct _KPRCB *v15; // rcx
  __int64 v16; // r8
  int v17; // ecx
  _KPRCB **Prcbs; // r14
  unsigned int ProcessorCount; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  __int64 v22; // r12
  _KPRCB *v23; // rbx
  bool v24; // zf
  char v25; // al
  unsigned __int8 v26; // cl
  unsigned __int8 *v27; // rax
  char v28; // r9
  char v29; // r14
  BOOL v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rdx
  _WORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  char v36; // r12
  unsigned __int64 *v37; // r9
  int v38; // edx
  unsigned __int64 v39; // r8
  struct _KPRCB *v40; // rbx
  char v41; // bl
  struct _KPRCB **v42; // rax
  unsigned int v43; // r8d
  struct _KPRCB **v44; // rcx
  __int64 v45; // rbx
  struct _KPRCB *v46; // r13
  struct _SINGLE_LIST_ENTRY *v47; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  char v49; // cl
  __int64 v50; // rdx
  char v51; // bl
  char v52; // bl
  unsigned __int8 v53; // bl
  unsigned __int8 *v54; // rdx
  unsigned __int8 v55; // al
  int v56; // [rsp+20h] [rbp-E0h]
  __int64 v57; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+30h] [rbp-D0h] BYREF
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h]
  int v61; // [rsp+40h] [rbp-C0h]
  struct _KPRCB *v62; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *PriorityState; // [rsp+50h] [rbp-B0h]
  _KTHREAD *v64; // [rsp+58h] [rbp-A8h]
  struct _KPRCB *v65; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v66; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v67[42]; // [rsp+70h] [rbp-90h] BYREF

  v57 = 0LL;
  v58 = 0LL;
  if ( !*(_BYTE *)(a2 + 564) )
    return *(_BYTE *)(a2 + 195) + 1;
  v59 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v59);
    while ( *(_QWORD *)(a2 + 64) );
  }
  v4 = *(_BYTE *)(a2 + 564);
  v5 = *(_BYTE *)(a2 + 195);
  v6 = v4 & 0xF;
  v7 = (unsigned __int8)(v5 - (v4 & 0xF));
  if ( (v4 & 0xF) == 0 )
    v7 = *(unsigned __int8 *)(a2 + 195);
  v8 = v4 >> 4;
  v61 = v7;
  if ( !v8 )
  {
    v41 = v7 + 1;
    goto LABEL_50;
  }
  *(_BYTE *)(a2 + 564) = v6;
  v9 = KiComputePriorityFloor(a2, v5 - v8);
  v10 = v9;
  if ( v9 != *(_BYTE *)(a2 + 195) )
  {
    CurrentPrcb = (struct _KPRCB *)a1;
    if ( !a1 )
      CurrentPrcb = KeGetCurrentPrcb();
    a1 = (__int64)CurrentPrcb;
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v57);
    v12 = v10;
    v62 = KeGetCurrentPrcb();
    v60 = *(char *)(a2 + 195);
    v13 = v60;
    v56 = 0;
    memset(v67, 0, sizeof(v67));
    NextThread = CurrentPrcb->NextThread;
    v15 = v62;
    v64 = NextThread;
    if ( (char)v10 > (char)v60 )
    {
      if ( *(_BYTE *)(a2 + 793) )
      {
        v47 = (struct _SINGLE_LIST_ENTRY *)(a2 + 808);
        if ( *(_QWORD *)(a2 + 808) == 1LL )
        {
          p_AbPropagateBoostsList = &v62->AbPropagateBoostsList;
          if ( v62 != (struct _KPRCB *)-35704LL )
          {
            v47->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v47;
            _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
            KiAbQueueAutoBoostDpc(v15);
          }
        }
      }
    }
    *(_BYTE *)(a2 + 195) = v10;
    if ( (unsigned int)KiComputeHeteroThreadQos(a2, 0LL) != (unsigned __int8)*(_DWORD *)(a2 + 512) )
      KiSetThreadQosLevelUnsafe(a2);
    if ( NextThread )
    {
LABEL_27:
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        LOBYTE(v16) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), v16);
      }
      if ( !NextThread )
      {
        if ( v12 >= v13 )
        {
          if ( v12 > v13 && *(_BYTE *)(a2 + 388) == 2 )
            v56 = v12;
          else
            v12 = 0;
          v28 = 0;
        }
        else
        {
          if ( *(_BYTE *)(a2 + 388) == 2 )
          {
            v28 = 1;
LABEL_33:
            v12 = 0;
            goto LABEL_34;
          }
          v49 = v12 + 1;
          v12 = 0;
          if ( (CurrentPrcb->ReadySummary | CurrentPrcb->SharedReadyQueue->ReadySummary) >> v49 )
            *(_BYTE *)(a2 + 112) |= 0x10u;
          v28 = 0;
        }
LABEL_34:
        v29 = 0;
        v30 = 0;
        v31 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
        v32 = *(_QWORD *)(v31 + 34880);
        if ( v32 )
        {
          v33 = *(_WORD **)(a2 + 576);
          v34 = *(unsigned __int8 *)(v31 + 208);
          if ( (unsigned __int16)v34 >= *v33 )
            v35 = 0LL;
          else
            v35 = *(_QWORD *)&v33[4 * v34 + 4];
          v30 = (v32 & v35) == v32;
        }
        if ( v30 != ((*(_DWORD *)(a2 + 120) >> 13) & 1) )
          _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
        if ( v28 )
        {
          KiStartRescheduleContext((__int64)v67, &v57, 0LL);
          v42 = 0LL;
          v43 = 0;
          if ( LOBYTE(v67[0]) )
          {
            v44 = (struct _KPRCB **)&v67[2];
            while ( *v44 != CurrentPrcb )
            {
              ++v43;
              v44 += 5;
              if ( v43 >= LOBYTE(v67[0]) )
                goto LABEL_57;
            }
            v42 = v44;
          }
LABEL_57:
          *((_BYTE *)v42 + 34) |= 2u;
          KiSearchForNewThreadsForRescheduleContext(v67, (__int64)&v58);
          v36 = 0;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            v29 = 2;
          v45 = 0LL;
          if ( LOBYTE(v67[0]) )
          {
            v46 = v62;
            do
            {
              v36 |= KiCommitRescheduleContextEntry(&v67[5 * v45 + 2], (__int64)v46, v29, &v58);
              v45 = (unsigned int)(v45 + 1);
            }
            while ( (unsigned int)v45 < LOBYTE(v67[0]) );
            v12 = v56;
          }
          if ( LODWORD(v67[1]) == 1 )
          {
            v54 = *(unsigned __int8 **)(v67[2] + 34904LL);
            v55 = v54[1] + 1;
            if ( v55 >= *v54 )
              v55 = 0;
            v54[1] = v55;
          }
        }
        else
        {
          v36 = 0;
        }
        v37 = 0LL;
        v38 = 0;
        v39 = v57 & 0xFFFFFFFFFFFFFFFEuLL;
        v66 = v57 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v57 & 1) != 0 )
        {
          if ( (v57 & 1) == 1 )
          {
            v37 = (unsigned __int64 *)(*(_QWORD *)(v39 + 34904) + 8LL);
            v38 = **(unsigned __int8 **)(v39 + 34904);
          }
          if ( !v38 )
            goto LABEL_45;
        }
        else
        {
          v37 = &v66;
          v38 = 1;
        }
        do
          _InterlockedAnd64((volatile signed __int64 *)(v37[--v38] + 48), 0LL);
        while ( v38 );
LABEL_45:
        v40 = v62;
        v57 = 0LL;
        if ( v36 )
        {
          KiCompleteRescheduleContext(v67, (__int64)v62);
          KiFlushSoftwareInterruptBatch(&v40->DeferredDispatchInterrupts.Level);
        }
        if ( v12 > 0 )
          KiHvEnlightenedGuestPriorityKick((__int64)v40, (__int64)CurrentPrcb, v12);
        goto LABEL_49;
      }
      v28 = 0;
      goto LABEL_33;
    }
    v17 = *(_DWORD *)(a2 + 120) >> 1;
    v65 = CurrentPrcb;
    if ( (v17 & 1) != 0 )
    {
      CoreControlBlock = CurrentPrcb->CoreControlBlock;
      ProcessorCount = CoreControlBlock->ProcessorCount;
      Prcbs = CoreControlBlock->Prcbs;
      if ( !CoreControlBlock->ProcessorCount )
      {
LABEL_26:
        NextThread = v64;
        goto LABEL_27;
      }
    }
    else
    {
      Prcbs = &v65;
      ProcessorCount = 1;
    }
    v22 = ProcessorCount;
    do
    {
      v23 = *Prcbs;
      KiGetCurrentScheduledThreadProcessor(*Prcbs);
      v24 = (*(_BYTE *)(a2 + 2) & 4) == 0;
      PriorityState = (unsigned __int8 *)v23->PriorityState;
      if ( v24 || !(unsigned __int8)KiIsThreadRankNonZero(a2, v23) )
        v25 = *(_BYTE *)(a2 + 195);
      else
        v25 = 1;
      v26 = v25 & 0x7F | ((unsigned __int8)(*(_DWORD *)(a2 + 120) >> 1) << 7);
      *PriorityState = v26;
      if ( v23->SchedulerAssist )
      {
        if ( (_KTHREAD *)a2 == v23->IdleThread )
          v50 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v50 = v26 & 0x7F;
        KiSetSchedulerAssistPriority(v23->SchedulerAssist, v50, 0LL);
      }
      v27 = (unsigned __int8 *)v23->PriorityState;
      PriorityState = v27;
      if ( KeHeteroSystem )
      {
        v51 = (*(_BYTE *)(a2 + 512) ^ v27[64]) & 7 ^ v27[64];
        v52 = (v51 ^ (8 * *(_BYTE *)(a2 + 516))) & 0x38 ^ v51;
        v53 = (v52 ^ ((unsigned __int8)KiGetThreadHeteroRunningType(a2) << 6)) & 0x40 ^ v52;
        PriorityState[64] = v53;
      }
      ++Prcbs;
      --v22;
    }
    while ( v22 );
    v13 = v60;
    goto LABEL_26;
  }
LABEL_49:
  v41 = v61;
LABEL_50:
  v24 = v58 == 0;
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( !v24 )
    KiReadyDeferredReadyList(a1, &v58);
  return v41;
}
