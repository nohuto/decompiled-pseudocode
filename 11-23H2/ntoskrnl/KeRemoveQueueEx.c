/*
 * XREFs of KeRemoveQueueEx @ 0x1402AA2D0
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402A9FF0 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x14031CF80 (KeRemoveQueue.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiCommitThreadWait @ 0x140241FF0 (KiCommitThreadWait.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KiFastExitThreadWait @ 0x1402BBEA0 (KiFastExitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1402BC0A8 (KiAbProcessContextSwitch.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x140318BF8 (KiRequestSoftwareInterrupt.c)
 *     KiTestForAlertPending @ 0x140351530 (KiTestForAlertPending.c)
 *     KiAttemptFastRemoveQueue @ 0x140354F58 (KiAttemptFastRemoveQueue.c)
 *     KiSwitchQueue @ 0x14035677C (KiSwitchQueue.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceDequeueWork @ 0x1405FCFD0 (EtwTraceDequeueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rsi
  PLIST_ENTRY *v7; // rbp
  BOOLEAN v8; // bl
  int v9; // r14d
  __int64 v11; // r12
  __int64 Blink; // rcx
  _DWORD *SchedulerAssist; // r11
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  ULONG v16; // r15d
  struct _LIST_ENTRY *Flink; // rdx
  ULONG v18; // r13d
  struct _LIST_ENTRY *v19; // rax
  __int64 v20; // rax
  __int64 CurrentPrcb; // rbp
  unsigned __int64 WaitIrql; // r12
  ULONG_PTR v23; // r14
  int v24; // ecx
  struct _KPRCB *v25; // rdi
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  bool v32; // zf
  struct _KPRCB *v33; // rcx
  signed __int32 *v34; // r8
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  void (__fastcall *v47)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // r10
  __int16 v48; // r13
  unsigned int *v49; // r14
  unsigned __int64 v50; // rbx
  int v51; // ebp
  unsigned __int8 v52; // di
  __int64 (__fastcall *v53)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v54; // eax
  __int64 (__fastcall *v55)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v56; // eax
  __int64 (__fastcall *v58)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v59; // eax
  unsigned __int8 v60; // bp
  int v61; // r14d
  struct _KPRCB *v62; // rbx
  unsigned __int64 v63; // r14
  ULONG_PTR v64; // rdi
  _KTHREAD *NextThread; // rbp
  struct _KPRCB *v66; // rcx
  signed __int32 *v67; // r8
  signed __int32 v68; // eax
  signed __int32 v69; // ett
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r9
  int v75; // eax
  _DWORD *v76; // r8
  int v77; // eax
  __int64 v78; // rcx
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rdx
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  _DWORD *v85; // r9
  unsigned int v86; // r8d
  ULONG_PTR v87; // rdi
  int v88; // eax
  __int64 v89; // rbx
  $77FB1784F920FE33919952D0EDCFD5FB *v90; // rbp
  ULONG v91; // ebx
  __int64 v92; // rbx
  unsigned int v93; // edx
  unsigned __int64 v94; // rax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v96; // rcx
  struct _LIST_ENTRY *v97; // rax
  struct _LIST_ENTRY *v98; // rcx
  struct _KPRCB *v99; // rax
  _DWORD *v100; // r10
  __int64 v101; // rdx
  PLIST_ENTRY *v102; // rax
  PLIST_ENTRY *v103; // r14
  PLIST_ENTRY *v104; // r12
  unsigned __int8 v105; // bl
  _DWORD *v106; // r8
  __int64 v107; // r9
  unsigned __int8 v108; // al
  struct _KPRCB *v109; // r9
  _DWORD *v110; // r8
  int v111; // eax
  struct _LIST_ENTRY *v112; // rdx
  struct _LIST_ENTRY *v113; // rcx
  PLIST_ENTRY *v114; // rax
  struct _KPRCB *v115; // rdi
  BOOLEAN v116; // [rsp+40h] [rbp-378h]
  _DWORD v117[2]; // [rsp+48h] [rbp-370h] BYREF
  PLIST_ENTRY *v118; // [rsp+50h] [rbp-368h]
  ULONG v119; // [rsp+58h] [rbp-360h]
  int v120; // [rsp+5Ch] [rbp-35Ch]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-358h] BYREF
  int v122; // [rsp+64h] [rbp-354h]
  __int128 v123; // [rsp+68h] [rbp-350h] BYREF
  int v124; // [rsp+78h] [rbp-340h]
  __int64 v125; // [rsp+80h] [rbp-338h]
  int v126; // [rsp+88h] [rbp-330h] BYREF
  int v127; // [rsp+8Ch] [rbp-32Ch] BYREF
  int v128; // [rsp+90h] [rbp-328h] BYREF
  int v129; // [rsp+94h] [rbp-324h] BYREF
  __int64 v130; // [rsp+98h] [rbp-320h] BYREF
  _DWORD v131[2]; // [rsp+A0h] [rbp-318h] BYREF
  _DWORD v132[2]; // [rsp+A8h] [rbp-310h] BYREF
  _DWORD v133[2]; // [rsp+B0h] [rbp-308h] BYREF
  _DWORD v134[2]; // [rsp+B8h] [rbp-300h] BYREF
  _DWORD v135[2]; // [rsp+C0h] [rbp-2F8h] BYREF
  _DWORD v136[2]; // [rsp+C8h] [rbp-2F0h] BYREF
  LONGLONG QuadPart; // [rsp+D0h] [rbp-2E8h]
  __int128 v138; // [rsp+D8h] [rbp-2E0h] BYREF
  __int64 v139; // [rsp+E8h] [rbp-2D0h]
  __int64 v140; // [rsp+F0h] [rbp-2C8h] BYREF
  __int64 v141[2]; // [rsp+F8h] [rbp-2C0h] BYREF
  unsigned __int64 v142; // [rsp+108h] [rbp-2B0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+110h] [rbp-2A8h]
  int v144; // [rsp+118h] [rbp-2A0h] BYREF
  __int128 v145; // [rsp+11Ch] [rbp-29Ch]
  __int128 v146; // [rsp+130h] [rbp-288h] BYREF
  _QWORD v147[34]; // [rsp+140h] [rbp-278h] BYREF
  _QWORD v148[34]; // [rsp+250h] [rbp-168h] BYREF
  int v149; // [rsp+3B0h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v7 = EntryArray;
  v8 = Alertable;
  v9 = 4;
  BugCheckParameter2 = (ULONG_PTR)Queue;
  v116 = Alertable;
  v11 = WaitMode;
  Blink = 2LL;
  v118 = EntryArray;
  QuadPart = 0LL;
  v125 = 4LL;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    *(_QWORD *)&Alertable = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && Alertable <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( Alertable == 2 )
      {
        LODWORD(v14) = 4;
      }
      else
      {
        Blink = 2LL;
        v14 = (-1LL << (Alertable + 1)) & 4;
      }
      SchedulerAssist[5] |= v14;
    }
    CurrentThread->WaitIrql = Alertable;
  }
  v15 = 0xFFFFF78000000008uLL;
  v16 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v120 = 1;
    }
    else
    {
      v120 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      v8 = v116;
    }
  }
  else
  {
    v120 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v126 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v126);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        *(_QWORD *)&Alertable = &Queue->EntryListHead;
        v18 = 0;
        do
        {
          --Queue->Header.SignalState;
          v19 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
          Blink = (__int64)Flink->Blink;
          if ( v19->Blink != Flink || *(struct _LIST_ENTRY **)Blink != Flink )
            __fastfail(3u);
          *(_QWORD *)Blink = v19;
          v19->Blink = (struct _LIST_ENTRY *)Blink;
          v20 = v18++;
          Flink->Flink = 0LL;
          v119 = v18;
          EntryArray[v20] = Flink;
          Flink = *(struct _LIST_ENTRY **)Alertable;
        }
        while ( *(_QWORD *)Alertable != Alertable && v18 < Count );
        if ( v18 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = (__int64)KeGetCurrentPrcb();
          WaitIrql = CurrentThread->WaitIrql;
          if ( (unsigned __int8)WaitIrql < 2u )
          {
            v23 = *(_QWORD *)(CurrentPrcb + 8);
            if ( *(_QWORD *)(CurrentPrcb + 16) )
            {
              v24 = *(unsigned __int8 *)(v23 + 792) | *(unsigned __int8 *)(v23 + 870);
              v130 = 0LL;
              if ( v24 != 63 )
              {
                v25 = KeGetCurrentPrcb();
                v140 = 0LL;
                KiAbProcessThreadLocks(v23, 1, 1, 1, (__int64)&v130, (__int64)&v140, (__int64)&v25->AbSelfIoBoostsList);
                KiAbPropagateBoosts(&v140, &v25->AbSelfIoBoostsList, &v130);
                KiReadyDeferredReadyList((__int64)v25, &v130);
              }
              v127 = 0;
              v142 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v127);
                while ( *(_QWORD *)(CurrentPrcb + 48) );
              }
              v26 = *(_QWORD *)(CurrentPrcb + 16);
              *(_QWORD *)(CurrentPrcb + 16) = 0LL;
              _disable();
              *(_BYTE *)(CurrentPrcb + 32) = 1;
              v27 = __rdtsc();
              v28 = v27 - *(_QWORD *)(CurrentPrcb + 33152);
              *(_QWORD *)(v23 + 72) += v28;
              v29 = *(unsigned int *)(v23 + 80);
              v30 = v28 * *(unsigned int *)(CurrentPrcb + 33208);
              *(_QWORD *)(CurrentPrcb + 33152) = v27;
              v31 = (v30 >> 16) + v29;
              if ( v31 > 0xFFFFFFFF )
                LODWORD(v31) = -1;
              v32 = (*(_BYTE *)(v23 + 2) & 0xBE) == 0;
              *(_DWORD *)(v23 + 80) = v31;
              if ( !v32 )
                KiEndThreadAccountingPeriodEx(CurrentPrcb, v23, v28, 1u);
              v33 = KeGetCurrentPrcb();
              v34 = (signed __int32 *)v33->SchedulerAssist;
              if ( v34 )
              {
                _m_prefetchw(v34);
                v35 = *v34;
                do
                {
                  v36 = v35;
                  v35 = _InterlockedCompareExchange(v34, v35 & 0xFFDFFFFF, v35);
                }
                while ( v36 != v35 );
                if ( (v35 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(v33);
              }
              _enable();
              *(_QWORD *)(CurrentPrcb + 8) = v26;
              if ( *(_BYTE *)(v26 + 388) == 1 )
                *(_DWORD *)(v26 + 132) = *(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v26 + 388) = 2;
              *(_BYTE *)(v23 + 643) = 32;
              *(_BYTE *)(v23 + 390) = WaitIrql;
              KiQueueReadyThread(CurrentPrcb, (__int64 *)&v142, v23);
              if ( !(unsigned __int8)KiSwapContext(v23, v26, (unsigned __int8)WaitIrql) )
                goto LABEL_64;
              if ( (_DWORD)KiIrqlFlags )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
                {
                  v38 = KeGetCurrentPrcb();
                  v39 = v38->SchedulerAssist;
                  v32 = (v39[5] & 0xFFFF0003) == 0;
                  v39[5] &= 0xFFFF0003;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v38);
                }
              }
            }
            else
            {
              if ( (*(_DWORD *)(v23 + 116) & 0x40) == 0 )
                goto LABEL_64;
              if ( (_DWORD)KiIrqlFlags )
              {
                v40 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
                {
                  v41 = KeGetCurrentPrcb();
                  v42 = v41->SchedulerAssist;
                  v32 = (v42[5] & 0xFFFF0003) == 0;
                  v42[5] &= 0xFFFF0003;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v41);
                }
              }
            }
            __writecr8(1uLL);
            *(_DWORD *)(v23 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
LABEL_64:
            if ( (_DWORD)KiIrqlFlags )
            {
              v43 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v43 - 2) <= 0xDu )
              {
                v44 = KeGetCurrentPrcb();
                v45 = v44->SchedulerAssist;
                v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)WaitIrql + 1));
                v32 = (v46 & v45[5]) == 0;
                v45[5] &= v46;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v44);
              }
            }
            __writecr8(WaitIrql);
            goto LABEL_98;
          }
          if ( !*(_QWORD *)(CurrentPrcb + 16) || *(_BYTE *)(CurrentPrcb + 13242) )
          {
LABEL_98:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              EtwTraceDequeueWork(CurrentThread, v118, v18);
            return v18;
          }
          if ( *(_BYTE *)(CurrentPrcb + 32) )
          {
            *(_BYTE *)(CurrentPrcb + 6) = 1;
            goto LABEL_98;
          }
          memset(&v147[1], 0, 0x100uLL);
          v145 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
          {
            v144 = 3;
            v47 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                               + 120);
            ProcNumber = (_PROCESSOR_NUMBER)-1;
            v117[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v117[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v122 = 1;
            _disable();
            v47(*(_QWORD *)(HalpInterruptController + 16), v117, &v144, 47LL, &ProcNumber);
            if ( (v149 & 0x200) != 0 )
              _enable();
            goto LABEL_98;
          }
          LODWORD(v147[0]) = 2097153;
          memset((char *)v147 + 4, 0, 0x104uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)v147, KeGetPcr()->Prcb.Number);
          v139 = 0LL;
          v117[0] = 0;
          v146 = 0LL;
          v138 = 0LL;
          memset(&v148[1], 0, 0x100uLL);
          v124 = 0;
          v123 = 0LL;
          if ( qword_140C62548 )
          {
            qword_140C62548(v147, 47LL);
            goto LABEL_98;
          }
          LODWORD(v148[0]) = 2097153;
          memset((char *)v148 + 4, 0, 0x104uLL);
          KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v147, v148, 0x20u);
          v48 = v149;
          if ( HalpInterruptClusterModeEnabled )
          {
            v49 = (unsigned int *)HalpInterruptClusterData;
            ProcNumber = 0;
            if ( HalpInterruptClusterData < (unsigned __int64)HalpInterruptClusterDataEnd )
            {
              do
              {
                if ( (unsigned int)KeAndGroupAffinityEx(v147, (__int64)(v49 + 2), (char *)&v146) )
                {
                  v50 = v146;
                  v51 = 0;
                  LODWORD(v123) = 6;
                  v52 = 0;
                  *((_QWORD *)&v123 + 1) = *v49;
                  ProcNumber.Group = WORD4(v146);
                  for ( ProcNumber.Number = 0; v50; ProcNumber.Number = v52 )
                  {
                    if ( (v50 & 1) != 0 )
                    {
                      v117[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                      v51 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v117[0] + 12);
                      HIDWORD(v123) = v51;
                    }
                    ++v52;
                    v50 >>= 1;
                  }
                  v131[0] = -1;
                  v131[1] = 1;
                  v132[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v132[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v53 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  v54 = v53(*(_QWORD *)(HalpInterruptController + 16), v132, &v123, 47LL, v131);
                  if ( (v48 & 0x200) != 0 )
                    _enable();
                  if ( v54 < 0 )
                    goto LABEL_97;
                }
                v49 += 6;
              }
              while ( (unsigned __int64)v49 < HalpInterruptClusterDataEnd );
            }
            v9 = v125;
          }
          else if ( !HalpInterruptPhysicalModeOnly )
          {
            *((_QWORD *)&v138 + 1) = v147[1];
            LODWORD(v123) = 5;
            *(_QWORD *)&v138 = v147;
            DWORD2(v123) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(v117, (unsigned __int16 **)&v138) )
            {
              if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v117[0]) == 5 )
                DWORD2(v123) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v117[0] + 8);
            }
            if ( DWORD2(v123) )
            {
              v133[0] = -1;
              v133[1] = 1;
              v134[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v134[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v58 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                              + 120);
              _disable();
              v59 = v58(*(_QWORD *)(HalpInterruptController + 16), v134, &v123, 47LL, v133);
              if ( (v48 & 0x200) != 0 )
                _enable();
              if ( v59 < 0 )
                goto LABEL_97;
            }
          }
          *((_QWORD *)&v138 + 1) = v148[1];
          v117[0] = 0;
          *(_QWORD *)&v138 = v148;
          LOWORD(v139) = 0;
          if ( !(unsigned int)KeEnumerateNextProcessor(v117, (unsigned __int16 **)&v138) )
          {
            do
            {
              LODWORD(v123) = v9;
              v135[0] = -1;
              v135[1] = 1;
              DWORD2(v123) = *(_DWORD *)(HalpInterruptTargets + 24LL * v117[0] + 8);
              v136[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v136[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v55 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                              + 120);
              _disable();
              v56 = v55(*(_QWORD *)(HalpInterruptController + 16), v136, &v123, 47LL, v135);
              if ( (v48 & 0x200) != 0 )
                _enable();
            }
            while ( v56 >= 0 && !(unsigned int)KeEnumerateNextProcessor(v117, (unsigned __int16 **)&v138) );
          }
LABEL_97:
          v18 = v119;
          goto LABEL_98;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    }
    else if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( v8 )
        {
          v128 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v128);
            while ( CurrentThread->ThreadLock );
          }
        }
        v77 = KiTestForAlertPending(CurrentThread, v8, (unsigned __int8)v11, 1LL);
        v78 = v77;
        if ( !v77 )
          v78 = 258LL;
        *EntryArray = (PLIST_ENTRY)v78;
        if ( v8 )
          CurrentThread->ThreadLock = 0LL;
      }
      v62 = KeGetCurrentPrcb();
      v63 = CurrentThread->WaitIrql;
      v141[0] = 0LL;
      if ( (unsigned __int8)v63 >= 2u )
      {
        if ( v62->NextThread && !v62->DpcRoutineActive )
        {
          LOBYTE(v15) = 2;
          KiRequestSoftwareInterrupt(v62, v15);
        }
      }
      else
      {
        v64 = (ULONG_PTR)v62->CurrentThread;
        if ( v62->NextThread )
        {
          KiAbProcessContextSwitch(v62->CurrentThread, 0LL);
          KiAcquirePrcbLocksForIsolationUnit((__int64)v62, 0, v141);
          NextThread = v62->NextThread;
          v62->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation(v62, v64, 0LL, 1LL);
          v66 = KeGetCurrentPrcb();
          v67 = (signed __int32 *)v66->SchedulerAssist;
          if ( v67 )
          {
            _m_prefetchw(v67);
            v68 = *v67;
            do
            {
              v69 = v68;
              v68 = _InterlockedCompareExchange(v67, v68 & 0xFFDFFFFF, v68);
            }
            while ( v69 != v68 );
            if ( (v68 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v66);
          }
          _enable();
          v62->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
            NextThread->ReadyTime = NextThread->ReadyTime
                                  - NextThread->WaitBlock[2].SpareLong
                                  + MEMORY[0xFFFFF78000000320];
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(v64 + 643) = 32;
          *(_BYTE *)(v64 + 390) = v63;
          KiQueueReadyThread((__int64)v62, v141, v64);
          if ( (unsigned __int8)KiSwapContext(v64, NextThread, (unsigned __int8)v63) )
          {
            if ( (_DWORD)KiIrqlFlags )
            {
              v70 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v70 - 2) <= 0xDu )
              {
                v71 = KeGetCurrentPrcb();
                v72 = v71->SchedulerAssist;
                v32 = (v72[5] & 0xFFFF0003) == 0;
                v72[5] &= 0xFFFF0003;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v71);
              }
            }
            __writecr8(1uLL);
            *(_DWORD *)(v64 + 116) &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
          v7 = v118;
        }
        else if ( (*(_DWORD *)(v64 + 116) & 0x40) != 0 )
        {
          if ( (_DWORD)KiIrqlFlags )
          {
            v79 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v79 - 2) <= 0xDu )
            {
              v80 = KeGetCurrentPrcb();
              v81 = v80->SchedulerAssist;
              v32 = (v81[5] & 0xFFFF0003) == 0;
              v81[5] &= 0xFFFF0003;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v80);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v64 + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
        }
        if ( (_DWORD)KiIrqlFlags )
        {
          v73 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v73 - 2) <= 0xDu )
          {
            v74 = KeGetCurrentPrcb();
            v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
            v76 = v74->SchedulerAssist;
            v32 = (v75 & v76[5]) == 0;
            v76[5] &= v75;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v74);
          }
        }
        __writecr8(v63);
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        EtwTraceDequeueWork(CurrentThread, v7, 1LL);
        return 1;
      }
      return v16;
    }
  }
  while ( 2 )
  {
    v60 = CurrentThread->WaitIrql;
    v61 = v125;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v11;
      if ( v8 )
        CurrentThread->MiscFlags |= 0x10u;
      v129 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v129);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v60 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( (_DWORD)KiIrqlFlags )
      {
        v82 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v82 - 2) <= 0xDu )
        {
          v83 = KeGetCurrentPrcb();
          v84 = v83->SchedulerAssist;
          v32 = (v84[5] & 0xFFFF0003) == 0;
          v84[5] &= 0xFFFF0003;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v83);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      Blink = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)Blink <= 0xFu )
      {
        v85 = KeGetCurrentPrcb()->SchedulerAssist;
        v86 = v85[5];
        if ( (_BYTE)Blink != 2 )
        {
          Blink = (unsigned int)(unsigned __int8)Blink + 1;
          *(_QWORD *)&Alertable = (-1 << Blink) & 4 | v86;
          v85[5] = Alertable;
          goto LABEL_181;
        }
        *(_QWORD *)&Alertable = v61 | v86;
        v85[5] = Alertable;
        CurrentThread->WaitIrql = 0;
      }
      else
      {
LABEL_181:
        CurrentThread->WaitIrql = 0;
      }
    }
    v87 = BugCheckParameter2;
    if ( v8 )
    {
      if ( CurrentThread->Alerted[v11] )
      {
        v88 = 257;
        CurrentThread->Alerted[v11] = 0;
        v89 = 257LL;
      }
      else if ( !(_BYTE)v11
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          v88 = 257;
          CurrentThread->Alerted[0] = 0;
          v89 = 257LL;
        }
        else
        {
          Blink = 0LL;
          v88 = 0;
          v89 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v88 = 192;
        v89 = 192LL;
      }
      if ( !v88 )
      {
LABEL_192:
        CurrentThread->WaitBlockFill6[68] = 5;
        LODWORD(v89) = 0;
        CurrentThread->WaitReason = 15;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_193;
      }
    }
    else
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !(_BYTE)v11 )
        goto LABEL_192;
      v89 = 192LL;
    }
    CurrentThread->ThreadLock = 0LL;
    KiCheckForThreadDispatch(KeGetCurrentPrcb(), v60, Alertable);
    if ( v89 )
    {
      v102 = v118;
      *v118 = (PLIST_ENTRY)v89;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, v102, 1LL);
      return v16;
    }
LABEL_193:
    if ( (_DISPATCHER_HEADER *volatile)v87 != CurrentThread->Queue )
      KiSwitchQueue(CurrentThread, v87);
    v90 = &CurrentThread->320;
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].Object = (PVOID)v87;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    if ( _interlockedbittestandset((volatile signed __int32 *)v87, 7u) )
    {
      do
      {
        LODWORD(v89) = v89 + 1;
        if ( ((unsigned int)v89 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Blink) )
        {
          HvlNotifyLongSpinWait((unsigned int)v89);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v87 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v87, 7u) );
    }
    if ( *(_DWORD *)(v87 + 4)
      && *(_DWORD *)(v87 + 40) <= *(_DWORD *)(v87 + 44)
      && (v91 = KiAttemptFastRemoveQueue(v87)) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v87, 0xFFFFFF7F);
      v103 = v118;
    }
    else
    {
      if ( (*(_BYTE *)(v87 + 1) & 1) != 0 )
      {
        if ( CurrentThread->Queue )
        {
          v112 = CurrentThread->QueueListEntry.Flink;
          v113 = CurrentThread->QueueListEntry.Blink;
          if ( v112->Blink != &CurrentThread->QueueListEntry || v113->Flink != &CurrentThread->QueueListEntry )
            goto LABEL_274;
          v113->Flink = v112;
          v112->Blink = v113;
          CurrentThread->Queue = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v87, 0xFFFFFF7F);
        v114 = v118;
        *v118 = (PLIST_ENTRY)128;
        v103 = v114;
      }
      else
      {
        v92 = QuadPart;
        v93 = v120;
        v94 = QuadPart;
        if ( v120 == 2 )
        {
          ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
          v96 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
          v94 = QuadPart;
          if ( CurrentThread->WaitMode
            && !CurrentThread->WaitBlock[3].SpareLong
            && !CurrentThread->WaitIrql
            && !CurrentThread->ApcState.InProgressFlags
            && (_DWORD)ThreadTimerDelay )
          {
            v94 = QuadPart + ThreadTimerDelay;
          }
          v93 = v120;
LABEL_223:
          if ( v96 <= v94 )
          {
LABEL_224:
            _InterlockedDecrement((volatile signed __int32 *)(v87 + 40));
            v97 = (struct _LIST_ENTRY *)(v87 + 8);
            v98 = *(struct _LIST_ENTRY **)(v87 + 8);
            if ( v98->Blink == (struct _LIST_ENTRY *)(v87 + 8) )
            {
              v90->WaitBlock[0].WaitListEntry.Flink = v98;
              CurrentThread->WaitBlock[0].WaitListEntry.Blink = v97;
              v98->Blink = (struct _LIST_ENTRY *)v90;
              v97->Flink = (struct _LIST_ENTRY *)v90;
              _InterlockedAnd((volatile signed __int32 *)v87, 0xFFFFFF7F);
              CurrentThread->WaitBlockCount = 1;
              v99 = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, v93, v92, 0LL);
              CurrentThread->WaitReason = 0;
              Blink = (__int64)v99;
              if ( v99 == (struct _KPRCB *)256 )
              {
                *(_QWORD *)&Alertable = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && Alertable <= 0xFu )
                {
                  v100 = KeGetCurrentPrcb()->SchedulerAssist;
                  if ( Alertable == 2 )
                  {
                    LODWORD(v101) = v125;
                  }
                  else
                  {
                    Blink = (unsigned int)Alertable + 1;
                    v101 = (-1LL << (Alertable + 1)) & 4;
                  }
                  v100[5] |= v101;
                }
                v8 = v116;
                CurrentThread->WaitIrql = Alertable;
                continue;
              }
              v104 = v118;
              *v118 = (PLIST_ENTRY)v99;
              if ( Count > 1
                && v99 != (struct _KPRCB *)128
                && (unsigned __int64)&v99[-1].PrcbPad141[487] + 7 > 1
                && v99 != (struct _KPRCB *)192
                && *(_DWORD *)(v87 + 4) )
              {
                v105 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v105 <= 0xFu )
                {
                  v106 = KeGetCurrentPrcb()->SchedulerAssist;
                  if ( v105 == 2 )
                    LODWORD(v107) = v125;
                  else
                    v107 = (-1LL << (v105 + 1)) & 4;
                  v106[5] |= v107;
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v87);
                if ( *(_DWORD *)(v87 + 4) )
                  v16 = KiAttemptFastRemoveQueue(v87) + 1;
                _InterlockedAnd((volatile signed __int32 *)v87, 0xFFFFFF7F);
                if ( (_DWORD)KiIrqlFlags )
                {
                  v108 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v108 <= 0xFu && v105 <= 0xFu && v108 >= 2u )
                  {
                    v109 = KeGetCurrentPrcb();
                    v110 = v109->SchedulerAssist;
                    v111 = ~(unsigned __int16)(-1LL << (v105 + 1));
                    v32 = (v111 & v110[5]) == 0;
                    v110[5] &= v111;
                    if ( v32 )
                      KiRemoveSystemWorkPriorityKick(v109);
                  }
                }
                __writecr8(v105);
              }
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                EtwTraceDequeueWork(CurrentThread, v104, v16);
                return v16;
              }
              return v16;
            }
LABEL_274:
            __fastfail(3u);
          }
        }
        else
        {
          if ( !v120 )
            goto LABEL_224;
          if ( QuadPart )
          {
            v96 = MEMORY[0xFFFFF78000000014];
            goto LABEL_223;
          }
        }
        _InterlockedAnd((volatile signed __int32 *)v87, 0xFFFFFF7F);
        v103 = v118;
        *v118 = (PLIST_ENTRY)258;
      }
      v91 = 1;
    }
    break;
  }
  CurrentThread->WaitReason = 0;
  v115 = KeGetCurrentPrcb();
  if ( v115->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)v115, 1u, 0, 2u);
  KiFastExitThreadWait(v115, CurrentThread, 1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTraceDequeueWork(CurrentThread, v103, v91);
  return v91;
}
