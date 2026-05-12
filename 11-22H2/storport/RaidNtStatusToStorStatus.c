/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1C000D988
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C000AEF0 (StorEtwMiniportEventProxy.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0013D5C (StorAdapterDeviceRegistryKeyProxy.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorEnableRegistryKeyNotification @ 0x1C0044F24 (StorEnableRegistryKeyNotification.c)
 *     StorGetMessageInterruptIDFromProcessorIndex @ 0x1C0045754 (StorGetMessageInterruptIDFromProcessorIndex.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C00471C4 (StorPortpInvokeAcpiMethod.c)
 *     StorpBuildScatterGatherList @ 0x1C0048574 (StorpBuildScatterGatherList.c)
 *     StorpGetNodeAffinity2 @ 0x1C0049130 (StorpGetNodeAffinity2.c)
 *     StorEtwMiniportLogByteStream @ 0x1C0068AAC (StorEtwMiniportLogByteStream.c)
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
    case -1073741789:
      return 3238002692LL;
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
