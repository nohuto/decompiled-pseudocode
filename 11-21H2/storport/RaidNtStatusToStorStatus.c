/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1C00194BC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     StorEtwMiniportEventProxy @ 0x1C0019370 (StorEtwMiniportEventProxy.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0042200 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0044284 (StorPortpInvokeAcpiMethod.c)
 *     StorpBuildScatterGatherList @ 0x1C004509C (StorpBuildScatterGatherList.c)
 *     StorEtwMiniportLogByteStream @ 0x1C005BA78 (StorEtwMiniportLogByteStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  switch ( a1 )
  {
    case -2147483643:
      return 3238002692LL;
    case -1073741822:
      return 3238002690LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741670:
      return 3238002691LL;
    case -1073741637:
      return 3238002690LL;
    case -1073741496:
      return 3238002696LL;
  }
  if ( a1 < 0 )
    return 3238002689LL;
  return 0LL;
}
