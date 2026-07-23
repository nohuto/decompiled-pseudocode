/*
 * XREFs of KiHandleDeferredPreemption @ 0x140309458
 * Callers:
 *     KiSchedulerApc @ 0x14030ABF0 (KiSchedulerApc.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1402BC0A8 (KiAbProcessContextSwitch.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14030932C (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14030934C (KiCheckForMaxOverQuotaScb.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403097C4 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiHandleDeferredPreemption(ULONG_PTR a1)
{
  char v2; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // al
  _QWORD **v8; // rdi
  _KTHREAD *NextThread; // rdi
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  signed __int32 *v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  char v17; // r11
  unsigned __int8 *p_Level; // rsi
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // r11
  char v23; // r10
  unsigned int v24; // r10d
  __int64 *v25; // rcx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  _QWORD *v34; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v36[84]; // [rsp+38h] [rbp-D0h] BYREF

  memset(v36, 0, sizeof(v36));
  v2 = 0;
  v35 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v12) = 4;
    if ( CurrentIrql != 2 )
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
  KiAbProcessContextSwitch(a1, 0);
  KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v35);
  if ( !CurrentPrcb->NextThread )
  {
    v34 = 0LL;
    KiStartRescheduleContext((__int64)v36, &v35, 0LL);
    if ( KiIsThreadConstrainedBySchedulingGroup(a1) )
    {
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 )
      {
        v6 = CurrentPrcb->ScbOffset + v5;
        if ( v6 )
        {
          if ( KiCheckForMaxOverQuotaScb(v6) )
          {
            RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v36, (__int64)CurrentPrcb);
            KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v20, 0, 1);
            if ( (v23 & 2) != 0 )
            {
              LOBYTE(v21) = v36[0];
              v24 = 0;
              if ( LOBYTE(v36[0]) )
              {
                do
                {
                  v25 = (__int64 *)&v36[10 * v24 + 4];
                  if ( v25 != v22 )
                  {
                    KiAdjustRescheduleContextEntryForThreadRemoval(v25, v21, 0, 1);
                    LOBYTE(v21) = v36[0];
                  }
                  ++v24;
                }
                while ( v24 < (unsigned __int8)v21 );
              }
              v36[1] = 0;
            }
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(v36, (__int64)&v34);
    v7 = KiCommitRescheduleContext((unsigned __int8 *)v36, (__int64)CurrentPrcb, 0, &v34);
    v8 = (_QWORD **)v34;
    if ( v7 || v34 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v35);
      if ( v17 )
      {
        KiCompleteRescheduleContext(v36, (__int64)CurrentPrcb);
        p_Level = &CurrentPrcb->DeferredDispatchInterrupts.Level;
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
      }
      else
      {
        p_Level = &CurrentPrcb->DeferredDispatchInterrupts.Level;
      }
      if ( v8 )
      {
        v34 = *v8;
        do
        {
          KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v8 - 27), (__int64)&v34);
          v8 = (_QWORD **)v34;
          ++v2;
          if ( v34 )
            v34 = (_QWORD *)*v34;
          if ( (v2 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(p_Level);
        }
        while ( v8 );
        KiFlushSoftwareInterruptBatch(p_Level);
      }
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v35);
    }
  }
  KiDowngradeIsolationUnitLockHandle(&v35, 0LL);
  NextThread = CurrentPrcb->NextThread;
  if ( NextThread )
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL, 1u);
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
        KiRemoveSystemWorkPriorityKick(v13);
    }
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    if ( NextThread != CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) == 0 )
      __fastfail(0x21u);
    *(_BYTE *)(a1 + 643) = 38;
    *(_BYTE *)(a1 + 390) = 0;
    KiQueueReadyThread((__int64)CurrentPrcb, &v35, a1);
    if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v26 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v26 - 2) <= 0xDu )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = (v28[5] & 0xFFFF0003) == 0;
          v28[5] &= 0xFFFF0003;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(a1 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
  }
  else
  {
    KiReleasePrcbLocksForIsolationUnit(&v35);
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v29 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
