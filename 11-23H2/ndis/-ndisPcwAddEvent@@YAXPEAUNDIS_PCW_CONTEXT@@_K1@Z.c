/*
 * XREFs of ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092378
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C0002580 (NdisReturnNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x1C0003650 (NdisSendNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0004050 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0012730 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C00277F0 (NdisMAllocateNetBufferSGList.c)
 *     ndisInterruptDpc @ 0x1C0027BA0 (ndisInterruptDpc.c)
 *     ndisMiniportMessageIsr @ 0x1C0027EA0 (ndisMiniportMessageIsr.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C002A040 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisMiniportIsr @ 0x1C003D1F0 (ndisMiniportIsr.c)
 *     ndisQueueDpcWorkItem @ 0x1C003D306 (ndisQueueDpcWorkItem.c)
 *     NdisMQueueDpcEx @ 0x1C003D650 (NdisMQueueDpcEx.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00A4198 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisMIsr @ 0x1C00C73F0 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C00CDF40 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwAddEvent(struct NDIS_PCW_CONTEXT *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r8

  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)a1 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *((_DWORD *)a1 + 4));
  *(_QWORD *)(v4 + 8 * a2) += a3;
}
