/*
 * XREFs of HalReturnToFirmware @ 0x140506A70
 * Callers:
 *     HalpLegacyShutdown @ 0x140506BB0 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x140506F20 (HalpShutdownReset.c)
 *     HaliAcpiSleep @ 0x140528000 (HaliAcpiSleep.c)
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x14057A43C (KeRebootSystemForRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x14057B120 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x140AA8FD4 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x140AB17C8 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140AEAD84 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     HalpAcquireCmosSpinLock @ 0x14033BA0C (HalpAcquireCmosSpinLock.c)
 *     KdPowerTransitionEx @ 0x1403AD360 (KdPowerTransitionEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404FEC58 (HalpTimerStopAllTimers.c)
 *     HalpInterruptResetAllProcessors @ 0x140504EAC (HalpInterruptResetAllProcessors.c)
 *     HalpPowerWriteResetCommand @ 0x140506BCC (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140506D54 (HalpShutdown.c)
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
  JUMPOUT(0x140506AFELL);
}
