/*
 * XREFs of ?ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001AA18
 * Callers:
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001999C (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisSetupMiniportProtocolHandlers(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned __int8 MajorNdisVersion; // bp
  unsigned __int8 v5; // r14
  void *ProtocolBindingContext; // rcx

  MajorNdisVersion = a2->MajorNdisVersion;
  v5 = a3->MajorNdisVersion;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x8Fu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a2,
      (char)a3,
      a1);
  if ( MajorNdisVersion < 6u )
  {
    a1->SendCompleteNetBufferListsContext = a1;
    a1->ProtSendNetBufferListsComplete = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendNetBufferListsCompleteToNdisPackets;
  }
  else
  {
    if ( v5 < 6u )
    {
      if ( !a3->Miniport5InNdis6Mode )
      {
        a3->OutstandingReceives = 0;
        a3->Miniport5InNdis6Mode = 1;
      }
      a1->SendCompleteNdisPacketContext = a3;
      a1->ProtSendNetBufferListsComplete = a2->SendNetBufferListsCompleteHandler;
      a1->SendCompleteNetBufferListsContext = a1->ProtocolBindingContext;
      if ( (a3->Flags & 0x20000000) != 0 )
        a3->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
      a3->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
      a3->SynchronousReturnPacketHandler = ndisSynchReturnPacketsForTranslation;
      a3->EthRxIndicateHandler = EthIndicateReceive;
      a3->SynchronousReturnPacketContext = a3;
      a1->ReceiveNetBufferLists = a2->ReceiveNetBufferListsHandler;
      a1->ReceiveNetBufferListsContext = a1->ProtocolBindingContext;
    }
    else
    {
      ProtocolBindingContext = a1->ProtocolBindingContext;
      a1->ProtSendNetBufferListsComplete = a2->SendNetBufferListsCompleteHandler;
      a1->SendCompleteNetBufferListsContext = ProtocolBindingContext;
      a1->ReceiveNetBufferLists = a2->ReceiveNetBufferListsHandler;
      a1->ReceiveNetBufferListsContext = ProtocolBindingContext;
    }
    a3->Ndis6ProtocolsBound = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x90u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a2,
      (char)a3,
      a1);
}
