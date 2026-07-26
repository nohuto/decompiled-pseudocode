/*
 * XREFs of NdisSystemProcessorCount @ 0x1C00C3470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CCHAR NdisSystemProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
