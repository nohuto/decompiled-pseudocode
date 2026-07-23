/*
 * XREFs of HvipApertureDirectHypercall @ 0x1405B6388
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B61D4 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B6234 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x14042B140 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x14042B150 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140D1BE5C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
