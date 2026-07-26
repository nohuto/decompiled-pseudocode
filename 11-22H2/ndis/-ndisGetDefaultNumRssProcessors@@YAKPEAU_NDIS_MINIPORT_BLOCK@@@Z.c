/*
 * XREFs of ?ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0074290
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0029B60 (NdisGetRssProcessorInformation.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069DE8 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetDefaultNumRssProcessors(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( a1->PnPDeviceState != NdisPnPDeviceStarted )
    return 16LL;
  if ( a1->UsingMSIX )
    return a1->MaxRcvLinkSpeed < 0x2540BE400LL ? 8 : 16;
  return 4LL;
}
