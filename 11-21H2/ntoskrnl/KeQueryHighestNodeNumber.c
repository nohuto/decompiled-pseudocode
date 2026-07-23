/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140263710
 * Callers:
 *     IoGetDeviceNumaNode @ 0x1406EAE80 (IoGetDeviceNumaNode.c)
 *     sub_1406F2350 @ 0x1406F2350 (sub_1406F2350.c)
 *     sub_1409EB100 @ 0x1409EB100 (sub_1409EB100.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return word_140D05000 - 1;
}
