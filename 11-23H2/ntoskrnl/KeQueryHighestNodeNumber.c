/*
 * XREFs of KeQueryHighestNodeNumber @ 0x14033CC40
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1407B3E10 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140863F90 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1409EF760 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
