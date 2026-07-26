/*
 * XREFs of ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E8F4
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00168A0 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006CC8C (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C006D390 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C007126C (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0066F04 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMSwapOpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int (__fastcall *v5)(void *, _NDIS_PACKET *); // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Au,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      a2);
  a1->XState |= a2;
  ndisUpdateMiniportFakeStatus(a1);
  OpenQueue = a1->OpenQueue;
  a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMFakeSendNetBufferLists;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
  a1->SendPathType = NdisFakeSendPath;
  while ( OpenQueue )
  {
    if ( a1->MediaType != NdisMediumWan
      || (v5 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMFakeWanSend, (a1->Flags & 0x20000) != 0) )
    {
      v5 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMFakeSend;
    }
    OpenQueue->SendHandler = v5;
    OpenQueue->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMFakeSendPackets;
    OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMFakeReset;
    if ( (a1->XState & 0xFD) != 0 )
    {
      OpenQueue->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisMFakeRequest;
      OpenQueue->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMFakeOidRequest;
      OpenQueue->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMFakeDirectOidRequest;
    }
    OpenQueue->CancelSendPacketsHandler = 0LL;
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Bu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
}
