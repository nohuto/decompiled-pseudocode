/*
 * XREFs of HalReturnToFirmware @ 0x140506960
 * Callers:
 *     HalpLegacyShutdown @ 0x140506AA0 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x140506E20 (HalpShutdownReset.c)
 *     HaliAcpiSleep @ 0x140527F40 (HaliAcpiSleep.c)
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x14057A3AC (KeRebootSystemForRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057ADE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x14057B090 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x140AA8F14 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x140AB07C8 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140AE9D84 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x14032A6F0 (DbgPrint.c)
 *     HalpAcquireCmosSpinLock @ 0x14033BC0C (HalpAcquireCmosSpinLock.c)
 *     KdPowerTransitionEx @ 0x1403AD9F0 (KdPowerTransitionEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404FEB48 (HalpTimerStopAllTimers.c)
 *     HalpInterruptResetAllProcessors @ 0x140504D9C (HalpInterruptResetAllProcessors.c)
 *     HalpPowerWriteResetCommand @ 0x140506ABC (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140506C48 (HalpShutdown.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( (unsigned int)(v1 - 1) >= 2 )
      {
        DbgPrint("HalReturnToFirmware called\n");
        __debugbreak();
      }
    }
    else
    {
      KdPowerTransitionEx(4, 0);
      HalpShutdown();
    }
  }
  KdPowerTransitionEx(4, 0);
  if ( HalpRebootHandler )
    off_140C01D60[0]();
  _disable();
  if ( !HalpHvCpuManager || HalpEnlightenment )
    HalpTimerStopAllTimers();
  HalpAcquireCmosSpinLock(v3, v2, v4);
  if ( HalpResetParkDisposition )
    HalpInterruptResetAllProcessors();
  HalpPowerWriteResetCommand(0LL, 0LL);
  JUMPOUT(0x1405069EELL);
}
