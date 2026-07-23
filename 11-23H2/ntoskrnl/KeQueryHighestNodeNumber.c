/*
 * XREFs of KeQueryHighestNodeNumber @ 0x14033CED0
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1407B4000 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1408641D0 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1409EF9F0 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
