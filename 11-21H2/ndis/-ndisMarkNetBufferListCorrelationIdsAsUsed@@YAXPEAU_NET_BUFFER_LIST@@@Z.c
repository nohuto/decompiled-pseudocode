/*
 * XREFs of ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C
 * Callers:
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002170 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C00024F4 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00025B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0003230 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0003540 (NdisMSendNetBufferListsComplete.c)
 *     NdisReturnNetBufferLists @ 0x1C0005660 (NdisReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00066F0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0006A00 (NdisFReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0007F50 (NdisFSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013860 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0023370 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098440 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A354C (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A41C4 (ndisMIndicateSplitNblChain.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00AB5B0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMarkNetBufferListCorrelationIdsAsUsed(struct _NET_BUFFER_LIST *Alignment)
{
  if ( Alignment )
  {
    if ( byte_1C00EC210 )
    {
      do
      {
        Alignment->NetBufferListInfo[13] = 0LL;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
    else
    {
      do
      {
        Alignment->NetBufferListInfo[13] = (void *)((unsigned __int64)Alignment->NetBufferListInfo[13] | 0x8000000000000000uLL);
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
    }
  }
}
