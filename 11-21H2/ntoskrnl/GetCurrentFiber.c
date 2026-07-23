/*
 * XREFs of GetCurrentFiber @ 0x1403AAEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID GetCurrentFiber(void)
{
  return KeGetCurrentPrcb();
}
