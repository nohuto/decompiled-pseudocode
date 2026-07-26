/*
 * XREFs of ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C
 * Callers:
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009C80 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014350 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZD @ 0x1C001471C (WPP_RECORDER_SF_qZD.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C0014A00 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020FFC (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0021284 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024C18 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00251B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025324 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00254AC (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0058198 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D9B4 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00ADD3C (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0D8 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00D2688 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116BFC (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C01171F8 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138CE8 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned __int8 MajorNdisVersion; // r15
  unsigned int v5; // esi
  unsigned __int8 SendFlags; // r14
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rcx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v23; // rcx
  int v24; // edi
  KIRQL v25; // dl
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v27; // rcx
  PVOID v29; // r8
  unsigned int Flags; // eax
  _UNICODE_STRING *v31; // r9
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rcx
  unsigned int v33; // eax
  bool v34; // zf
  _NET_IF_MEDIA_CONNECT_STATE v35; // eax
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  _UNICODE_STRING *pAdapterInstanceName; // [rsp+38h] [rbp-D0h]
  KIRQL NewIrql[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v39; // [rsp+5Ch] [rbp-ACh] BYREF
  int v40; // [rsp+60h] [rbp-A8h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v41; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+118h] [rbp+10h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+120h] [rbp+18h]
  _DWORD v45[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v46[224]; // [rsp+148h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v40 = 0;
  v39 = 0;
  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v43 = 0LL;
  ifOperStatusFlags = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Eu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a1);
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a1->Flags & 0x240) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    a1->Flags &= 0xFFFFFDBF;
  }
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  v5 = a1->Flags & 0x7FCFFFDF;
  a1->PnPFlags &= ~0x10u;
  SendFlags = a1->SendFlags;
  a1->Flags = v5;
  ndisMDeQueueWorkItem(a1, NdisWorkItemMiniportCallback, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetRequested, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetInProgress, 0LL, 0LL);
  a1->CurrentDevicePowerState = PowerDeviceD0;
  a1->PacketList.Blink = &a1->PacketList;
  a1->PacketList.Flink = &a1->PacketList;
  a1->State = NdisMiniportInitializing;
  memset(&v41, 0, sizeof(v41));
  memset(v46, 0, sizeof(v46));
  v7 = a1->Flags & 0xFFFFFFFE;
  a1->LinkStateIndicationFlags = 0;
  v8 = v7 | 0x20000002;
  a1->Flags = v8;
  if ( MajorNdisVersion < 6u )
  {
    v29 = ndisMediumArray;
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v46;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v10 = ((__int64 (__fastcall *)(int *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
            &v40,
            &v39,
            v29,
            15LL,
            a1,
            a1->ConfigurationHandle);
  }
  else
  {
    v45[1] = a1->DefaultPortSendControlState;
    v45[2] = a1->DefaultPortRcvControlState;
    v45[3] = a1->DefaultPortSendAuthorizationState;
    v45[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v45[0] = 1311104;
    v41.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v41.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v41.IMDeviceInstanceContext = a1->DeviceContext;
    v41.MiniportAddDeviceContext = a1->AddDeviceContext;
    v41.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v45;
    v41.NetLuid.Value = a1->NetLuid.Value;
    v41.IfIndex = a1->IfIndex;
    if ( (v8 & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v10 = ndisMInvokeInitialize(a1, &v41);
  }
  v15 = v10;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    pAdapterInstanceName = a1->pAdapterInstanceName;
    WPP_RECORDER_SF_qZD(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v13, v14, BugCheckParameter4);
  }
  if ( v15 )
  {
    a1->State = NdisMiniportHalted;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(pAdapterInstanceName) = v15;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x30u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)a1,
        pAdapterInstanceName);
    }
    if ( (byte_1C00F7643 & 2) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v12,
        &MiniportInitializeHandlerFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v15,
        1,
        0);
LABEL_54:
    ndisMDeregisterBugCheckHandler(a1);
    if ( !a1->TimerQueue )
    {
      if ( a1->Interrupt )
        goto LABEL_61;
      if ( !a1->InterruptEx )
      {
        Flags = a1->Flags;
        a1->PnPFlags |= 0x4000u;
        a1->Flags = Flags & 0x7FFFFFFE | 0x80000000;
        goto LABEL_38;
      }
    }
    if ( !a1->Interrupt )
    {
      v31 = a1->pAdapterInstanceName;
      if ( a1->InterruptEx )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v31, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v31, "Init failed without deregistering timer");
      KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
    }
LABEL_61:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1->pAdapterInstanceName,
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
  }
  if ( !a1->GeneralAttributes )
  {
    v15 = -1073741823;
    goto LABEL_54;
  }
  a1->State = NdisMiniportPaused;
  ndisMRegisterBugCheckHandler((char *)a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  v16 = a1->Flags;
  a1->PnPFlags &= 0xFFFDBFFB;
  v17 = v5 & 0xDFFFDFFD | v16 & 0x20002040;
  a1->SendFlags = SendFlags;
  a1->Flags = v17;
  if ( MajorNdisVersion < 6u )
  {
    Interrupt = a1->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
      v33 = v17 & 0xFFFFFFFE;
    else
      v33 = v17 | 1;
    a1->Flags = v33;
    v34 = (v33 & 0x20000000) == 0;
    v35 = MediaConnectStateConnected;
    if ( v34 )
      v35 = MediaConnectStateDisconnected;
    a1->GeneralAttributes->MediaConnectState = v35;
    a1->GeneralAttributes->MediaDuplexState = MediaDuplexStateUnknown;
    a1->GeneralAttributes->MaxXmitLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->XmitLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->MaxRcvLinkSpeed = 0x40000000LL;
    a1->GeneralAttributes->RcvLinkSpeed = 0x40000000LL;
  }
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = a1->GeneralAttributes->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    GeneralAttributes = a1->GeneralAttributes;
    a1->MiniportRcvLinkSpeed = GeneralAttributes->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = GeneralAttributes->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = GeneralAttributes->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = GeneralAttributes->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = a1->GeneralAttributes->MediaConnectState;
    v21 = a1->Flags;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      v22 = v21 | 0x20000000;
    else
      v22 = v21 & 0xDFFFFFFF;
    a1->Flags = v22;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    v23 = a1->GeneralAttributes;
    a1->RcvLinkSpeed = v23->RcvLinkSpeed;
    a1->XmitLinkSpeed = v23->XmitLinkSpeed;
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = a1->GeneralAttributes->MediaDuplexState;
  v24 = (unsigned __int8)ndisIfSetInterfaceState(a1, 0, NewIrql[0]);
  if ( (a1->Flags & 0x20000000) != 0 )
    ndisMSetIndicatePacketHandler(a1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x31u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a1);
  ndisSetWakeUpTimer(a1);
  v25 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v25);
  ndisMDoOidRequest(a1);
  ndisMNotifyMachineName(a1);
  if ( IoWMIRegistrationControl(a1->DeviceObject, 1u) < 0
    && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0x32u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a1);
  }
  if ( v24 && ndisMReferenceIfBlock(a1, 0xBu) )
  {
    IfBlock = a1->IfBlock;
    LODWORD(v43) = 786816;
    HIDWORD(v43) = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    StatusIndication.StatusBufferSize = 12;
    StatusIndication.StatusBuffer = &v43;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807395;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    ndisMDereferenceIfBlock(a1, MPIFREF_PMINIT);
  }
  ndisUpdatePMCurrentCapabilities(a1);
  a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
  v15 = 0;
  ndisLogMiniportEvent(a1, NdisMEvent_MiniportPmInitialized);
  if ( (a1->PMAdvertisedCapabilities.Flags & 6) != 0 )
  {
    ndisSelectiveSuspendInitialize(a1);
    if ( a1->SelectiveSuspend )
    {
      ndisSelectiveSuspendClearStop(a1, 9);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendStop(a1, 7);
    }
  }
  if ( a1->AoAc )
    ndisAoAcPmInitTempRef(a1);
LABEL_38:
  v27 = a1->GeneralAttributes;
  if ( v27 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v27, 0);
    a1->GeneralAttributes = 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(pAdapterInstanceName) = v15;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x33u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a1,
      pAdapterInstanceName);
  }
  return v15;
}
