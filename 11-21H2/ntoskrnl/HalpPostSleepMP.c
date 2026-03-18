/*
 * XREFs of HalpPostSleepMP @ 0x140A500C0
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 * Callees:
 *     HalpRestartProfiling @ 0x140391464 (HalpRestartProfiling.c)
 *     HalpTimerRestoreProcessorCounter @ 0x1403914B8 (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x140391524 (HalpTimerMarkWake.c)
 *     HalpSetResumeTime @ 0x14039157C (HalpSetResumeTime.c)
 *     HalpInterruptRestoreClock @ 0x1403915EC (HalpInterruptRestoreClock.c)
 *     HalpTscSynchronizationWorker @ 0x1403AC910 (HalpTscSynchronizationWorker.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403AEED4 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x1403B607C (HalpMcUpdateMicrocode.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403B6968 (HalpHvIsReferenceTscConfigured.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403B6AC0 (HalpTscInitializeSynchronizationContext.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x14050F000 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A5029C (HalpMcaResumeProcessorConfig.c)
 *     HalpErrataApplyPerProcessor @ 0x140A536C8 (HalpErrataApplyPerProcessor.c)
 *     KeLoadMTRR @ 0x140A53A50 (KeLoadMTRR.c)
 */

__int64 __fastcall HalpPostSleepMP(ULONG a1, __int64 a2)
{
  bool IsReferenceTscConfigured; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v8 = a1;
  LODWORD(v9) = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)v9 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v9 != HalpBarrier )
      _mm_pause();
    __writecr8(0xFuLL);
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0LL);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  if ( !(_DWORD)v9 )
  {
    dword_140C54874 = 0;
    dword_140C54850 = 0;
    dword_140C5485C = v8 - 1;
    qword_140C54868 = (__int64)&dword_140C54850;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v8);
  }
  _InterlockedIncrement(&HalpBarrier);
  while ( HalpBarrier != v8 )
    ;
  if ( !(_DWORD)v9 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v9 )
    HalpSetResumeTime(0LL, 1);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v4, v3);
  if ( !(_DWORD)v9 )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140C54870 = 0;
  }
  _InterlockedIncrement(&dword_140C54874);
  while ( dword_140C54874 != v8 )
    ;
  while ( dword_140C54870 < (int)v9 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140C54870, v5, v6);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140C54870);
  while ( dword_140C54870 != v8 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR(&unk_140C54858);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1LL);
}
