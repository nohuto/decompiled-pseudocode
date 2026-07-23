/*
 * XREFs of KeFindFirstSetLeftAffinityEx @ 0x140338550
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140586B60 (PpmUpdatePlatformIdleVeto.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftAffinityEx(_WORD *a1)
{
  __int16 v1; // ax
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v1 = *a1 - 1;
  if ( v1 < 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v2 = *(_QWORD *)&a1[4 * v1 + 4];
    if ( v2 )
      break;
    if ( --v1 < 0 )
      return 0xFFFFFFFFLL;
  }
  _BitScanReverse64(&v3, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)(v3 + (v1 << 6))];
}
