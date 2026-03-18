/*
 * XREFs of MiThreadIdealNode @ 0x140617808
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x140A322C4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
}
