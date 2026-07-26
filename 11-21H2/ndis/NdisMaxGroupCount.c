/*
 * XREFs of NdisMaxGroupCount @ 0x1C00BE3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisMaxGroupCount(void)
{
  return KeQueryMaximumGroupCount();
}
