/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x14056D8DC
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x140466930 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeSetPriorityThread @ 0x1402B05D0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KiAbProcessContextSwitch @ 0x1402BC0A8 (KiAbProcessContextSwitch.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x140318BF8 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x140461770 (KeCheckAndApplyBamQos.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x14056E53C (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056EBDC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x1405FDD64 (EtwTraceXSchedulerPriorityKickReceive.c)
 */

void __fastcall KeSetThreadSchedulerAssist(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // r12
  _DWORD *v5; // r9
  int v6; // eax
  __int64 v7; // rax
  char v8; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v10; // r14
  ULONG_PTR CurrentThread; // r14
  __int64 NextThread; // r13
  struct _KPRCB *v13; // rcx
  signed __int32 *v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 *v17; // rdx
  unsigned int v18; // r8d
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int64 v27; // rax
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  char v30; // r15
  _QWORD *v31; // r14
  struct _KPRCB *v32; // rcx
  signed __int32 *v33; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  __int64 v36; // r12
  unsigned __int8 v37; // r14
  _DWORD *v38; // r9
  int v39; // eax
  struct _KPRCB *v40; // r15
  int v41; // eax
  int v42; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned int ProcessorCount; // ecx
  struct _KPRCB **Prcbs; // rdx
  __int64 v46; // r8
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  __int64 v51; // rcx
  _DWORD *v52; // r9
  int v53; // eax
  ULONG_PTR v54; // rdx
  char v55; // al
  char v56; // al
  char v57; // cl
  unsigned int v58; // edx
  char v59; // dl
  char v60; // cl
  __int64 v61; // r15
  volatile signed __int32 *v62; // r14
  char v63; // al
  __int64 v64; // rax
  bool v65; // zf
  __int64 v66; // r12
  __int64 v67; // r12
  __int64 v68; // rax
  char v69; // r12
  struct _KPRCB *v70; // r14
  _QWORD *v71; // r15
  ULONG_PTR v72; // r13
  __int64 v73; // r12
  struct _KPRCB *v74; // rcx
  signed __int32 *v75; // r8
  signed __int32 v76; // eax
  signed __int32 v77; // ett
  char v78; // al
  unsigned __int8 v79; // r14
  unsigned int v80; // r8d
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // rcx
  _DWORD *v86; // rdx
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r9
  _DWORD *v89; // r8
  int v90; // eax
  _QWORD *v91; // [rsp+30h] [rbp-40h] BYREF
  __int64 v92; // [rsp+38h] [rbp-38h] BYREF
  int v93; // [rsp+40h] [rbp-30h] BYREF
  int v94; // [rsp+44h] [rbp-2Ch] BYREF
  int v95; // [rsp+48h] [rbp-28h] BYREF
  int v96; // [rsp+4Ch] [rbp-24h] BYREF
  __int64 v97; // [rsp+50h] [rbp-20h] BYREF
  __int64 v98; // [rsp+58h] [rbp-18h] BYREF
  __int64 v99; // [rsp+60h] [rbp-10h] BYREF
  struct _KPRCB *v100; // [rsp+68h] [rbp-8h] BYREF
  int v101; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v102; // [rsp+C8h] [rbp+58h] BYREF

  v91 = 0LL;
  v101 = 0;
  v92 = 0LL;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      if ( a3 == 2 || a3 == 3 )
      {
        if ( (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickReceive(BugCheckParameter1, a3);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v29 = 4;
          if ( CurrentIrql != 2 )
            v29 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v29;
        }
        v93 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v93);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        v30 = 0;
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = v91;
        if ( v91 )
        {
          v91 = (_QWORD *)*v91;
          do
          {
            KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v31 - 27), (__int64)&v91);
            v31 = v91;
            ++v30;
            if ( v91 )
              v91 = (_QWORD *)*v91;
            if ( (v30 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
          }
          while ( v31 );
        }
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
        v98 = 0LL;
        if ( CurrentIrql < 2u )
        {
          CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v98);
            NextThread = (__int64)CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, 1u);
            v32 = KeGetCurrentPrcb();
            v33 = (signed __int32 *)v32->SchedulerAssist;
            if ( v33 )
            {
              _m_prefetchw(v33);
              v34 = *v33;
              do
              {
                v35 = v34;
                v34 = _InterlockedCompareExchange(v33, v34 & 0xFFDFFFFF, v34);
              }
              while ( v35 != v34 );
              if ( (v34 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
            _enable();
            CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
            if ( *(_BYTE *)(NextThread + 388) == 1 )
              *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                            - *(_DWORD *)(NextThread + 436)
                                            + MEMORY[0xFFFFF78000000320];
            v17 = &v98;
            goto LABEL_37;
          }
LABEL_38:
          v19 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
          goto LABEL_39;
        }
      }
      else
      {
        if ( a3 != 4 )
          return;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v5 = KeGetCurrentPrcb()->SchedulerAssist;
          v6 = 4;
          if ( CurrentIrql != 2 )
            v6 = (-1LL << (CurrentIrql + 1)) & 4;
          v5[5] |= v6;
        }
        LODWORD(v102) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v102);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v7 = *(_QWORD *)(BugCheckParameter1 + 968);
        if ( v7 )
        {
          _InterlockedAdd64((volatile signed __int64 *)(v7 + 40), 1uLL);
          if ( *(_QWORD *)(v7 + 40) != *(_QWORD *)(v7 + 48) && *(_BYTE *)(BugCheckParameter1 + 388) == 1 )
            KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
        }
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        v8 = 0;
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = v91;
        if ( v91 )
        {
          v91 = (_QWORD *)*v91;
          do
          {
            KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v10 - 27), (__int64)&v91);
            v10 = v91;
            ++v8;
            if ( v91 )
              v91 = (_QWORD *)*v91;
            if ( (v8 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
          }
          while ( v10 );
        }
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
        v97 = 0LL;
        if ( CurrentIrql < 2u )
        {
          CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v97);
            NextThread = (__int64)CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, 1u);
            v13 = KeGetCurrentPrcb();
            v14 = (signed __int32 *)v13->SchedulerAssist;
            if ( v14 )
            {
              _m_prefetchw(v14);
              v15 = *v14;
              do
              {
                v16 = v15;
                v15 = _InterlockedCompareExchange(v14, v15 & 0xFFDFFFFF, v15);
              }
              while ( v16 != v15 );
              if ( (v15 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v13);
            }
            _enable();
            CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
            if ( *(_BYTE *)(NextThread + 388) == 1 )
              *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                            - *(_DWORD *)(NextThread + 436)
                                            + MEMORY[0xFFFFF78000000320];
            v17 = &v97;
LABEL_37:
            *(_BYTE *)(NextThread + 388) = 2;
            *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
            *(_BYTE *)(CurrentThread + 643) = 32;
            KiQueueReadyThread((__int64)CurrentPrcb, v17, CurrentThread);
            LOBYTE(v18) = CurrentIrql;
            v19 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v18) == 0;
LABEL_39:
            if ( !v19 )
            {
              if ( (_DWORD)KiIrqlFlags )
              {
                v20 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v20 - 2) <= 0xDu )
                {
                  v21 = KeGetCurrentPrcb();
                  v22 = v21->SchedulerAssist;
                  v19 = (v22[5] & 0xFFFF0003) == 0;
                  v22[5] &= 0xFFFF0003;
                  if ( v19 )
                    KiRemoveSystemWorkPriorityKick((__int64)v21);
                }
              }
              __writecr8(1uLL);
              *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
              KiDeliverApc(0, 0LL, 0LL);
            }
            if ( (_DWORD)KiIrqlFlags )
            {
              v23 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v23 - 2) <= 0xDu )
              {
                v24 = KeGetCurrentPrcb();
                v25 = v24->SchedulerAssist;
                v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v19 = (v26 & v25[5]) == 0;
                v25[5] &= v26;
                if ( v19 )
                  KiRemoveSystemWorkPriorityKick((__int64)v24);
              }
            }
            v27 = CurrentIrql;
