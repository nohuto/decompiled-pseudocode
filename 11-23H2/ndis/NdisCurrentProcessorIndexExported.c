/*
 * XREFs of NdisCurrentProcessorIndexExported @ 0x1C00409F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisCurrentProcessorIndexExported(void)
{
  return KeGetPcr()->Prcb.Number;
}
