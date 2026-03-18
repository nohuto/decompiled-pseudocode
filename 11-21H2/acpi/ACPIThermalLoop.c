/*
 * XREFs of ACPIThermalLoop @ 0x1C00209C0
 * Callers:
 *     ACPIThermalTMPCallback @ 0x1C00204A0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C002167C (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalComplete @ 0x1C0022170 (ACPIThermalComplete.c)
 *     ACPIThermalWorker @ 0x1C00959C0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
