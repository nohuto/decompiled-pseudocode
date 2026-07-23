/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1402C7030
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     KeCheckProcessorAffinityEx @ 0x140257240 (KeCheckProcessorAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFCC0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402C1C34 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockTimer @ 0x1402C2568 (KiSetClockTimer.c)
 *     KiSetPendingTick @ 0x1402C2830 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiRestoreClockTickRate @ 0x140340810 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x140347170 (KiEventClockStateChange.c)
 *     KiSendClockInterruptToClockOwner @ 0x140364A68 (KiSendClockInterruptToClockOwner.c)
 *     KiUpdateTimeAssist @ 0x1403CF158 (KiUpdateTimeAssist.c)
 *     KiGetPendingTick @ 0x1403D42D8 (KiGetPendingTick.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056F480 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14056FCFC (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x14057D1DC (KiResetForceIdle.c)
 *     KiGetPastDueIRTimerInfo @ 0x14057D5E4 (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x14060BA54 (ExRecordOneTimerExpiry.c)
 */

void __fastcall KeResumeClockTimerFromIdle(_DWORD *a1, volatile signed __int32 *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int32 v4; // eax
  __int64 v5; // r14
  int *p_Number; // rsi
  __int64 v7; // rax
  LONGLONG ClockOwner; // rcx
  __int64 *v9; // r8
  char v10; // di
  struct _KPRCB *v11; // rax
  unsigned __int8 v12; // si
  LARGE_INTEGER InterruptTimePrecise; // rdi
  unsigned __int64 v14; // r12
  char v15; // r13
  int FirstSetRightAffinity; // r13d
  int v17; // ecx
  __int32 v18; // edi
  __int64 *v19; // r9
  __int64 v20; // rcx
  __int64 *v21; // r8
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  _BOOL8 v30; // rcx
  _DWORD *v31; // r8
  struct _KPRCB *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int8 v35; // [rsp+39h] [rbp-48h] BYREF
  char v36; // [rsp+3Ah] [rbp-47h] BYREF
  __int64 v37; // [rsp+40h] [rbp-41h] BYREF
  __int64 v38; // [rsp+48h] [rbp-39h] BYREF
  __int64 v39; // [rsp+50h] [rbp-31h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-29h] BYREF
  __int128 v41; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-11h] BYREF
  char v43[32]; // [rsp+80h] [rbp-1h] BYREF
  char *v44; // [rsp+A0h] [rbp+1Fh]
  __int64 v45; // [rsp+A8h] [rbp+27h]

  v38 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v35 = 0;
  v34 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v4 = KiClockState;
    LODWORD(v5) = 0x8000;
    if ( KiClockState == 1 )
    {
      v4 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v4 == 1 )
        break;
    }
    if ( v4 != 3 )
    {
      p_Number = (int *)&CurrentPrcb->Number;
      goto LABEL_7;
    }
    _mm_pause();
  }
  LOBYTE(a2) = 1;
  KiUpdateTimeAssist(0LL, a2, &v37, &PerformanceCounter);
  KiClockTimerOneShotEndTime = v37;
  if ( KeMinimumIncrement - 1 + (int)v37 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v37;
  v14 = v37;
  if ( (int)v37 - (int)KiLastPseudoHrTimerExpiration + KeMinimumIncrement - 1 >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v37;
  p_Number = (int *)&CurrentPrcb->Number;
  v15 = off_140C01CA8[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 )
    {
      if ( (_DWORD)KiClockTimerOwner == CurrentPrcb->Number )
      {
        p_Number = (int *)&CurrentPrcb->Number;
        if ( v14 >= KiClockTimerNextTickTime )
        {
          p_Number = (int *)&CurrentPrcb->Number;
          if ( v15 )
          {
            p_Number = (int *)&CurrentPrcb->Number;
            *a1 = v14 - KiClockTimerNextTickTime;
          }
        }
      }
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && (_DWORD)KiClockTimerOwner == *p_Number
    && v14 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_140C01CA8[0]() )
  {
    *a1 = v14 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v14 - KiClockTimerOneShotStartTime < qword_140C41BC8 )
    qword_140C41BC8 = v14 - KiClockTimerOneShotStartTime;
  if ( v14 - KiClockTimerOneShotStartTime > qword_140C41BC0 )
    qword_140C41BC0 = v14 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v15 && (unsigned int)KiGetPastDueIRTimerInfo(v14, &v35, &v34) )
      ExRecordOneTimerExpiry(v35, v34);
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v14);
    KiConsiderTimerRebasing = 0;
  }
  if ( !KiClockTimerPerCpu
    || (KeQuerySystemAllowedCpuSetAffinity(KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion),
        FirstSetRightAffinity = *p_Number,
        !(unsigned int)KeCheckProcessorAffinityEx(KiClockOwnerAllowedCpuSet, *p_Number))
    && (FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&KiIntSteerMask), FirstSetRightAffinity == -1) )
  {
    FirstSetRightAffinity = *p_Number;
  }
  v17 = *p_Number;
  if ( *p_Number == FirstSetRightAffinity )
  {
    if ( v14 + (unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = v17;
        if ( !(unsigned __int8)KiGetPendingTick() )
          off_140C01C90[0]();
      }
      if ( KiClockTimerPerCpuTickScheduling && CurrentPrcb->ClockOwner )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v24) = 0x8000;
          else
            v24 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          v14 = v37;
          SchedulerAssist[5] |= v24;
        }
        KiSetClockTimer((__int64)CurrentPrcb, -(__int64)KeMaximumIncrement, KeMinimumIncrement, 3, 1, 0);
        KiSetClockTimerKTimerDeadlines((int)CurrentPrcb, 1);
        if ( (_DWORD)KiIrqlFlags )
        {
          v25 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v29 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(v26);
            v14 = v37;
          }
        }
        __writecr8(CurrentIrql);
      }
      v18 = 0;
      KiRestoreClockTickRate(v14, &v39, &v38);
      v19 = &v39;
      v21 = &v38;
      KiClockTimerNextTickTime = v14 + (unsigned int)KeTimeIncrement;
      v20 = 0LL;
    }
    else
    {
      ++qword_140C41BB8;
      v18 = 2;
      v19 = 0LL;
      v20 = 2LL;
      v21 = 0LL;
    }
    KiEventClockStateChange(v20, 1LL, v21, v19);
  }
  else
  {
    ++qword_140C41BB8;
    v18 = 2;
    KiEventClockStateChange(2LL, 1LL, 0LL, 0LL);
    LODWORD(KiClockTimerOwner) = FirstSetRightAffinity;
    KiSendClockInterruptToClockOwner();
  }
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v30 = (unsigned __int8)off_140C01CA8[0]() == 0;
    KiResetForceIdle(v30, 0LL);
  }
  v41 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    DWORD2(v41) = KiClockTimerOwner;
    v42[0] = &v41;
    *(_QWORD *)&v41 = v14;
    v42[1] = 16LL;
    EtwTraceKernelEvent((int)v42, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v18);
