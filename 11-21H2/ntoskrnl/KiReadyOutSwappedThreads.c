/*
 * XREFs of KiReadyOutSwappedThreads @ 0x1402112F8
 * Callers:
 *     KiOutSwapProcesses @ 0x140210EA0 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 * Callees:
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14062E258 (EtwTraceReadyThread.c)
 */

char __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v4; // r15
  _QWORD *v5; // r14
  struct _KPRCB *v6; // rdi
  volatile signed __int32 *v7; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  _KTHREAD *CurrentThread; // rsi
  bool v14; // zf
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  struct _KPRCB *v19; // rdi
  _DWORD *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v25; // r8
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  _DWORD v31[8]; // [rsp+20h] [rbp-48h] BYREF
  int v32; // [rsp+70h] [rbp+8h] BYREF
  int v33; // [rsp+78h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v5 = a1;
  do
  {
    v6 = KeGetCurrentPrcb();
    v7 = (volatile signed __int32 *)(v5 - 27);
    v5 = (_QWORD *)*v5;
    v33 = 0;
    while ( 1 )
    {
      SchedulerAssist = v6->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v16 = SchedulerAssist[6];
          SchedulerAssist[6] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
      if ( !_interlockedbittestandset64(v7 + 16, 0LL) )
        break;
      v15 = v6->SchedulerAssist;
      if ( v15 )
      {
        if ( v6->NestingLevel <= 1u )
        {
          v17 = v15[6] - 1;
          v15[6] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
      do
        KeYieldProcessorEx(&v33);
      while ( *((_QWORD *)v7 + 8) );
    }
    KiEnterDeferredReadyState(v7);
    KiReleaseThreadLockSafe(v9);
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    {
      LOBYTE(v11) = *((_BYTE *)v7 + 567);
      LOBYTE(v10) = *((_BYTE *)v7 + 566);
      EtwTraceReadyThread(v7, v10, v11);
    }
    LOBYTE(v12) = KiInswapAndReadyThread(CurrentPrcb, v7);
  }
  while ( v5 != a1 );
  if ( (unsigned __int8)v4 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v12) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v12 )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v31[0] = 5;
          *(_OWORD *)&v31[1] = 0LL;
          LOBYTE(v12) = HalpInterruptSendIpi(v31, 47LL);
        }
      }
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v19 = KeGetCurrentPrcb();
      v32 = 0;
      while ( 1 )
      {
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v21 = v20[6];
            v20[6] = v21 + 1;
            if ( v21 == -1 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v22 = v19->SchedulerAssist;
        if ( v22 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v23 = v22[6] - 1;
            v22[6] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        do
          KeYieldProcessorEx(&v32);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v18) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, v18);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = v4;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v25) = v4;
      v14 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v25) == 0;
    }
    else
    {
      v14 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v14 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v14 = (v27[5] & 0xFFFF0003) == 0;
          v27[5] &= 0xFFFF0003;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    LOBYTE(v12) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v12) = KeGetCurrentIrql() - 2;
        if ( (unsigned __int8)v12 <= 0xDu )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v14 = (v12 & v29[5]) == 0;
          v29[5] &= v12;
          if ( v14 )
            LOBYTE(v12) = KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    __writecr8(v4);
  }
  return v12;
}
