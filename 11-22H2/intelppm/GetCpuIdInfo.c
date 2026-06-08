/*
 * XREFs of GetCpuIdInfo @ 0x1C0004200
 * Callers:
 *     IsHwpSupported @ 0x1C0002824 (IsHwpSupported.c)
 *     PctGetIntelEsuType @ 0x1C0002B40 (PctGetIntelEsuType.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0002F50 (IsPerformanceEnergyBiasSupported.c)
 *     IsTurboModeSupported @ 0x1C00036F4 (IsTurboModeSupported.c)
 *     IsProcGV3Capable @ 0x1C000783C (IsProcGV3Capable.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C0025CCC (IsNonwrappingACountMCountSupported.c)
 *     InitMonitorMWaitSupport @ 0x1C0025E00 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C0025EBC (IsMonitorMWaitSupported.c)
 *     IsHgsInterruptSupported @ 0x1C0026E34 (IsHgsInterruptSupported.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0026EAC (IsHwpHighestInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0026F28 (IsHwpNativeInterruptSupported.c)
 *     GetHwDebugRegisters @ 0x1C002DD80 (GetHwDebugRegisters.c)
 *     IsPackageThermStatusSupported @ 0x1C002DFB8 (IsPackageThermStatusSupported.c)
 *     IsHwpFastMsrSupported @ 0x1C002E450 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C002E4CC (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C002E548 (IsHwpPackageControlSupported.c)
 *     InitEnergyCountersMsrEx @ 0x1C0034100 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C00341C0 (ProbeFixedFunctionCounters.c)
 *     IsProcSpeedStepCapable @ 0x1C00342E0 (IsProcSpeedStepCapable.c)
 *     GetCPUFamilyAndModel @ 0x1C0046008 (GetCPUFamilyAndModel.c)
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
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
