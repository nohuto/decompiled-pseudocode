/*
 * XREFs of KeStallExecutionProcessor @ 0x1402C3030
 * Callers:
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x1403768E4 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpTimerMeasureFrequencies @ 0x140379ED8 (HalpTimerMeasureFrequencies.c)
 *     IvtUpdateGlobalCommand @ 0x14037E0B4 (IvtUpdateGlobalCommand.c)
 *     HalpApicStartProcessor @ 0x1403AFED0 (HalpApicStartProcessor.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403B1AF0 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpInterruptResetThisProcessor @ 0x140504E40 (HalpInterruptResetThisProcessor.c)
 *     HalpPowerWriteResetCommand @ 0x140506ABC (HalpPowerWriteResetCommand.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050AD7C (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050CAF0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x14051BD50 (HalpNmiReboot.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x140521070 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14052119C (HalpUsbLegacyStopUhciInterrupt.c)
 *     HsaGetPageFault @ 0x140530070 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x1405450B4 (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x140551300 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A7BC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x140580390 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x140609720 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140672F08 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1406730C4 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpDelay @ 0x14067802C (IpmiLibpDelay.c)
 *     IvtInitializeIommu @ 0x140A89E10 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140AE9D84 (HdlspBugCheckProcessing.c)
 * Callees:
 *     KiCheckStall @ 0x1402C2690 (KiCheckStall.c)
 *     HalpTimerStallExecutionProcessor @ 0x1402C43B0 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x1402C4570 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // r8
  ULONG_PTR v3; // rsi
  __int64 InternalData; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  signed __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rcx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( HalpTimerProcessorsFrozen )
  {
    v3 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        (*(void (__fastcall **)(__int64))(v3 + 112))(InternalData);
      }
      else
      {
        do
        {
          v5 = *(_QWORD *)(v3 + 208);
          do
          {
            v6 = *(_QWORD *)(v3 + 200);
            v7 = HalpTimerGetInternalData(v3);
            v8 = (*(__int64 (__fastcall **)(__int64))(v3 + 112))(v7);
            _InterlockedOr(v15, 0);
            v9 = *(_QWORD *)(v3 + 200);
          }
          while ( v6 != v9 );
        }
        while ( v5 != *(_QWORD *)(v3 + 208) );
        v10 = *(_DWORD *)(v3 + 220);
        if ( ((v6 ^ v8) & (1LL << ((unsigned __int8)v10 - 1))) != 0 )
        {
          if ( v10 == 64 )
            v11 = -1LL;
          else
            v11 = (1LL << v10) - 1;
          v12 = 0LL;
          if ( v10 != 64 )
            v12 = 1LL << v10;
          v13 = v6 & v11;
          v14 = v8 | v6 ^ v13;
          if ( v8 < v13 )
            v14 += v12;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v14, v9);
        }
      }
    }
    KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
  }
  LOBYTE(v1) = 1;
  HalpTimerStallExecutionProcessor(HalpStallCounter, 10 * MicroSeconds, v1);
}
