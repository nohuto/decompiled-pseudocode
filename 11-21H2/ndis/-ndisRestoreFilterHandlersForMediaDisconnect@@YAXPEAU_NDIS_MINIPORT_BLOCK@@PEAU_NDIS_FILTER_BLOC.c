/*
 * XREFs of ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C002505C
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0025184 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C0060A24 (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 */

void __fastcall ndisRestoreFilterHandlersForMediaDisconnect(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  char v7[8]; // [rsp+30h] [rbp-18h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x45u,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( a3 )
  {
    if ( ndisFilterXStateClearFlag(a3, (unsigned __int8)a2) )
    {
      a3->FilterSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFilterSendNetBufferLists;
      a3->FilterCancelSendNetBufferListsHandler = ndisFilterCancelSendNetBufferLists;
      goto LABEL_7;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = a3->XState;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x46u,
        (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
        (char)a3,
        *(_QWORD *)v7);
    }
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
  }
  else
  {
    if ( ndisMiniportXStateClearFlag(a1, 2u) )
    {
      OpenQueue = a1->OpenQueue;
      a1->SendPathType = a1->SavedSendPathType;
      a1->NextSendNetBufferListsHandler = a1->SavedNextSendNetBufferListsHandler;
      a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisCancelSendPackets;
      while ( OpenQueue )
      {
        OpenQueue->SendHandler = OpenQueue->SavedSendHandler;
        OpenQueue->SendPacketsHandler = OpenQueue->SavedSendPacketsHandler;
        OpenQueue->CancelSendPacketsHandler = OpenQueue->SavedCancelSendPacketsHandler;
        OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
LABEL_7:
      if ( a2 )
      {
        a2->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_9;
      }
      goto LABEL_23;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = a1->XState;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x47u,
        (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
        (char)a1,
        *(_QWORD *)v7);
    }
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    if ( !a2 )
    {
LABEL_23:
      a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
      a1->ReceivePathEnabled = a1->SavedReceivePathEnabled;
    }
  }
LABEL_9:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x48u,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)a1,
      (char)a2,
      a3);
}
