/*
 * XREFs of GetCpuIdInfo @ 0x1C00036D0
 * Callers:
 *     PctGetIntelEsuType @ 0x1C00022C0 (PctGetIntelEsuType.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0002C98 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x1C0002D34 (IsHwpSupported.c)
 *     IsTurboModeSupported @ 0x1C0003280 (IsTurboModeSupported.c)
 *     IsProcGV3Capable @ 0x1C0005E3C (IsProcGV3Capable.c)
 *     IsHgsInterruptSupported @ 0x1C002B654 (IsHgsInterruptSupported.c)
 *     IsHwpHighestInterruptSupported @ 0x1C002B6CC (IsHwpHighestInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C002B748 (IsHwpNativeInterruptSupported.c)
 *     InitMonitorMWaitSupport @ 0x1C002B810 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C002B8CC (IsMonitorMWaitSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C002B938 (IsNonwrappingACountMCountSupported.c)
 *     GetHwDebugRegisters @ 0x1C002CB90 (GetHwDebugRegisters.c)
 *     IsPackageThermStatusSupported @ 0x1C002CDC0 (IsPackageThermStatusSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C002D200 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpFastMsrSupported @ 0x1C002D2A0 (IsHwpFastMsrSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C002D340 (IsHwpPackageControlSupported.c)
 *     InitEnergyCountersMsrEx @ 0x1C0032F90 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0033050 (ProbeFixedFunctionCounters.c)
 *     IsProcSpeedStepCapable @ 0x1C0033170 (IsProcSpeedStepCapable.c)
 *     GetCPUFamilyAndModel @ 0x1C0044008 (GetCPUFamilyAndModel.c)
 *     InitDriver @ 0x1C0047234 (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
