/*
 * XREFs of HvlIsHypervisorPresent @ 0x14053F8DC
 * Callers:
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

_BOOL8 HvlIsHypervisorPresent()
{
  return HvlHypervisorConnected != 0;
}
