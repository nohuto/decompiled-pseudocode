/*
 * XREFs of KePulseEvent @ 0x1402206C0
 * Callers:
 *     MiWorkingSetManager @ 0x14021D610 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x1402AEEA0 (MmResourcesAvailable.c)
 *     KeBalanceSetManager @ 0x140392980 (KeBalanceSetManager.c)
 *     DifKePulseEventWrapper @ 0x1405E4180 (DifKePulseEventWrapper.c)
 *     MiPulseLowAvailableEvent @ 0x140653890 (MiPulseLowAvailableEvent.c)
 *     MiPulseCommitSignal @ 0x1406564E4 (MiPulseCommitSignal.c)
 *     NtPulseEvent @ 0x1406B2610 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x140A2B738 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140238CB0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     KiWakeQueueWaiter @ 0x1402B8750 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AAB8 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056EE70 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD9C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char v4; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  LIST_ENTRY *p_WaitListHead; // r12
  struct _LIST_ENTRY *Flink; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  struct _LIST_ENTRY *v12; // rbx
  char v13; // al
  __int64 v14; // r8
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *v16; // rbx
  struct _LIST_ENTRY *v17; // rcx
  char v18; // al
  bool v19; // zf
  struct _LIST_ENTRY *v20; // rdi
  struct _LIST_ENTRY **v21; // r15
  unsigned __int8 v22; // cl
  _DWORD *v23; // r9
  __int64 v24; // rdx
  struct _KPRCB *v25; // r14
  _KTHREAD *v26; // rbp
  __int64 v27; // r8
  int v28; // r8d
  struct _LIST_ENTRY *v29; // rdx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY **p_Blink; // r15
  unsigned __int8 v32; // cl
  _DWORD *v33; // r9
  __int64 v34; // rdx
  struct _KPRCB *v35; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v37; // r8
  int Flink_high; // r8d
  struct _LIST_ENTRY *v39; // rdx
  char v40; // [rsp+30h] [rbp-58h]
  LONG SignalState; // [rsp+90h] [rbp+8h]
  struct _KPRCB *v44; // [rsp+A8h] [rbp+20h]

  v4 = Event->Header.Type & 0x7F;
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v44 = CurrentPrcb;
  KiAcquireKobjectLockSafe(Event);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v4 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
        {
          Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
          p_WaitListHead->Flink = p_WaitListHead;
          goto LABEL_6;
        }
        v12 = Flink;
        Flink = Flink->Flink;
        v13 = (char)v12[1].Flink;
        if ( v13 == 1 )
          break;
        if ( v13 == 2 )
        {
          BYTE1(v12[1].Flink) = 5;
          Blink = v12[1].Blink;
          v12->Flink = 0LL;
          p_Blink = &Blink->Blink;
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
          {
            v33 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v32 == 2 )
              LODWORD(v34) = 4;
            else
              v34 = (-1LL << (v32 + 1)) & 4;
            v33[5] |= v34;
          }
          v35 = KeGetCurrentPrcb();
          CurrentThread = v35->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v37) = KeIsThreadRunning(v35->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v12, v37);
          }
          KiAcquireKobjectLockSafe(Blink);
          if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
            || LODWORD(Blink[2].Blink) >= HIDWORD(Blink[2].Blink)
            || (struct _LIST_ENTRY *)CurrentThread->Queue == Blink && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v35, Blink, v12) )
          {
            Flink_high = HIDWORD(Blink->Flink);
            HIDWORD(Blink->Flink) = Flink_high + 1;
            v39 = Blink[2].Flink;
            if ( v39->Flink != (struct _LIST_ENTRY *)&Blink[1].Blink )
              goto LABEL_73;
            v12->Flink = (struct _LIST_ENTRY *)((char *)Blink + 24);
            v12->Blink = v39;
            v39->Flink = v12;
            Blink[2].Flink = v12;
            if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
              KiWakeOtherQueueWaiters(v35, Blink);
          }
          else
          {
            v12->Flink = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)Blink, 0xFFFFFF7F);
          CurrentPrcb = v44;
        }
        else if ( v13 == 4 )
        {
          BYTE1(v12[1].Flink) = 5;
          Event->Header.SignalState = 0;
          KiInsertQueueDpc((ULONG_PTR)v12[1].Blink, 0);
        }
        else
        {
          v14 = 256LL;
LABEL_13:
          KiTryUnwaitThread(CurrentPrcb, v12, v14, 0LL);
        }
      }
      v14 = WORD1(v12[1].Flink);
      goto LABEL_13;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
          goto LABEL_6;
        v15 = Flink->Flink;
        v16 = Flink;
        Flink = v15;
        v17 = v16->Blink;
        if ( v15->Blink != v16 || v17->Flink != v16 )
LABEL_73:
          __fastfail(3u);
        v17->Flink = v15;
        v15->Blink = v17;
        v18 = (char)v16[1].Flink;
        if ( v18 == 1 )
          break;
        if ( v18 == 2 )
        {
          BYTE1(v16[1].Flink) = 5;
          v20 = v16[1].Blink;
          v16->Flink = 0LL;
          v21 = &v20->Blink;
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
          {
            v23 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v22 == 2 )
              LODWORD(v24) = 4;
            else
              v24 = (-1LL << (v22 + 1)) & 4;
            v23[5] |= v24;
          }
          v25 = KeGetCurrentPrcb();
          v26 = v25->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v27) = KeIsThreadRunning(v25->CurrentThread);
            EtwTraceEnqueueWork(v26, v16, v27);
          }
          KiAcquireKobjectLockSafe(v20);
          if ( *v21 == (struct _LIST_ENTRY *)v21
            || LODWORD(v20[2].Blink) >= HIDWORD(v20[2].Blink)
            || (struct _LIST_ENTRY *)v26->Queue == v20 && v26->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v25, v20, v16) )
          {
            v28 = HIDWORD(v20->Flink);
            HIDWORD(v20->Flink) = v28 + 1;
            v29 = v20[2].Flink;
            if ( v29->Flink != (struct _LIST_ENTRY *)&v20[1].Blink )
              goto LABEL_73;
            v16->Flink = (struct _LIST_ENTRY *)((char *)v20 + 24);
            v16->Blink = v29;
            v29->Flink = v16;
            v20[2].Flink = v16;
            if ( !v28 && *v21 != (struct _LIST_ENTRY *)v21 )
              KiWakeOtherQueueWaiters(v25, v20);
          }
          else
          {
            v16->Flink = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          v19 = Event->Header.SignalState-- == 1;
          if ( v19 )
            goto LABEL_6;
          CurrentPrcb = v44;
        }
        else if ( v18 == 4 )
        {
          BYTE1(v16[1].Flink) = 5;
          Event->Header.SignalState = 0;
          KiInsertQueueDpc((ULONG_PTR)v16[1].Blink, 0);
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v16, 256LL, 0LL);
        }
      }
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, WORD1(v16[1].Flink), 0LL) )
      {
        v19 = Event->Header.SignalState-- == 1;
        if ( v19 )
          break;
      }
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)v44, Wait != 0 ? 3 : 0, 1, Increment, v40);
  return SignalState;
}
