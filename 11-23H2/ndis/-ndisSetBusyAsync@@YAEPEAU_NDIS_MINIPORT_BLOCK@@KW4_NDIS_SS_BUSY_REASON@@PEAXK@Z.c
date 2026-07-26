/*
 * XREFs of ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F880
 * Callers:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0003C90 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C0007FF0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C0029484 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C003DF40 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C003E160 (-ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1C00B0C60 (-ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00B4CF0 (ndisDoCancelDirectOidRequest.c)
 * Callees:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FB34 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FD86 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

__int64 __fastcall ndisSetBusyAsync(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    return ndisWdmSetBusyAsync(a1);
  else
    return ndisWdfSetBusyAsync(a1);
}
