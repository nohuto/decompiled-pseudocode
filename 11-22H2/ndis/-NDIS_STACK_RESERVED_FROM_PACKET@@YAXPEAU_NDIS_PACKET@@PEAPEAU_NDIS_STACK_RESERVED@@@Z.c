/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00315F8
 * Callers:
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C0014744 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     NdisAllocatePacket @ 0x1C00313B0 (NdisAllocatePacket.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0061E60 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B058 (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReturnPackets @ 0x1C006FEF0 (NdisReturnPackets.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x1C007399C (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C0073B34 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00904F0 (-ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0090640 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C1C90 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C1EB0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C2080 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C2580 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2A50 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2AF0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C2BA0 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMatchPdoWithPacket @ 0x1C00C6610 (NdisMatchPdoWithPacket.c)
 *     ?ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C79E0 (-ndisMDeferredSend@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C7C10 (-ndisMDeferredSendPackets@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C8070 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C8170 (-ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C8210 (-ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C8410 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisMSendComplete @ 0x1C00C8820 (NdisMSendComplete.c)
 *     ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C9910 (-ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C9CF0 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C9E40 (-ndisMDeferredSendPacketsSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00CA2B0 (-ndisMDeferredSendSG@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00CA4F0 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00CA690 (-ndisMSendPacketsSGToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00CA804 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00CABE0 (-ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00CACD0 (-ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIsLoopbackPacket @ 0x1C00CB440 (ndisMIsLoopbackPacket.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CB7E8 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CC948 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CCD0C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C00CD730 (-ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C00CD800 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_STACK_RESERVED_FROM_PACKET(struct _NDIS_PACKET *a1, struct _NDIS_STACK_RESERVED **a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(unsigned int *)&a1[-1].ProtocolReserved[4];
  if ( (unsigned int)v2 >= ndisPacketStackSize )
    v3 = 16LL;
  else
    v3 = (__int64)a1 + 48 * (v2 - ndisPacketStackSize);
  *a2 = (struct _NDIS_STACK_RESERVED *)v3;
}