LABEL_115:
            __writecr8(v27);
            return;
          }
          goto LABEL_38;
        }
      }
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      return;
    }
    v36 = *(_QWORD *)(BugCheckParameter1 + 968);
    if ( !v36 )
      return;
    v37 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
    {
      v38 = KeGetCurrentPrcb()->SchedulerAssist;
      v39 = 4;
      if ( v37 != 2 )
        v39 = (-1LL << (v37 + 1)) & 4;
      v38[5] |= v39;
    }
    v94 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v94);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v40 = KeGetCurrentPrcb();
    v41 = *(_DWORD *)(v36 + 4);
    v101 = v41;
    if ( v41 >= 7
      || (*(_BYTE *)(BugCheckParameter1 + 1122) = v41,
          KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v101),
          v101 == (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512)) )
    {
LABEL_107:
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KeCheckAndApplyBamQos((__int64)v40, BugCheckParameter1);
      if ( (_DWORD)KiIrqlFlags )
      {
        v47 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu && v37 <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v19 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)v48);
        }
      }
      v27 = v37;
      goto LABEL_115;
    }
    KiAcquirePrcbLocksForIsolationUnit((__int64)v40, 0, &v92);
    KiSetThreadQosLevelUnsafe(BugCheckParameter1, v101);
    if ( !v40->NextThread )
    {
      v42 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
      v100 = v40;
      if ( (v42 & 1) == 0 )
      {
        Prcbs = &v100;
        ProcessorCount = 1;
        goto LABEL_102;
      }
      CoreControlBlock = v40->CoreControlBlock;
      ProcessorCount = CoreControlBlock->ProcessorCount;
      Prcbs = CoreControlBlock->Prcbs;
      if ( CoreControlBlock->ProcessorCount )
      {
LABEL_102:
        v46 = ProcessorCount;
        do
        {
          if ( KeHeteroSystem )
            (*Prcbs)->PriorityState[64].AllFields ^= (*(_BYTE *)(BugCheckParameter1 + 512) ^ (*Prcbs)->PriorityState[64].AllFields) & 7;
          ++Prcbs;
          --v46;
        }
        while ( v46 );
      }
    }
    KiReleasePrcbLocksForIsolationUnit(&v92);
    goto LABEL_107;
  }
  if ( a2 )
  {
    *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    *(_QWORD *)(BugCheckParameter1 + 968) = a2;
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KeSetActualBasePriorityThread(BugCheckParameter1, 1);
    return;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v51 = KeGetCurrentIrql();
    v102 = v51;
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v51 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      v53 = 4;
      if ( (_BYTE)v51 != 2 )
        v53 = (-1LL << ((unsigned __int8)v51 + 1)) & 4;
      v52[5] |= v53;
    }
    v95 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v95);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    if ( *(_DWORD *)(BugCheckParameter1 + 1024) != 32 )
    {
      v54 = *(char *)(BugCheckParameter1 + 1024);
      v55 = *(_BYTE *)(v54 + BugCheckParameter1 + 824);
      if ( !v55 )
        KeBugCheckEx(0x157u, BugCheckParameter1, v54, 2uLL, 0LL);
      v56 = v55 - 1;
      *(_BYTE *)(v54 + BugCheckParameter1 + 824) = v56;
      if ( !v56 )
      {
        v57 = v54;
        v58 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v54);
        *(_DWORD *)(BugCheckParameter1 + 856) = v58;
        if ( v58 < 1 << v57 )
        {
          v59 = *(_BYTE *)(BugCheckParameter1 + 195);
          if ( v59 <= 31 )
          {
            v60 = *(_BYTE *)(BugCheckParameter1 + 563)
                + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
                + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
            if ( v60 < v59 )
              KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v91, v60);
          }
        }
      }
      *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v61 = 0LL;
          v62 = 0LL;
          if ( *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
            break;
          v67 = *(unsigned int *)(BugCheckParameter1 + 536);
          if ( (int)v67 >= 0 )
          {
            v61 = KiProcessorBlock[v67];
            KiAcquirePrcbLocksForIsolationUnit(v61, 0, &v92);
            if ( *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
              goto LABEL_161;
            v65 = *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v67;
            goto LABEL_160;
          }
          v68 = (unsigned int)v67;
          LODWORD(v68) = v67 & 0x7FFFFFFF;
          v96 = 0;
          v62 = *(volatile signed __int32 **)(KiProcessorBlock[v68] + 34888);
          while ( _interlockedbittestandset64(v62, 0LL) )
          {
            do
              KeYieldProcessorEx(&v96);
            while ( *(_QWORD *)v62 );
          }
          if ( *(_BYTE *)(BugCheckParameter1 + 388) == 1 && *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v67 )
          {
LABEL_162:
            _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
            *(_QWORD *)(BugCheckParameter1 + 968) = 0LL;
            _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
            if ( v61 )
              KiReleasePrcbLocksForIsolationUnit(&v92);
            if ( v62 )
              _InterlockedAnd64((volatile signed __int64 *)v62, 0LL);
            *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
            v69 = 0;
            v70 = KeGetCurrentPrcb();
            v71 = v91;
            if ( v91 )
            {
              v91 = (_QWORD *)*v91;
              do
              {
                KiDeferredReadySingleThread((__int64)v70, (unsigned __int64)(v71 - 27), (__int64)&v91);
                v71 = v91;
                ++v69;
                if ( v91 )
                  v91 = (_QWORD *)*v91;
                if ( (v69 & 0xF) == 0 )
                  KiFlushSoftwareInterruptBatch(&v70->DeferredDispatchInterrupts.Level);
              }
              while ( v71 );
            }
            KiFlushSoftwareInterruptBatch(&v70->DeferredDispatchInterrupts.Level);
            v99 = 0LL;
            if ( (unsigned __int8)v102 >= 2u )
            {
              if ( v70->NextThread && !v70->DpcRoutineActive )
                KiRequestSoftwareInterrupt(v70, 2);
            }
            else
            {
              v72 = (ULONG_PTR)v70->CurrentThread;
              if ( v70->NextThread )
              {
                KiAbProcessContextSwitch((__int64)v70->CurrentThread, 0);
                KiAcquirePrcbLocksForIsolationUnit((__int64)v70, 0, &v99);
                v73 = (__int64)v70->NextThread;
                v70->NextThread = 0LL;
                _disable();
                KiEndThreadCycleAccumulation((__int64)v70, v72, 0LL, 1u);
                v74 = KeGetCurrentPrcb();
                v75 = (signed __int32 *)v74->SchedulerAssist;
                if ( v75 )
                {
                  _m_prefetchw(v75);
                  v76 = *v75;
                  do
                  {
                    v77 = v76;
                    v76 = _InterlockedCompareExchange(v75, v76 & 0xFFDFFFFF, v76);
                  }
                  while ( v77 != v76 );
                  if ( (v76 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick((__int64)v74);
                }
                _enable();
                v70->CurrentThread = (_KTHREAD *)v73;
                if ( *(_BYTE *)(v73 + 388) == 1 )
                  *(_DWORD *)(v73 + 132) = *(_DWORD *)(v73 + 132) - *(_DWORD *)(v73 + 436) + MEMORY[0xFFFFF78000000320];
                v78 = v102;
                *(_BYTE *)(v73 + 388) = 2;
                *(_BYTE *)(v72 + 390) = v78;
                *(_BYTE *)(v72 + 643) = 32;
                KiQueueReadyThread((__int64)v70, &v99, v72);
                v79 = v102;
                LOBYTE(v80) = v102;
                if ( (unsigned __int8)KiSwapContext(v72, v73, v80) )
                {
                  if ( (_DWORD)KiIrqlFlags )
                  {
                    v81 = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v81 - 2) <= 0xDu )
                    {
                      v82 = KeGetCurrentPrcb();
                      v83 = v82->SchedulerAssist;
                      v19 = (v83[5] & 0xFFFF0003) == 0;
                      v83[5] &= 0xFFFF0003;
                      if ( v19 )
                        KiRemoveSystemWorkPriorityKick((__int64)v82);
                    }
                  }
                  __writecr8(1uLL);
                  *(_DWORD *)(v72 + 116) &= ~0x40u;
                  KiDeliverApc(0, 0LL, 0LL);
                }
              }
              else
              {
                if ( (*(_DWORD *)(v72 + 116) & 0x40) != 0 )
                {
                  if ( (_DWORD)KiIrqlFlags )
                  {
                    v84 = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v84 - 2) <= 0xDu )
                    {
                      v85 = KeGetCurrentPrcb();
                      v86 = v85->SchedulerAssist;
                      v19 = (v86[5] & 0xFFFF0003) == 0;
                      v86[5] &= 0xFFFF0003;
                      if ( v19 )
                        KiRemoveSystemWorkPriorityKick((__int64)v85);
                    }
                  }
                  __writecr8(1uLL);
                  *(_DWORD *)(v72 + 116) &= ~0x40u;
                  KiDeliverApc(0, 0LL, 0LL);
                }
                v79 = v102;
              }
              if ( (_DWORD)KiIrqlFlags )
              {
                v87 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v87 - 2) <= 0xDu )
                {
                  v88 = KeGetCurrentPrcb();
                  v89 = v88->SchedulerAssist;
                  v90 = ~(unsigned __int16)(-1LL << (v79 + 1));
                  v19 = (v90 & v89[5]) == 0;
                  v89[5] &= v90;
                  if ( v19 )
                    KiRemoveSystemWorkPriorityKick((__int64)v88);
                }
              }
              __writecr8(v79);
            }
            KeSetPriorityThread((PKTHREAD)BugCheckParameter1, *(char *)(BugCheckParameter1 + 563));
            return;
          }
          _InterlockedAnd64((volatile signed __int64 *)v62, 0LL);
        }
        if ( *(_BYTE *)(BugCheckParameter1 + 388) != 2 )
          break;
