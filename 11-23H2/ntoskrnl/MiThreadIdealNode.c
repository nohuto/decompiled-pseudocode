/*
 * XREFs of MiThreadIdealNode @ 0x140617D58
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x140A32574 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
}
