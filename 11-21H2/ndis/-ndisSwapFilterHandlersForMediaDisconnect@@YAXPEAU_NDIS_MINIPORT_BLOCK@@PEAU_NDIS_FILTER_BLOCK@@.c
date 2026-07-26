/*
 * XREFs of ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0061D68
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0061F20 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0061F94 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSwapFilterHandlersForMediaDisconnect(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  __int64 (__fastcall *v7)(void *, struct _NDIS_PACKET *); // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x49u,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( a3 )
  {
    a3->XState |= 1u;
    ndisUpdateFilterFakeStatus(a3);
  }
  else
  {
    a1->XState |= 2u;
    ndisUpdateMiniportFakeStatus(a1);
  }
  if ( a2 )
  {
    a2->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
  }
  else
  {
    a1->ReceivePathEnabled = 0;
    a1->PacketIndicateHandler = ndisMDummyIndicatePacket;
  }
  if ( a3 )
  {
    a3->FilterSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFakeFilterSendHandler;
    a3->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
  }
  else
  {
    OpenQueue = a1->OpenQueue;
    a1->NextSendNetBufferListsHandler = ndisMFakeSendNetBufferLists;
    a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
    a1->SendPathType = NdisFakeSendPath;
    while ( OpenQueue )
    {
      if ( a1->MediaType != NdisMediumWan
        || (v7 = (__int64 (__fastcall *)(void *, struct _NDIS_PACKET *))ndisMFakeWanSend, (a1->Flags & 0x20000) != 0) )
      {
        v7 = ndisMFakeSend;
      }
      OpenQueue->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))v7;
      OpenQueue->CancelSendPacketsHandler = 0LL;
      OpenQueue->SendPacketsHandler = ndisMFakeSendPackets;
      OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMFakeReset;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x4Au,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)a1,
      (char)a2,
      a3);
}