LABEL_143:
        v64 = *(unsigned int *)(BugCheckParameter1 + 536);
        if ( (int)v64 >= 0 )
        {
          v61 = KiProcessorBlock[v64];
          KiAcquirePrcbLocksForIsolationUnit(v61, 0, &v92);
          v65 = BugCheckParameter1 == *(_QWORD *)(v61 + 8);
LABEL_160:
          if ( v65 )
            goto LABEL_162;
LABEL_161:
          KiReleasePrcbLocksForIsolationUnit(&v92);
        }
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 388) != 3 )
      {
        if ( *(_BYTE *)(BugCheckParameter1 + 388) != 5 )
          goto LABEL_162;
        v63 = *(_BYTE *)(BugCheckParameter1 + 112) & 7;
        if ( v63 == 1 || (unsigned __int8)(v63 - 3) <= 3u )
          goto LABEL_162;
        goto LABEL_143;
      }
      v66 = *(unsigned int *)(BugCheckParameter1 + 536);
      if ( (int)v66 >= 0 )
      {
        v61 = KiProcessorBlock[v66];
        KiAcquirePrcbLocksForIsolationUnit(v61, 0, &v92);
        if ( BugCheckParameter1 == *(_QWORD *)(v61 + 16) )
          goto LABEL_162;
        if ( *(_BYTE *)(BugCheckParameter1 + 388) == 3 && *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v66 )
          __fastfail(0x1Eu);
        goto LABEL_161;
      }
    }
  }
}
