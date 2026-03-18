/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x140941390
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376140 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x1403828D0 (HvlEnlightenProcessor.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1409413A8 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
