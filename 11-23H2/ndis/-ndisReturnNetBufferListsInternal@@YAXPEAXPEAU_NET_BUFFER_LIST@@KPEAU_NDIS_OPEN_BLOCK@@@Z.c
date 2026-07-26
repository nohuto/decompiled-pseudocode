/*
 * XREFs of ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0012F04
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0012730 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0012B00 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C003E796 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00AA934 (ndisEmptyPeriodicReceivesQueue.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C2920 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00C9A6C (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013024 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0013054 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013284 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0040458 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z @ 0x1C00AB9B8 (-ndisReturnPeriodicReceives@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@@Z.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct _NDIS_OPEN_BLOCK *a4)
{
  KIRQL v8; // r14
  struct _NET_BUFFER_LIST *i; // rcx
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdx
  char v11; // bp
  _BYTE v12[12]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+3Ch] [rbp-2Ch]

  v8 = 2;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v12, a1);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Flags = i->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
  if ( a1->PeriodicReceiveQueue.NblsAllocated )
    a2 = ndisReturnPeriodicReceives(a1, a2);
  if ( a2 )
  {
    if ( *(_DWORD *)ndisNblTrackerMode )
    {
      if ( a4 )
        NblTracker = a4->NblTracker;
      else
        NblTracker = 0LL;
      ndisNblTrackerTransferOwnershipInternal(
        a2,
        NblTracker,
        a1->Next.ReturnNetBufferListsTracker,
        NdisNblTrackerEvent_ProtocolReturned,
        a3 & 1);
    }
    v11 = v13;
    if ( (v13 & 0x20) != 0 )
    {
      if ( (a3 & 1) == 0 )
        v8 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v12, 5u);
      v11 = v13;
    }
    ndisInvokeNextReceiveCompleteHandler(
      a2,
      a3,
      &a1->Header,
      a1->Next.ReturnNetBufferListsObject,
      a1->Next.ReturnNetBufferListsContext,
      (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))a1->Next.ReturnNetBufferListsHandler);
    if ( (v11 & 0x20) != 0 )
    {
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v12, 5u, 0x12uLL);
      if ( v8 != 2 )
        KeLowerIrql(v8);
    }
  }
}
