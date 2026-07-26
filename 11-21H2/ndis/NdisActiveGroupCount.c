/*
 * XREFs of NdisActiveGroupCount @ 0x1C00BE2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisActiveGroupCount(void)
{
  return KeQueryActiveGroupCount();
}
