/*
 * XREFs of RaidAdapterStop @ 0x1C0011178
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011048 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C00A6D44 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00A711C (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterStopAdapter @ 0x1C00111C8 (RaidAdapterStopAdapter.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 568) || !*(_QWORD *)(a1 + 576) )
    return 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 1) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
