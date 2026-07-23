/*
 * XREFs of KeStallExecutionProcessor @ 0x1402C32C0
 * Callers:
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x140376A84 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpTimerMeasureFrequencies @ 0x14037A078 (HalpTimerMeasureFrequencies.c)
 *     IvtUpdateGlobalCommand @ 0x14037E254 (IvtUpdateGlobalCommand.c)
 *     HalpApicStartProcessor @ 0x1403B00B0 (HalpApicStartProcessor.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403B1CD0 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpInterruptResetThisProcessor @ 0x140505390 (HalpInterruptResetThisProcessor.c)
 *     HalpPowerWriteResetCommand @ 0x14050700C (HalpPowerWriteResetCommand.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050B2CC (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050D040 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x14051C2A0 (HalpNmiReboot.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1405215C0 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405216EC (HalpUsbLegacyStopUhciInterrupt.c)
 *     HsaGetPageFault @ 0x1405305C0 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x140545774 (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x1405519C0 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057ACAC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x140580880 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x140609C70 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140673458 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140673614 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpDelay @ 0x14067857C (IpmiLibpDelay.c)
 *     IvtInitializeIommu @ 0x140A89E10 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140AE9D84 (HdlspBugCheckProcessing.c)
 * Callees:
 *     KiCheckStall @ 0x1402C2920 (KiCheckStall.c)
 *     HalpTimerStallExecutionProcessor @ 0x1402C4640 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
