/*
 * XREFs of ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CDC0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00173D4 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00196DC (-ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0019790 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001980C (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqZddZ @ 0x1C0020980 (WPP_RECORDER_SF_qqZddZ.c)
 *     ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0148CA8 (-ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0148D9C (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueueOpenOnProtocol@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0149A24 (-ndisQueueOpenOnProtocol@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0149B20 (-ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0155E14 (-ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMOpenAdapter(int *a1, struct _NDIS_OPEN_BLOCK *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  _QWORD *FakeMac; // r15
  char v5; // r12
  char v7; // r13
  int v10; // edx
  void (__fastcall *RequestCompleteHandler)(void *, _NDIS_REQUEST *, int); // rcx
  void (__fastcall *v12)(void *, _NDIS_OID_REQUEST *, int); // rax
  unsigned int *p_Flags; // rcx
  _NDIS_M_DRIVER_BLOCK *v14; // rax
  void (__fastcall *CancelSendPacketsHandler)(void *, void *); // rcx
  char v16; // cl
  __int64 v17; // r9
  struct _X_FILTER *EthDB; // rbp
  int OpenMulticastBuffer; // eax
  int v20; // eax
  _QWORD *Pool2; // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void (__fastcall *CancelSendHandler)(void *, void *); // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *v24; // rax
  int v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+40h] [rbp-48h]

  ProtocolHandle = a2->ProtocolHandle;
  FakeMac = 0LL;
  v5 = 0;
  v7 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x28u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)ProtocolHandle,
      (char)a3);
  if ( !ndisReferenceMiniport(a3, 0x2Eu) )
  {
    *a1 = -1073676286;
    goto LABEL_28;
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    FakeMac = a3->FakeMac;
    if ( !FakeMac )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 192LL, 1835418702);
      FakeMac = Pool2;
      if ( !Pool2 )
      {
        *a1 = -1073741670;
LABEL_64:
        ndisDereferenceMiniport(a3, 0x2Eu);
        goto LABEL_28;
      }
      a3->FakeMac = Pool2;
      v7 = 1;
    }
    a2->MacHandle = FakeMac;
  }
  a2->MiniportAdapterContext = a3->MiniportAdapterContext;
  a2->CurrentLookahead = LOWORD(a3->MiniportCurrentLookahead);
  KeInitializeSpinLock(&a2->SpinLock);
  ndisMReferenceOpen((__int64)a2, 1u);
  if ( a3->MajorNdisVersion < 6u )
  {
    a2->WSendHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.SendHandler;
    a2->WSendPacketsHandler = a3->WSendPacketsHandler;
    a2->WTransferDataHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.TransferDataHandler;
  }
  a2->ProtocolMajorVersion = ProtocolHandle->MajorNdisVersion;
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u )
  {
    a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisMSendPacketCompleteToOpen;
    a2->ProtSendCompleteHandler = ProtocolHandle->SendCompleteHandler;
    a2->TransferDataCompleteHandler = ProtocolHandle->TransferDataCompleteHandler;
    a2->ReceiveHandler = ProtocolHandle->ReceiveHandler;
    a2->ReceiveCompleteHandler = ProtocolHandle->ReceiveCompleteHandler;
    a2->ResetCompleteHandler = ProtocolHandle->ResetCompleteHandler;
    a2->ReceivePacketHandler = ProtocolHandle->ReceivePacketHandler;
    v12 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisCompleteOidRequestToRequest;
    RequestCompleteHandler = ProtocolHandle->RequestCompleteHandler;
  }
  else
  {
    RequestCompleteHandler = 0LL;
    a2->ReceiveCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
    v12 = (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))ndisInvokeOidRequestComplete;
  }
  a2->RequestCompleteHandler = RequestCompleteHandler;
  a2->OidRequestCompleteHandler = v12;
  p_Flags = &a3->Flags;
  a2->StatusHandler = ProtocolHandle->StatusHandler;
  a2->StatusCompleteHandler = ProtocolHandle->StatusCompleteHandler;
  a2->ResetHandler = (int (__fastcall *)(void *))ndisMReset;
  a2->SendCompleteNdisPacketContext = a2->ProtocolBindingContext;
  a2->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisLegacyRequest;
  a2->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMOidRequest;
  a2->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMDirectOidRequest;
  a2->TransferDataHandler = (int (__fastcall *)(void *, void *, unsigned int, unsigned int, _NDIS_PACKET *, unsigned int *))ndisMTransferData;
  a2->BindingHandle = a2;
  if ( a3->MediaType == NdisMediumWan )
  {
    if ( !_bittest((const signed __int32 *)p_Flags, 0x11u) )
      a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  }
  else
  {
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMSend;
  }
  a2->SendPacketsHandler = a3->SendPacketsHandler;
  if ( a3->MediaType == NdisMediumWan && !_bittest((const signed __int32 *)p_Flags, 0x11u) )
    a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend;
  if ( _bittest((const signed __int32 *)p_Flags, 0x11u) )
  {
    DriverHandle = a3->DriverHandle;
    if ( a3->MajorNdisVersion >= 6u )
    {
      a2->MiniportCoOidRequestHandler = DriverHandle->CoOidRequestHandler;
      a2->MiniportCoCreateVcHandler = a3->DriverHandle->CoCreateVcHandler;
      CancelSendHandler = a3->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler;
    }
    else
    {
      a2->MiniportCoRequestHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler;
      a2->MiniportCoCreateVcHandler = a3->DriverHandle->MiniportCharacteristics.Ndis50Chars.CoCreateVcHandler;
      CancelSendHandler = a3->DriverHandle->MiniportCharacteristics.CancelSendPacketsHandler;
    }
    a2->CancelSendPacketsHandler = CancelSendHandler;
    a2->ActiveVcHead.Blink = &a2->ActiveVcHead;
    a2->ActiveVcHead.Flink = &a2->ActiveVcHead;
    a2->InactiveVcHead.Blink = &a2->InactiveVcHead;
    a2->InactiveVcHead.Flink = &a2->InactiveVcHead;
    if ( !a2->SendHandler && !a2->SendPacketsHandler )
    {
      a2->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))NdisOffloadTcpForward;
      a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMRejectSendPackets;
    }
  }
  v14 = a3->DriverHandle;
  if ( a3->MajorNdisVersion < 6u )
    CancelSendPacketsHandler = v14->MiniportCharacteristics.CancelSendPacketsHandler;
  else
    CancelSendPacketsHandler = v14->MiniportDriverCharacteristics.CancelSendHandler;
  a2->CancelSendPacketsHandler = CancelSendPacketsHandler;
  ndisSetupNdis6OpenHandlers(a2, ProtocolHandle, a3);
  if ( a3->MajorNdisVersion >= 6u && a2->ProtocolHandle->MajorNdisVersion < 6u )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( a2->ProtocolHandle->MajorNdisVersion >= 6u )
      goto LABEL_18;
  }
  if ( a3->Miniport5InNdis6Mode || v16 )
  {
    ndisSetOpenToTranslationMode(a2);
    v24 = (_NDIS_STATUS_UNBIND_WORKITEM *)ExAllocatePool2(64LL, 88LL, 1769423950);
    a2->StatusUnbindWorkItem = v24;
    if ( !v24 )
      goto LABEL_63;
    v24->WorkItem.Context = a3;
    a2->StatusUnbindWorkItem->WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedStatusUnbindAdapter;
  }
LABEL_18:
  a2->SavedSendHandler = a2->SendHandler;
  a2->SavedSendPacketsHandler = a2->SendPacketsHandler;
  a2->SavedCancelSendPacketsHandler = a2->CancelSendPacketsHandler;
  if ( !ndisQueueOpenOnMiniport(a3, a2) )
  {
LABEL_63:
    *a1 = -1073676281;
    goto LABEL_64;
  }
  if ( !ndisQueueOpenOnProtocol(a2, ProtocolHandle) )
  {
    *a1 = -1073676281;
LABEL_61:
    ndisDeQueueOpenOnMiniport(a2, a3);
    if ( v5 )
      ndisDeQueueOpenOnProtocol(a2, ProtocolHandle);
    goto LABEL_64;
  }
  EthDB = a3->EthDB;
  v5 = 1;
  if ( EthDB )
    XNoteFilterOpenAdapter(a3->EthDB, a2);
  if ( a3->MediaType == NdisMedium802_3 )
  {
    OpenMulticastBuffer = ethAllocateOpenMulticastBuffer(EthDB, a2);
    *a1 = OpenMulticastBuffer;
    if ( OpenMulticastBuffer )
    {
      *a1 = -1073676281;
LABEL_56:
      if ( EthDB )
        XRemoveBindingFromLists(EthDB, a2);
      goto LABEL_61;
    }
  }
  if ( ProtocolHandle->MajorNdisVersion < 6u && v7 )
  {
    FakeMac[10] = ndisMTransferData;
    FakeMac[11] = ndisMReset;
    FakeMac[12] = a2->RequestHandler;
    FakeMac[9] = a2->SendHandler;
  }
  *a1 = 0;
  v20 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZddZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ProtocolHandle->MajorNdisVersion,
      (__int64)&ProtocolHandle->Name,
      v17,
      v25,
      (char)a3,
      (char)a2,
      &ProtocolHandle->Name.Length,
      ProtocolHandle->MajorNdisVersion,
      ProtocolHandle->MinorNdisVersion,
      &a3->pAdapterInstanceName->Length);
    v20 = *a1;
  }
  if ( v20 )
    goto LABEL_56;
LABEL_28:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v26) = *a1;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      6u,
      0x2Au,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)ProtocolHandle,
      (char)a3,
      (char)a2,
      v26);
  }
}
