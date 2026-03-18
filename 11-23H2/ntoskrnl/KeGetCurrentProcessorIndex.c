/*
 * XREFs of KeGetCurrentProcessorIndex @ 0x14032F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeGetCurrentProcessorIndex(void)
{
  return KeGetPcr()->Prcb.Number;
}
