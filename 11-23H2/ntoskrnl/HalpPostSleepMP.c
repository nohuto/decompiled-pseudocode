/*
 * XREFs of HalpPostSleepMP @ 0x140A96FA8
 * Callers:
 *     HaliAcpiSleep @ 0x140527F40 (HaliAcpiSleep.c)
 * Callees:
 *     HalpHvIsReferenceTscConfigured @ 0x14037B1C0 (HalpHvIsReferenceTscConfigured.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x14037B2B0 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x14037B5B4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BD58 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x14037FF58 (HalpMcUpdateMicrocode.c)
 *     HalpTscSynchronizationWorker @ 0x14038D530 (HalpTscSynchronizationWorker.c)
 *     HalpTscInitializeSynchronizationContext @ 0x14039AD64 (HalpTscInitializeSynchronizationContext.c)
 *     HalpInterruptRestoreClock @ 0x1405052E8 (HalpInterruptRestoreClock.c)
 *     HalpRestartProfiling @ 0x140507F10 (HalpRestartProfiling.c)
 *     HalpTimerMarkWake @ 0x140508FFC (HalpTimerMarkWake.c)
 *     HalpTimerRestoreProcessorCounter @ 0x14050B220 (HalpTimerRestoreProcessorCounter.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x14050C0A0 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x14051C6C8 (HalpSetResumeTime.c)
 *     HalpErrataApplyPerProcessor @ 0x140A8A8C8 (HalpErrataApplyPerProcessor.c)
 *     KeLoadMTRR @ 0x140A8F950 (KeLoadMTRR.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A9520C (HalpMcaResumeProcessorConfig.c)
 */

char __fastcall HalpPostSleepMP(ULONG a1, __int64 a2)
{
  bool IsReferenceTscConfigured; // al
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  v9 = a1;
  LODWORD(v10) = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)v10 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v10 != HalpBarrier )
      _mm_pause();
    __writecr8(0xFuLL);
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  v3 = IsReferenceTscConfigured;
  if ( !(_DWORD)v10 )
  {
    dword_140D18D4C = 0;
    dword_140D18CFC = 0;
    qword_140D18D40 = (__int64)&dword_140D18CFC;
    dword_140D18D34 = v9 - 1;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v9);
  }
  _InterlockedIncrement(&HalpBarrier);
  while ( HalpBarrier != v9 )
    ;
  if ( !(_DWORD)v10 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v10 )
    HalpSetResumeTime(0LL, 1);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v5, v4);
  if ( !(_DWORD)v10 )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140D18D48 = 0;
  }
  _InterlockedIncrement(&dword_140D18D4C);
  while ( dword_140D18D4C != v9 )
    ;
  while ( dword_140D18D48 < (int)v10 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140D18D48, v6, v7);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140D18D48);
  while ( dword_140D18D48 != v9 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR((__int64)&unk_140D18D30);
  if ( !v3 )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1);
}
