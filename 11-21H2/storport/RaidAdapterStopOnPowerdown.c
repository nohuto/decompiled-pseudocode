/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x1C0014E10
 * Callers:
 *     GatewayRegisterForEmptyNotification @ 0x1C0014B28 (GatewayRegisterForEmptyNotification.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0014E6C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0015084 (RaidAdapterSendPowerToMiniport.c)
 *     RaidPowerPassToMiniPort @ 0x1C00491FC (RaidPowerPassToMiniPort.c)
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
  *(_BYTE *)(v2 + 4433) = 1;
  result = RaidPowerPassToMiniPort(a1, a2, RaidAdapterDevicePowerDownSrbComplete);
  if ( (int)result < 0 )
    return RaidAdapterDevicePowerstopAdapter(a2);
  return result;
}
