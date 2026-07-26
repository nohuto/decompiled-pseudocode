/*
 * XREFs of ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A96C
 * Callers:
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0139680 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0139C10 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00147A8 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C0014AC8 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     WPP_RECORDER_SF_qZD @ 0x1C001555C (WPP_RECORDER_SF_qZD.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025AD8 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00260F4 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026240 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002639C (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0052D8C (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0058744 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7B9C (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7F34 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00CC228 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B30C (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C010C02C (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012CF14 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPmInitializeMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  unsigned __int8 MajorNdisVersion; // r15
  unsigned int Flags; // esi
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
  unsigned int v30; // eax
  _UNICODE_STRING *v31; // r9
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rcx
  unsigned int v33; // eax
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  _UNICODE_STRING *pAdapterInstanceName; // [rsp+38h] [rbp-D0h]
  KIRQL NewIrql[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+5Ch] [rbp-ACh] BYREF
  int v38; // [rsp+60h] [rbp-A8h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v39; // [rsp+68h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+118h] [rbp+10h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+120h] [rbp+18h]
  _DWORD v43[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v44[224]; // [rsp+148h] [rbp+40h] BYREF

  DriverHandle = a1->DriverHandle;
  v38 = 0;
  v37 = 0;
  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v41 = 0LL;
  ifOperStatusFlags = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Eu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a1);
  MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a1->Flags & 0x240) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    a1->Flags &= 0xFFFFFDBF;
  }
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  a1->Flags &= 0x7FCFFFDFu;
  Flags = a1->Flags;
  a1->PnPFlags &= ~0x10u;
  SendFlags = a1->SendFlags;
  ndisMDeQueueWorkItem(a1, NdisWorkItemMiniportCallback, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemSend, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetRequested, 0LL, 0LL);
  ndisMDeQueueWorkItem(a1, NdisWorkItemResetInProgress, 0LL, 0LL);
  a1->CurrentDevicePowerState = PowerDeviceD0;
  a1->PacketList.Blink = &a1->PacketList;
  a1->PacketList.Flink = &a1->PacketList;
  a1->State = NdisMiniportInitializing;
  memset(&v39, 0, sizeof(v39));
  memset(v44, 0, sizeof(v44));
  v7 = a1->Flags & 0xFFFFFFFE;
  a1->LinkStateIndicationFlags = 0;
  v8 = v7 | 0x20000002;
  a1->Flags = v8;
  if ( MajorNdisVersion < 6u )
  {
    v29 = ndisMediumArray;
    a1->GeneralAttributes = (_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *)v44;
    a1->IfBlock->MediaConnectState = MediaConnectStateConnected;
    v10 = ((__int64 (__fastcall *)(int *, int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, void *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
            &v38,
            &v37,
            v29,
            15LL,
            a1,
            a1->ConfigurationHandle);
  }
  else
  {
    v43[1] = a1->DefaultPortSendControlState;
    v43[2] = a1->DefaultPortRcvControlState;
    v43[3] = a1->DefaultPortSendAuthorizationState;
    v43[4] = a1->DefaultPortRcvAuthorizationState;
    AllocatedResources = a1->AllocatedResources;
    v43[0] = 1311104;
    v39.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v39.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v39.IMDeviceInstanceContext = a1->DeviceContext;
    v39.MiniportAddDeviceContext = a1->AddDeviceContext;
    v39.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v43;
    v39.NetLuid.Value = a1->NetLuid.Value;
    v39.IfIndex = a1->IfIndex;
    if ( (v8 & 0x100) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v10 = ndisMInvokeInitialize(a1, &v39);
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
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1,
        pAdapterInstanceName);
    }
    if ( (byte_1C00EE583 & 2) != 0 )
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
  }
  else
  {
    if ( a1->GeneralAttributes )
    {
      a1->State = NdisMiniportPaused;
      ndisMRegisterBugCheckHandler((char *)a1);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
      v16 = a1->Flags;
      a1->PnPFlags &= 0xFFFDBFFB;
      v17 = Flags & 0xDFFFDFFD | v16 & 0x20002040;
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
        a1->GeneralAttributes->MediaConnectState = 2 - ((v33 & 0x20000000) != 0);
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
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
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
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a1);
      }
      if ( v24 && ndisMReferenceIfBlock(a1, 0xBu) )
      {
        IfBlock = a1->IfBlock;
        LODWORD(v41) = 786816;
        HIDWORD(v41) = IfBlock->ifOperStatus;
        ifOperStatusFlags = IfBlock->ifOperStatusFlags;
        StatusIndication.StatusBufferSize = 12;
        StatusIndication.StatusBuffer = &v41;
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
      goto LABEL_38;
    }
    v15 = -1073741823;
  }
  ndisMDeregisterBugCheckHandler(a1);
  if ( a1->TimerQueue || a1->Interrupt || a1->InterruptEx )
  {
    v31 = a1->pAdapterInstanceName;
    if ( a1->Interrupt )
    {
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v31, "Init failed without deregistering interrupt");
      KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->Interrupt, 0LL);
    }
    if ( a1->InterruptEx )
    {
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v31, "Init failed without deregistering interrupt");
      KeBugCheckEx(0x7Cu, 0x10uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->InterruptEx, 0LL);
    }
    DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v31, "Init failed without deregistering timer");
    KeBugCheckEx(0x7Cu, 0x11uLL, (ULONG_PTR)a1, (ULONG_PTR)a1->TimerQueue, 0LL);
  }
  v30 = a1->Flags;
  a1->PnPFlags |= 0x4000u;
  a1->Flags = v30 & 0x7FFFFFFE | 0x80000000;
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
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      pAdapterInstanceName);
  }
  return v15;
}