LABEL_7:
  v7 = (unsigned int)*p_Number;
  if ( (_DWORD)KiClockTimerOwner == (_DWORD)v7 && !CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 1;
  ClockOwner = CurrentPrcb->ClockOwner;
  v9 = KiProcessorBlock;
  if ( !(_BYTE)ClockOwner )
  {
    a2 = *(volatile signed __int32 **)(KiProcessorBlock[v7] + 35000);
    if ( a2 )
    {
      _InterlockedAnd(a2, 0xFFF7FFFF);
      ClockOwner = CurrentPrcb->ClockOwner;
    }
  }
  v10 = 0;
  if ( KiClockTimerPerCpu )
    v11 = KeGetCurrentPrcb();
  else
    v11 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  if ( (v11->PendingTickFlags & 1) != 0 )
    goto LABEL_20;
  if ( (_BYTE)ClockOwner || KiClockTimerPerCpuTickScheduling )
  {
    ((void (__fastcall *)(LONGLONG, volatile signed __int32 *, __int64 *))off_140C01C90[0])(
      ClockOwner,
      a2,
      KiProcessorBlock);
    v10 = 1;
LABEL_20:
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( (unsigned int)dword_140C02F60 > 5 )
      {
        v36 = v10;
        v44 = &v36;
        v45 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F60, word_14002D2F2, 0LL, 0LL, 3, v43);
      }
      v12 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
      {
        v31 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v12 != 15 )
          v5 = (-1LL << (v12 + 1)) & 0xFFFC;
        v31[5] |= v5;
      }
      KiSetClockTimer((__int64)CurrentPrcb, -(__int64)KeMaximumIncrement, KeMinimumIncrement, 3, 1, 0);
      a2 = (volatile signed __int32 *)CurrentPrcb->ClockOwner;
      if ( (_BYTE)a2 || !KiSerializeTimerExpiration )
        KiSetClockTimerKTimerDeadlines((int)CurrentPrcb, (char)a2);
      if ( (_DWORD)KiIrqlFlags )
      {
        ClockOwner = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && (unsigned __int8)ClockOwner <= 0xFu
          && v12 <= 0xFu
          && (unsigned __int8)ClockOwner >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          ClockOwner = (unsigned int)v12 + 1;
          v9 = (__int64 *)v32->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v29 = (v33 & *((_DWORD *)v9 + 5)) == 0;
          a2 = (volatile signed __int32 *)((unsigned int)v33 & *((_DWORD *)v9 + 5));
          *((_DWORD *)v9 + 5) = (_DWORD)a2;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      __writecr8(v12);
      if ( v10 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))KiRestoreClockTickRate)(
          (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
          &v39,
          &v38);
        if ( CurrentPrcb->ClockOwner )
        {
          ClockOwner = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
          KiClockTimerNextTickTime = ClockOwner;
        }
      }
    }
  }
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 && !KiClockTimerPerCpuTickScheduling )
  {
    ((void (__fastcall *)(LONGLONG, volatile signed __int32 *, __int64 *))off_140C01C98[0])(ClockOwner, a2, v9);
    KiSetPendingTick(0);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
}
