/*
 * XREFs of PpmParkReportMask @ 0x14035A760
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1402BFEA0 (KeIsEqualAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x140546A48 (HvlParkedVirtualProcessors.c)
 *     MmReportParkedProcessors @ 0x140655EB8 (MmReportParkedProcessors.c)
 */

char PpmParkReportMask()
{
  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KiCopyAffinityEx((__int64)&PpmPerfReportedCoreParkingMask, word_140C0D902, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask);
    MmReportParkedProcessors();
  }
  return 1;
}
