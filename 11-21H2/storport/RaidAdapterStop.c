/*
 * XREFs of RaidAdapterStop @ 0x1C0014FAC
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0014E6C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C008CBD0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterStopAdapter @ 0x1C0014FFC (RaidAdapterStopAdapter.c)
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
