/*
 * XREFs of ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C011204C
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1C009D6C0 (NdisReEnumerateProtocolBindings.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01135EC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C011E888 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     NdisFRetryAttach @ 0x1C012D530 (NdisFRetryAttach.c)
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C01121E8 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void Ndis::BindEngine::EndBindOperation(void)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress, 0xFFFFFFFF) <= 1 )
    ndisBindEnumerateProtocolDrivers(lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_, 0LL);
}
