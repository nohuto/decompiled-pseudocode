/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x140941590
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403762E0 (HvlStartBootLogicalProcessors.c)
 *     HvlEnlightenProcessor @ 0x140382A70 (HvlEnlightenProcessor.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1409415A8 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
