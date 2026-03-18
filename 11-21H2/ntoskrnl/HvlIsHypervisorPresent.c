/*
 * XREFs of HvlIsHypervisorPresent @ 0x14054346C
 * Callers:
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

_BOOL8 HvlIsHypervisorPresent()
{
  return HvlHypervisorConnected != 0;
}
