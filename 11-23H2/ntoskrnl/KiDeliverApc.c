/*
 * XREFs of KiDeliverApc @ 0x14030FB20
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KeRemovePriQueue @ 0x1402BF340 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1402C1BA0 (KiBeginThreadWait.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KiContinueEx @ 0x14030D1A0 (KiContinueEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KiApcInterrupt @ 0x140424AD0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KeTestAlertThread @ 0x14030D370 (KeTestAlertThread.c)
 *     KiInitializeUserApc @ 0x14030F468 (KiInitializeUserApc.c)
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v5; // zf
  _KTRAP_FRAME *TrapFrame; // r15
  ULONG_PTR Process; // r12
  __int64 v8; // r10
  $C71981A45BEB2B45F82C232A7085991E *v9; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v12; // rsi
  struct _LIST_ENTRY *v13; // r13
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  ULONG_PTR v16; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  struct _LIST_ENTRY *v19; // rcx
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // r13
  struct _LIST_ENTRY *v22; // rdi
  unsigned __int8 v23; // cl
  unsigned __int8 UserApcPendingAll; // si
  struct _LIST_ENTRY *v25; // rcx
  __int64 (__fastcall *v26)(int, int, int, int, __int64); // rdx
  int v27; // r8d
  struct _LIST_ENTRY *v28; // rdx
  struct _LIST_ENTRY *v29; // rax
  unsigned __int8 v30; // al
  unsigned int v31; // eax
  _DWORD *v32; // r8
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  unsigned __int8 v42; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v44; // rdx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  unsigned __int8 v48; // al
  struct _LIST_ENTRY *v49; // rcx
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  signed __int32 v53[8]; // [rsp+0h] [rbp-59h] BYREF
  int v54; // [rsp+40h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v55; // [rsp+48h] [rbp-11h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+50h] [rbp-9h] BYREF
  struct _LIST_ENTRY *v57; // [rsp+58h] [rbp-1h] BYREF
  __int64 v58[3]; // [rsp+60h] [rbp+7h] BYREF
  int v61; // [rsp+D0h] [rbp+77h]
  int v62; // [rsp+D8h] [rbp+7Fh] BYREF

  v58[0] = 0LL;
  v55 = 0LL;
  v57 = 0LL;
  Blink = 0LL;
  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = (_KTRAP_FRAME *)a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v5 )
  {
    _InterlockedOr(v53, 0);
    LODWORD(v8) = 4;
    v9 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v9->ApcState.ApcListHead[0].Flink == v9 )
        goto LABEL_15;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v18) = 4;
        else
          v18 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v18;
      }
      v62 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v62);
        while ( CurrentThread->ThreadLock );
      }
      Flink = v9->ApcState.ApcListHead[0].Flink;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v9->ApcState.ApcListHead[0].Flink == v9 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v13 = Flink[1].Flink;
      v55 = Flink[2].Flink;
      v58[0] = (__int64)Flink[2].Blink;
      v57 = Flink[3].Flink;
      Blink = Flink[3].Blink;
      if ( v55 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          CurrentThread->ThreadLock = 0LL;
          if ( (_DWORD)KiIrqlFlags )
          {
            v42 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v42 - 2) <= 0xDu )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v44 = CurrentPrcb->SchedulerAssist;
              v5 = (v44[5] & 0xFFFF0003) == 0;
              v44[5] &= 0xFFFF0003;
              if ( v5 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(1uLL);
          goto LABEL_16;
        }
        v19 = Flink->Flink;
        v20 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v20->Flink != Flink )
          goto LABEL_95;
        v20->Flink = v19;
        v19->Blink = v20;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        if ( (_DWORD)KiIrqlFlags )
        {
          v36 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v36 - 2) <= 0xDu )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v5 = (v38[5] & 0xFFFF0003) == 0;
            v38[5] &= 0xFFFF0003;
            if ( v5 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, __int64 *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          v12,
          &v55,
          v58,
          &v57,
          &Blink);
        if ( v55 )
        {
          if ( (_DWORD)KiIrqlFlags )
          {
            v39 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v39 - 2) <= 0xDu )
            {
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              v5 = (v41[5] & 0xFFFF0001) == 0;
              v41[5] &= 0xFFFF0001;
              if ( v5 )
                KiRemoveSystemWorkPriorityKick(v40);
            }
          }
          __writecr8(0LL);
          ((void (__fastcall *)(__int64, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v55)(v58[0], v57, Blink);
          KeGetCurrentIrql();
          __writecr8(1uLL);
        }
        LODWORD(v8) = 4;
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v14 = Flink->Flink;
        v15 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v15->Flink != Flink )
          goto LABEL_95;
        v15->Flink = v14;
        v14->Blink = v15;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        if ( (_DWORD)KiIrqlFlags )
        {
          v33 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v33 - 2) <= 0xDu )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v5 = (v35[5] & 0xFFFF0003) == 0;
            v35[5] &= 0xFFFF0003;
            if ( v5 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, __int64 *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          v12,
          &v55,
          v58,
          &v57,
          &Blink);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
        LODWORD(v8) = 4;
      }
    }
    CurrentThread->ThreadLock = 0LL;
    if ( (_DWORD)KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v45 - 2) <= 0xDu )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v5 = (v47[5] & 0xFFFF0003) == 0;
        v47[5] &= 0xFFFF0003;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    __writecr8(1uLL);
    LODWORD(v8) = 4;
LABEL_15:
    if ( a1 == 1 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      v21 = 0LL;
      v55 = 0LL;
      v58[0] = 0LL;
      v22 = 0LL;
      v57 = 0LL;
      Blink = 0LL;
      v61 = 0;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
      {
        v32 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v23 != 2 )
          v8 = (-1LL << (v23 + 1)) & 4;
        v32[5] |= v8;
      }
      v54 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v54);
        while ( CurrentThread->ThreadLock );
      }
      UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
      v25 = CurrentThread->ApcState.ApcListHead[1].Flink;
      if ( v25 != (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
      {
        while ( 1 )
        {
          v22 = v25 - 1;
          _m_prefetchw(&v25[-1]);
          v26 = (__int64 (__fastcall *)(int, int, int, int, __int64))v25[1].Flink;
          if ( v26 == KeSpecialUserApcKernelRoutine )
            break;
          if ( (UserApcPendingAll & 2) != 0 )
          {
            if ( v26 != KeSpecialUserApcKernelRoutine )
            {
              v27 = 0;
              goto LABEL_44;
            }
            break;
          }
          v25 = v25->Flink;
          v22 = 0LL;
          if ( v25 == (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
            goto LABEL_49;
        }
        v27 = 2;
        v61 = 2;
LABEL_44:
        if ( (BYTE1(v22->Flink) & 1) != 0 )
          v61 = v27 | 4;
        v21 = v25[1].Flink;
        v55 = v22[3].Flink;
        v58[0] = (__int64)v22[3].Blink;
        v57 = v22[4].Flink;
        Blink = v22[4].Blink;
        v28 = v25->Flink;
        v29 = v25->Blink;
        if ( v25->Flink->Blink != v25 || v29->Flink != v25 )
LABEL_95:
          __fastfail(3u);
        v29->Flink = v28;
        v28->Blink = v29;
        BYTE2(v22[5].Flink) = 0;
        v30 = CurrentThread->ApcState.UserApcPendingAll;
        if ( (v30 & 1) != 0 )
        {
          v48 = v30 & 0xFE;
          CurrentThread->ApcState.UserApcPendingAll = v48;
          v49 = CurrentThread->ApcState.ApcListHead[1].Flink;
          if ( v49 != (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
          {
            while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v49[1].Flink != KeSpecialUserApcKernelRoutine )
            {
              v49 = v49->Flink;
              if ( v49 == (struct _LIST_ENTRY *)&CurrentThread->ApcStateFill[16] )
                goto LABEL_49;
            }
            CurrentThread->ApcState.UserApcPendingAll = v48 | 1;
          }
        }
      }
LABEL_49:
      CurrentThread->ThreadLock = 0LL;
      if ( (_DWORD)KiIrqlFlags )
      {
        v50 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v50 - 2) <= 0xDu )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v5 = (v52[5] & 0xFFFF0003) == 0;
          v52[5] &= 0xFFFF0003;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
      __writecr8(1uLL);
      if ( v22 )
      {
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, __int64 *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v21)(
          v22,
          &v55,
          v58,
          &v57,
          &Blink);
        if ( (UserApcPendingAll & 2) != 0 )
        {
          if ( !v55 )
          {
            KeTestAlertThread(1);
            goto LABEL_16;
          }
          v31 = v61 | 1;
        }
        else
        {
          v31 = v61;
        }
        KiInitializeUserApc(a2, a3, (__int64)v55, v58[0], (__int64)v57, (__int64)Blink, v31);
      }
    }
  }
LABEL_16:
  v16 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v16 != Process )
    KeBugCheckEx(5u, Process, v16, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
