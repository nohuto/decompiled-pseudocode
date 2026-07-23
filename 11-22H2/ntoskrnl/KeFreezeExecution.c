/*
 * XREFs of KeFreezeExecution @ 0x14020D560
 * Callers:
 *     ExpWaitForBootDevices @ 0x140609790 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140AB1144 (KdEnterDebugger.c)
 * Callees:
 *     KiSendFreeze @ 0x14020D170 (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x14020D3E0 (KiSetDebuggerOwner.c)
 *     KxTryToAcquireSpinLock @ 0x14020D904 (KxTryToAcquireSpinLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x14020D934 (RtlWriteTryAcquireTickLock.c)
 *     KiStartDebugAccumulation @ 0x14020E480 (KiStartDebugAccumulation.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C0280 (KeRemoveProcessorAffinityEx.c)
 *     KeStallExecutionProcessor @ 0x1402C3000 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 */

bool KeFreezeExecution()
{
  __int16 v0; // r14
  volatile signed __int32 *SchedulerAssist; // rcx
  char v2; // bl
  bool v3; // r14
  unsigned __int8 CurrentIrql; // r15
  int v5; // esi
  char v6; // bp
  unsigned int v7; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v9; // rcx
  int v10; // esi
  signed __int64 v11; // rbx
  __int64 v12; // rbx
  LARGE_INTEGER v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-168h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-160h] BYREF
  __int128 v22; // [rsp+30h] [rbp-158h] BYREF
  __int64 v23; // [rsp+40h] [rbp-148h]
  _QWORD v24[34]; // [rsp+50h] [rbp-138h] BYREF
  int v25; // [rsp+180h] [rbp-8h]

  memset(v24, 0, 0x108uLL);
  v20 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v0 = v25;
  v22 = 0LL;
  v23 = 0LL;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v2 = 1;
  v3 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v18 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v19) = 0x8000;
    else
      v19 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v18[5] |= v19;
  }
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_5:
    v5 = 750000;
    do
    {
      v6 = KxTryToAcquireSpinLock(&KdDebuggerLock);
      if ( v6 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_5;
      KeStallExecutionProcessor(4u);
      --v5;
    }
    while ( v5 );
    v7 = v6 != 0 ? 4 * (750000 - v5) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v6 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v6;
    else
      KiFreezeFlag |= 8u;
    if ( v7 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v7;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140C01B48)(v9, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( ((unsigned int)KeNumberProcessors_0 > 1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner((__int64)CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v10 = 20000;
      else
        v10 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      LODWORD(v24[0]) = 2097153;
      memset((char *)v24 + 4, 0, 0x104uLL);
      KiCopyAffinityEx(v24, 32LL, &KeActiveProcessors);
      KeRemoveProcessorAffinityEx(v24, CurrentPrcb->Number);
      if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) == 3 )
        v2 = 0;
      KiSendFreeze((__int64)v24, v2);
      *((_QWORD *)&v22 + 1) = v24[1];
      *(_QWORD *)&v22 = v24;
LABEL_20:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v20, &v22) )
      {
        v11 = KiProcessorBlock[v20];
        while ( *(_DWORD *)(v11 + 11656) != 2 )
        {
          if ( !v10 )
          {
            KiFreezeFlag |= 2u;
            _InterlockedCompareExchange64(&KiFreezeSkippedProcessor, v11, 0LL);
            goto LABEL_20;
          }
          KeStallExecutionProcessor(0x32u);
          --v10;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled )
    {
      v12 = MmWriteableSharedUserData;
      if ( (unsigned __int8)RtlWriteTryAcquireTickLock(MmWriteableSharedUserData + 832) )
      {
        v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v14 = MmWriteableSharedUserData;
        v15 = KeMaximumIncrement;
        v16 = MEMORY[0xFFFFF78000000008]
            + 10000000 * (v13.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
        *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v16);
        *(_QWORD *)(v14 + 8) = v16;
        if ( (_DWORD)v15 )
        {
          KiTickOffset = v15 * (v16 / v15 + 1) - v16;
          *(_DWORD *)(v14 + 808) = (v16 / v15) >> 32;
          *(_QWORD *)(v14 + 800) = v16 / v15;
        }
        ++*(_QWORD *)(v12 + 832);
      }
    }
  }
  return v3;
}
