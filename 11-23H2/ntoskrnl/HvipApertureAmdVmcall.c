/*
 * XREFs of HvipApertureAmdVmcall @ 0x14042B150
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B6388 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
