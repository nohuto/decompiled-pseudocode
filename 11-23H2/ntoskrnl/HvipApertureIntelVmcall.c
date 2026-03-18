/*
 * XREFs of HvipApertureIntelVmcall @ 0x14042ADB0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405B5E18 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
