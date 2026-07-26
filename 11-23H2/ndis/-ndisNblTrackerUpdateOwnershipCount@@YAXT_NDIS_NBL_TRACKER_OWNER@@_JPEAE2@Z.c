/*
 * XREFs of ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013834
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0003650 (NdisSendNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0004050 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0004810 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0004B10 (NdisFSendNetBufferListsComplete.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0011D20 (NdisFreeCloneNetBufferList.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0012040 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0012730 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013284 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0013430 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032620 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0072224 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E330 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F74 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC50 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisNblTrackerUpdateOwnershipCount(unsigned __int64 a1, unsigned __int64 a2, char *a3, _BYTE *a4)
{
  char v4; // al
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  if ( a2 )
  {
    v4 = *a3;
    if ( !*a3 && !*a4 )
    {
      *a4 = 1;
      v4 = KeGetCurrentIrql() == 2;
      *a3 = v4;
    }
    v8 = a1;
    v9 = a1 & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = 2 * ((v8 >> 1) & 1);
    if ( v4 )
    {
      v11 = (_QWORD *)(*(_QWORD *)(v9 + 8 * v10 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v11 += a2;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8 * v10 + 48), a2);
    }
  }
}
