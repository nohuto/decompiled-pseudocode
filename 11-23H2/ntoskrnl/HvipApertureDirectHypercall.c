/*
 * XREFs of HvipApertureDirectHypercall @ 0x1405B5E18
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B5C64 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B5CC4 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x14042ADB0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x14042ADC0 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140D1BE6C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
