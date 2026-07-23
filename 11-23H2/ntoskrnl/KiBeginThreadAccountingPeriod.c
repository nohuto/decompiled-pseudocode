/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x140309040
 * Callers:
 *     KiChainedDispatch @ 0x140420630 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140421000 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421880 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421CC0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404220F0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140426370 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404267C0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     SwapContext @ 0x140428750 (SwapContext.c)
 * Callees:
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14030932C (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14030934C (KiCheckForMaxOverQuotaScb.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403093B4 (KiInsertDeferredPreemptionApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140574630 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  __int64 v3; // r11
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r10
  __int64 Size; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  _BYTE *SchedulerAssist; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int v18; // eax
  __int64 v19; // rdx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v21; // rcx
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett

  v3 = a3;
  CurrentThread = a2;
  if ( a2 )
  {
    v6 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 33968);
    v9 = *(_QWORD *)(a1 + 33976);
    if ( v8 && v9 )
    {
      if ( *(_BYTE *)(v9 + 100) )
      {
        v10 = *(_DWORD *)(v9 + 116);
      }
      else
      {
        v10 = *(_DWORD *)(v9 + 72);
        if ( v10 >= *(_DWORD *)(v8 + 516) )
          v10 = *(_DWORD *)(v8 + 516);
      }
    }
    else
    {
      v10 = 100;
    }
    v11 = 0LL;
    v12 = (unsigned __int16 *)(a1 + 34154);
    do
    {
      if ( v10 <= *v12 )
        break;
      v11 = (unsigned int)(v11 + 1);
      ++v12;
    }
    while ( (unsigned int)v11 < 3 );
    if ( KeHeteroSystem )
      a3 = *(unsigned __int8 *)(a1 + 34056);
    else
      a3 = *(unsigned __int8 *)(a1 + 34059);
    a2 = (struct _KTHREAD *)(a1 + 8 * (((_BYTE)a3 != 0) + 2 * v11 + 4176));
    *(_QWORD *)&a2->Header.Lock += v3;
  }
  if ( (Size & 0x40) != 0 )
  {
    SchedulerAssist = CurrentThread->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[64] = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v6 )
  {
    if ( (Size & 0xB6) != 0 )
    {
      if ( CurrentThread->WaitBlock[0].SparePtr )
      {
        LOBYTE(a2) = 1;
        KiBeginCounterAccumulation(CurrentThread, a2, a3, Size);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        _m_prefetchw(v15);
        v16 = *v15;
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(v15, v16 & 0xFFDFFFFF, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      if ( (CurrentThread->Header.Size & 4) != 0 )
      {
        v18 = *(&CurrentThread->MiscFlags + 1);
        if ( (v18 & 0x800) != 0
          || (v18 & 0x400) == 0
          && (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(CurrentThread)
          && (SchedulingGroup = CurrentThread->SchedulingGroup) != 0LL
          && (v21 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216)) != 0LL
          && (unsigned __int8)KiCheckForMaxOverQuotaScb(v21, v19) )
        {
          LOBYTE(v15) = 1;
          KiInsertDeferredPreemptionApc(a1, CurrentThread, v15);
        }
      }
    }
    else
    {
      v22 = KeGetCurrentPrcb();
      v23 = (signed __int32 *)v22->SchedulerAssist;
      if ( v23 )
      {
        _m_prefetchw(v23);
        v24 = *v23;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange(v23, v24 & 0xFFDFFFFF, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
      _enable();
    }
    if ( KiHgsPlusEnabled )
    {
      CurrentThread->HgsFeedbackCycles = 0LL;
      CurrentThread->HgsFeedbackStartTime = __rdtsc();
    }
  }
  else if ( (Size & 2) != 0 )
  {
    KiBeginCounterAccumulation(CurrentThread, 0LL, a3, Size);
  }
}
