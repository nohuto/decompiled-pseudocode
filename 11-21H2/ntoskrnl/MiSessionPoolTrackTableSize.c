/*
 * XREFs of MiSessionPoolTrackTableSize @ 0x140864DB8
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14036EEAC (ExInitializeSessionHeapManager.c)
 * Callees:
 *     <none>
 */

__int64 MiSessionPoolTrackTableSize()
{
  unsigned __int64 v0; // rcx

  _BitScanReverse64(&v0, 0xCCuLL);
  return 1LL << v0;
}
