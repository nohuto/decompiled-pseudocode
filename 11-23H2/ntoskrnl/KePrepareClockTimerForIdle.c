/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1403475C4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KeIsForceIdleEngaged @ 0x1402501FC (KeIsForceIdleEngaged.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14027E280 (KiGetNextTimerExpirationDueTime.c)
 *     PoAllProcessorsDeepIdle @ 0x1402C1DB0 (PoAllProcessorsDeepIdle.c)
 *     KiSetPendingTick @ 0x1402C2AF0 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiCancelClockTimer @ 0x140340F00 (KiCancelClockTimer.c)
 *     KiEventClockStateChange @ 0x1403478F0 (KiEventClockStateChange.c)
 *     KiLogClockIncrementUpdate @ 0x1403D03B8 (KiLogClockIncrementUpdate.c)
 *     KiClockTimerOneShotReady @ 0x1403D08BC (KiClockTimerOneShotReady.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char __fastcall KePrepareClockTimerForIdle(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5,
        _QWORD *a6)
{
  int v6; // edi
  LARGE_INTEGER v8; // rax
  unsigned __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int32 v12; // esi
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  LARGE_INTEGER InterruptTimePrecise; // r15
  unsigned __int64 v16; // rbx
  bool v17; // zf
  bool v18; // cf
  bool v19; // r9
  __int64 *v20; // rdx
  __int64 v21; // r8
  volatile signed __int32 *v22; // rcx
  __int64 v25; // [rsp+48h] [rbp-91h] BYREF
  int v26; // [rsp+50h] [rbp-89h] BYREF
  int v27; // [rsp+54h] [rbp-85h] BYREF
  int v28; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-71h] BYREF
  int v31; // [rsp+70h] [rbp-69h] BYREF
  __int64 v32; // [rsp+78h] [rbp-61h]
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-59h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp-51h]
  int *v35; // [rsp+90h] [rbp-49h] BYREF
  int v36; // [rsp+98h] [rbp-41h]
  int v37; // [rsp+9Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A0h] [rbp-39h] BYREF
  int *v39; // [rsp+C0h] [rbp-19h]
  int v40; // [rsp+C8h] [rbp-11h]
  int v41; // [rsp+CCh] [rbp-Dh]
  int *v42; // [rsp+D0h] [rbp-9h]
  int v43; // [rsp+D8h] [rbp-1h]
  int v44; // [rsp+DCh] [rbp+3h]

  v25 = 0LL;
  v6 = 0;
  v30 = 0LL;
  LOBYTE(v8.LowPart) = a5;
  v9 = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 4;
  v32 = a5;
  v34 = a6;
  if ( !KiDynamicTickInitialized || (_BYTE)KiDynamicTickDisableReason )
    goto LABEL_5;
  LOBYTE(v8.LowPart) = KiLastRequestedTimeIncrement;
  if ( a3 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
LABEL_4:
    v6 = 2;
    goto LABEL_5;
  }
  if ( a3 > KiMaxDynamicTickDuration )
  {
    ++dword_140C41B2C;
    v9 = KiMaxDynamicTickDuration;
  }
  v12 = _InterlockedExchange(&KiClockState, 3);
  LOBYTE(v8.LowPart) = PoAllProcessorsDeepIdle();
  if ( !LOBYTE(v8.LowPart) )
  {
    v6 = 1;
    goto LABEL_5;
  }
  if ( !a1 )
  {
    LOBYTE(v8.LowPart) = KeIsForceIdleEngaged();
    if ( LOBYTE(v8.LowPart) )
    {
      v6 = 6;
      goto LABEL_5;
    }
  }
  v13 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, 1u, MEMORY[0xFFFFF78000000008], a1, a2, &v30, &v31, v32);
  v14 = v30;
  if ( a4 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  else
  {
    v8.QuadPart = v13 + (unsigned int)KiLastRequestedTimeIncrement;
    if ( v30 <= v8.QuadPart )
      goto LABEL_4;
    if ( !a1 )
    {
      LOBYTE(v8.LowPart) = KiClockTimerOneShotReady(v13);
      if ( !LOBYTE(v8.LowPart) )
      {
        v6 = 3;
        goto LABEL_5;
      }
    }
    v8 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    InterruptTimePrecise = v8;
    if ( v14 <= v8.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      goto LABEL_47;
  }
  v8.QuadPart = InterruptTimePrecise.QuadPart + (unsigned int)KiMinDynamicTickDuration;
  if ( v14 <= v8.QuadPart )
  {
LABEL_47:
    v6 = 4;
    goto LABEL_5;
  }
  v16 = v14 - InterruptTimePrecise.QuadPart;
  if ( v16 > v9 )
    v16 = v9;
  v29 = v16;
  if ( a4 )
  {
    if ( !a1 )
    {
      v16 = v29;
      if ( v29 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      {
        v16 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
        v29 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
      }
    }
  }
  ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_140C01CA0[0])(1LL, v16, &v25);
  KiLogClockIncrementUpdate((_DWORD)CurrentPrcb, InterruptTimePrecise.LowPart, v16, v25, 1);
  KiSetPendingTick(1);
  KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
  KiEventClockStateChange(1LL, v12, &v25, &v29);
  if ( (unsigned int)dword_140C02F60 > 5 )
  {
    v41 = 0;
    v44 = 0;
    v39 = &v26;
    v27 = v25;
    v40 = 4;
    v42 = &v27;
    v43 = 4;
    v26 = v16;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02F60, (unsigned __int8 *)byte_14002D680, 0LL, 0LL, 4u, &v38);
  }
  if ( a4 )
    KiClockLatencyMeasurementEnabled = 1;
  if ( KeIsForceIdleEngaged() )
    KiForceIdleReset = 1;
  v17 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockOwner = 0;
  if ( !v17 )
  {
    KiCancelClockTimer((__int64)CurrentPrcb, 0LL, 0);
    KiCancelClockTimer((__int64)CurrentPrcb, 1LL, 0);
    KiCancelClockTimer((__int64)CurrentPrcb, 2LL, 0);
  }
  ++qword_140C41B30;
  v12 = 1;
  v18 = v16 < qword_140C41B68;
  CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotArmed;
  if ( v18 )
    qword_140C41B68 = v16;
  if ( v16 > qword_140C41B60 )
    qword_140C41B60 = v16;
  if ( a1 )
    KiConsiderTimerRebasing = 1;
  LOBYTE(v8.LowPart) = KeNumberProcessors_0;
  v19 = KiHrTimerActiveCount > 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v20 = KiProcessorBlock;
    v21 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8.QuadPart = *v20;
      v22 = *(volatile signed __int32 **)(*v20 + 35000);
      if ( v22 )
      {
        if ( v19 )
          _InterlockedOr(v22, 0x80000u);
        else
          _InterlockedAnd(v22, 0xFFF7FFFF);
      }
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v25;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise.QuadPart + v25;
LABEL_5:
  if ( v34 )
  {
    LOBYTE(v8.LowPart) = KiClockTimerNextTickTime;
    *v34 = KiClockTimerNextTickTime;
  }
  if ( v12 != 4 )
    _InterlockedExchange(&KiClockState, v12);
  if ( v6 )
  {
    v28 = v6;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v37 = 0;
      v35 = &v28;
      v36 = 1;
      LOBYTE(v8.LowPart) = EtwTraceKernelEvent((int)&v35, 1, 0x40100000u, 3929, 1538);
    }
  }
  return v8.LowPart;
}
