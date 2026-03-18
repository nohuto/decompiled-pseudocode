/*
 * XREFs of PpmParkReportMask @ 0x14035AD60
 * Callers:
 *     <none>
 * Callees:
 *     KiCopyAffinityEx @ 0x1402545C0 (KiCopyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1402BFED0 (KeIsEqualAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D6B4 (KeCpuSetReportParkedProcessors.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x1405469A8 (HvlParkedVirtualProcessors.c)
 *     MmReportParkedProcessors @ 0x140655E48 (MmReportParkedProcessors.c)
 */

char PpmParkReportMask()
{
  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KiCopyAffinityEx((__int64)&PpmPerfReportedCoreParkingMask, word_140C0DA12, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask);
    MmReportParkedProcessors();
  }
  return 1;
}
