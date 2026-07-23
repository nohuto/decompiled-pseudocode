/*
 * XREFs of HvipApertureIntelVmcall @ 0x14042B140
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B6388 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
