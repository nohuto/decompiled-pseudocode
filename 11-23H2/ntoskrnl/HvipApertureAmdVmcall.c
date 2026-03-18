/*
 * XREFs of HvipApertureAmdVmcall @ 0x14042ADC0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B5E18 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
