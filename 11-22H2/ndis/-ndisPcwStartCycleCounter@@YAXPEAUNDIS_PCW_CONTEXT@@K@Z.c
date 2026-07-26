/*
 * XREFs of ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C0002580 (NdisReturnNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x1C00034C0 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0003B00 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0003EC0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0011EB0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00125A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0012D74 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00132A0 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013730 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0027660 (NdisMAllocateNetBufferSGList.c)
 *     ndisInterruptDpc @ 0x1C0027A10 (ndisInterruptDpc.c)
 *     ndisMiniportMessageIsr @ 0x1C0027D10 (ndisMiniportMessageIsr.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0029EB0 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032490 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00370F0 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMiniportDpc @ 0x1C003CEB0 (ndisMiniportDpc.c)
 *     ndisMiniportIsr @ 0x1C003D070 (ndisMiniportIsr.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E310 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F54 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC30 (ndisMIndicateSplitNblChain.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00B0FDC (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ndisMIsr @ 0x1C00C73D0 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C00CDF20 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwStartCycleCounter(struct NDIS_PCW_CONTEXT *a1, unsigned int a2)
{
  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(*(_QWORD *)a1
            + ndisPcwOffsetToPerCpuData
            + (unsigned __int64)(ndisPcwPerCpuDataStride * *((_DWORD *)a1 + 4))
            + 8LL * a2
            + 304) = __rdtsc();
}
