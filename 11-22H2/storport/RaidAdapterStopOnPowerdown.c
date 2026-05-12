/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x1C0010E90
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0010FC0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011048 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidPowerPassToMiniPort @ 0x1C004C25C (RaidPowerPassToMiniPort.c)
 */

__int64 __fastcall RaidAdapterStopOnPowerdown(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
    return RaidAdapterDevicePowerstopAdapter(a2);
  }
  *(_BYTE *)(v2 + 4497) = 1;
  result = RaidPowerPassToMiniPort(a1, a2, RaidAdapterDevicePowerDownSrbComplete);
  if ( (int)result < 0 )
    return RaidAdapterDevicePowerstopAdapter(a2);
  return result;
}
