/*
 * XREFs of PpmParkReportMask @ 0x14035AF00
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1402C0160 (KeIsEqualAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D894 (KeCpuSetReportParkedProcessors.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x140547068 (HvlParkedVirtualProcessors.c)
 *     MmReportParkedProcessors @ 0x140656398 (MmReportParkedProcessors.c)
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
