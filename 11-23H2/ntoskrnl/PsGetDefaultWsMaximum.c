/*
 * XREFs of PsGetDefaultWsMaximum @ 0x140291A10
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
