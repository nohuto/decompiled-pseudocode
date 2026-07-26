/*
 * XREFs of ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C013A30C
 * Callers:
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00648D4 (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139F48 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00148DC (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C001499C (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C0014AC8 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015328 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015420 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00154AC (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001E014 (--1-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@YAX0.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x1C0020E48 (PktMonClientComponentUnregister.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00244CC (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0058744 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x1C0104190 (-ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0104BD0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x1C01054B8 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010BDB8 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0128870 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisNDKCleanup@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C414 (-ndisNDKCleanup@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x1C012C76C (-ndisNdkPcwMiniportCleanup@@YAXPEAX@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012CE28 (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMCommonHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2)
{
  char v2; // bl
  void (__fastcall *PacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // r14
  char v5; // r12
  KIRQL v7; // dl
  unsigned int v8; // esi
  struct _NDIS_NDK_BLOCK *NDKBlock; // rcx
  KIRQL v10; // dl
  char v11; // bl
  KIRQL v12; // dl
  KIRQL v13; // dl
  __int64 v14; // r8
  signed int Flags; // ecx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v17; // rcx
  _SINGLE_LIST_ENTRY *v18; // rcx
  _NDIS_OBJECT_HEADER *MediaSpecificAttributes; // rcx
  unsigned __int8 *AllocatedPortIndices; // rcx
  unsigned __int8 *AllocatedQueueIndices; // rcx
  unsigned __int8 *AllocatedReceiveFilterIndices; // rcx
  unsigned __int8 *AllocatedVPortIndices; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterHwCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  _NDIS_QOS_CAPABILITIES *QosHwCapabilities; // rcx
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rcx
  _NDIS_QOS_PARAMETERS *QosOperationalParameters; // rcx
  _NDIS_QOS_PARAMETERS *QosRemoteParameters; // rcx
  struct _NDIS_PD_BLOCK *PDBlock; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rcx
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rcx
  _NDIS_MINIPORT_STATS *BottomIfStats; // rcx
  struct _NDIS_OPEN_BLOCK *v43; // rdx
  void *v44; // r8
  _NDIS_AF_LIST *CallMgrAfList; // rcx
  KIRQL v46; // dl
  KIRQL v47; // dl
  KIRQL v48; // dl
  KIRQL v49; // dl
  int v50; // eax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  KIRQL v52; // dl
  unsigned int *ndisSupportedOidList; // rcx
  KIRQL v54; // dl
  _NDIS_AF_LIST *NextAf; // rbx
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  struct NDISWATCHDOG__ *v57; // [rsp+A0h] [rbp+40h] BYREF
  KIRQL NewIrql; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  NewIrql = 0;
  memset(&Event, 0, sizeof(Event));
  v5 = a2 & 0x10;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Bu,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v7 = NewIrql;
  a1->PnPFlags |= 0xA0000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  ndisWaitForResetCompletion(a1);
  if ( (a2 & 4) != 0 )
    IoSetDeviceInterfaceState(&a1->SymbolicLinkName, 0);
  if ( (a2 & 0x40) != 0 )
    IoSetDeviceInterfaceState(&a1->DevinterfaceNetSymbolicLinkName, 0);
  if ( (a2 & 0x100) != 0 && a1->DevinterfaceVirtSymbolicLinkName.Buffer )
  {
    IoSetDeviceInterfaceState(&a1->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&a1->DevinterfaceVirtSymbolicLinkName);
    v2 = 0;
    a1->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
  }
  v8 = 2;
  if ( (a2 & 2) != 0 )
    IoWMIRegistrationControl(a1->DeviceObject, 2u);
  if ( (a2 & 8) != 0 )
    ndisCancelWakeUpDpcTimer(a1);
  ndisCancelInitModeTimeoutTimer(a1, 1);
  NDKBlock = (struct _NDIS_NDK_BLOCK *)a1->NDKBlock;
  if ( NDKBlock )
    ndisNdkPcwMiniportCleanup(NDKBlock);
  while ( 1 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( !a1->LockAcquired )
      break;
    v47 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v47);
    KeStallExecutionProcessor(1u);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  if ( a1->OidRequestList.Flink != &a1->OidRequestList || (a1->WSyncFlags & 1) != 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v2 = 1;
    a1->AllRequestsCompletedEvent = &Event;
  }
  v10 = NewIrql;
  a1->LockAcquired = 0;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
  if ( v2 )
    ndisWaitForKernelObject(&Event);
  while ( 1 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( !a1->LockAcquired )
      break;
    v48 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v48);
    KeStallExecutionProcessor(1u);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  if ( a1->DirectOidRequestCount )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = 1;
    a1->AllDirectRequestsCompletedEvent = &Event;
  }
  else
  {
    v11 = 0;
  }
  v12 = NewIrql;
  a1->LockAcquired = 0;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
  if ( v11 )
    ndisWaitForKernelObject(&Event);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( a1->NsiOpenReferences )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v49 = NewIrql;
    a1->NsiRequestsCompletedEvent = &Event;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v49);
    ndisWaitForKernelObject(&Event);
    a1->NsiRequestsCompletedEvent = 0LL;
  }
  else
  {
    v13 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v13);
  }
  Flags = a1->Flags;
  if ( (Flags & 0x8000) != 0 )
  {
    PacketIndicateHandler = a1->PacketIndicateHandler;
    a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
    if ( a1->IndicatedPacketsCount )
    {
      do
        NdisMSleep(0x3E8u);
      while ( a1->IndicatedPacketsCount );
      Flags = a1->Flags;
    }
  }
  if ( v5 )
  {
    if ( Flags >= 0 )
    {
      if ( (a1->PnPFlags & 0x100) != 0 )
      {
        v8 = 4;
      }
      else
      {
        v8 = 3;
        if ( (Flags & 0x8000) != 0 && a1->PnPDeviceState == NdisPnPDeviceStopped )
        {
          v8 = 1;
        }
        else if ( (Flags & 4) == 0 )
        {
          v50 = 0;
          if ( a1->PnPDeviceState == NdisPnPDeviceStopped )
            v50 = 6;
          v8 = v50;
        }
      }
    }
  }
  else
  {
    v8 = 5;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      6LL,
      v14,
      0x1Cu,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      v8,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
    Flags = a1->Flags;
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx(a1->MiniportAdapterContext, NdisHaltDeviceStopped);
  }
  else if ( (Flags & 0x100) == 0 )
  {
    ndisMakeWatchdog(&v57, a1, 34, a1->DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx, 0x41EB0u, 0LL);
    ndisMInvokeHalt(a1, v8);
    wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>(&v57);
  }
  a1->State = NdisMiniportHalted;
  ndisLogMiniportEvent(a1, NdisMEvent_MiniportHalted);
  if ( (a1->Flags & 0x8000) != 0 )
    a1->PacketIndicateHandler = PacketIndicateHandler;
  a1->PnPFlags &= ~0x80000u;
  ndisCancelMediaDisconnectTimer(a1);
  if ( (a1->PnPFlags & 0x4000) == 0 )
  {
    if ( (a1->Flags & 0x40) != 0 )
      ndisDereferenceDmaAdapter(a1->MiniportSGDmaBlock);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
    v52 = NewIrql;
    if ( MiniportSGDmaBlock )
    {
      MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v52);
      ndisWaitForKernelObject(&Event, 30000LL);
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v52);
    }
    a1->Flags &= ~0x40u;
  }
  if ( a1->GeneralAttributes )
    a1->GeneralAttributes = 0LL;
  while ( 1 )
  {
    Next = a1->PatternList.Next;
    if ( !Next )
      break;
    a1->PatternList = (_SINGLE_LIST_ENTRY)Next->Next;
    ExFreePoolWithTag(Next, 0);
  }
  while ( 1 )
  {
    v17 = a1->WOLPatternList.Next;
    if ( !v17 )
      break;
    a1->WOLPatternList = (_SINGLE_LIST_ENTRY)v17->Next;
    ExFreePoolWithTag(v17, 0);
  }
  while ( 1 )
  {
    v18 = a1->PMProtocolOffloadList.Next;
    if ( !v18 )
      break;
    a1->PMProtocolOffloadList = (_SINGLE_LIST_ENTRY)v18->Next;
    ExFreePoolWithTag(v18, 0);
  }
  MediaSpecificAttributes = a1->MediaSpecificAttributes;
  if ( MediaSpecificAttributes )
  {
    ExFreePoolWithTag(MediaSpecificAttributes, 0);
    a1->MediaSpecificAttributes = 0LL;
  }
  AllocatedPortIndices = a1->AllocatedPortIndices;
  if ( AllocatedPortIndices )
  {
    ExFreePoolWithTag(AllocatedPortIndices, 0);
    a1->AllocatedPortIndices = 0LL;
    a1->AllocatedPortIndicesLength = 0;
  }
  if ( (a2 & 0x80u) != 0 )
  {
    ndisSupportedOidList = a1->ndisSupportedOidList;
    if ( ndisSupportedOidList )
    {
      ExFreePoolWithTag(ndisSupportedOidList, 0);
      a1->ndisSupportedOidList = 0LL;
      a1->ndisSupportedOidListLength = 0;
    }
  }
  AllocatedQueueIndices = a1->AllocatedQueueIndices;
  if ( AllocatedQueueIndices )
  {
    ExFreePoolWithTag(AllocatedQueueIndices, 0);
    a1->AllocatedQueueIndices = 0LL;
    a1->AllocatedQueueIndicesLength = 0;
  }
  AllocatedReceiveFilterIndices = a1->AllocatedReceiveFilterIndices;
  if ( AllocatedReceiveFilterIndices )
  {
    ExFreePoolWithTag(AllocatedReceiveFilterIndices, 0);
    a1->AllocatedReceiveFilterIndices = 0LL;
    a1->AllocatedReceiveFilterIndicesLength = 0;
  }
  AllocatedVPortIndices = a1->AllocatedVPortIndices;
  if ( AllocatedVPortIndices )
  {
    ExFreePoolWithTag(AllocatedVPortIndices, 0);
    a1->AllocatedVPortIndices = 0LL;
    a1->AllocatedVPortIndicesLength = 0;
  }
  ReceiveFilterHwCapabilities = a1->ReceiveFilterHwCapabilities;
  if ( ReceiveFilterHwCapabilities )
  {
    ExFreePoolWithTag(ReceiveFilterHwCapabilities, 0);
    a1->ReceiveFilterHwCapabilities = 0LL;
  }
  ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
  if ( ReceiveFilterCurrentCapabilities )
  {
    ExFreePoolWithTag(ReceiveFilterCurrentCapabilities, 0);
    a1->ReceiveFilterCurrentCapabilities = 0LL;
  }
  TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
  if ( TopReceiveFilterCurrentCapabilities )
  {
    ExFreePoolWithTag(TopReceiveFilterCurrentCapabilities, 0);
    a1->TopReceiveFilterCurrentCapabilities = 0LL;
  }
  NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities;
  if ( NicSwitchHwCapabilities )
  {
    ExFreePoolWithTag(NicSwitchHwCapabilities, 0);
    a1->NicSwitchHwCapabilities = 0LL;
  }
  NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
  if ( NicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(NicSwitchCurrentCapabilities, 0);
    a1->NicSwitchCurrentCapabilities = 0LL;
  }
  TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
  if ( TopNicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(TopNicSwitchCurrentCapabilities, 0);
    a1->TopNicSwitchCurrentCapabilities = 0LL;
  }
  SriovHwCapabilities = a1->SriovHwCapabilities;
  if ( SriovHwCapabilities )
  {
    ExFreePoolWithTag(SriovHwCapabilities, 0);
    a1->SriovHwCapabilities = 0LL;
  }
  SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
  if ( SriovCurrentCapabilities )
  {
    ExFreePoolWithTag(SriovCurrentCapabilities, 0);
    a1->SriovCurrentCapabilities = 0LL;
  }
  QosHwCapabilities = a1->QosHwCapabilities;
  if ( QosHwCapabilities )
  {
    ExFreePoolWithTag(QosHwCapabilities, 0);
    a1->QosHwCapabilities = 0LL;
  }
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( QosCurrentCapabilities )
  {
    ExFreePoolWithTag(QosCurrentCapabilities, 0);
    a1->QosCurrentCapabilities = 0LL;
  }
  QosOperationalParameters = a1->QosOperationalParameters;
  if ( QosOperationalParameters )
  {
    ExFreePoolWithTag(QosOperationalParameters, 0);
    a1->QosOperationalParameters = 0LL;
    a1->QosOperationalParametersBufferSize = 0;
  }
  QosRemoteParameters = a1->QosRemoteParameters;
  if ( QosRemoteParameters )
  {
    ExFreePoolWithTag(QosRemoteParameters, 0);
    a1->QosRemoteParameters = 0LL;
    a1->QosRemoteParametersBufferSize = 0;
  }
  if ( a1->NDKBlock )
  {
    ndisNDKCleanup(a1);
    a1->NDKBlock = 0LL;
  }
  PDBlock = a1->PDBlock;
  if ( PDBlock )
    ndisPDCleanupPDBlock(PDBlock);
  HwTimestampCurrentConfig = a1->HwTimestampCurrentConfig;
  if ( HwTimestampCurrentConfig )
  {
    ExFreePoolWithTag(HwTimestampCurrentConfig, 0);
    a1->HwTimestampCurrentConfig = 0LL;
  }
  HwTimestampCapabilities = a1->HwTimestampCapabilities;
  if ( HwTimestampCapabilities )
  {
    ExFreePoolWithTag(HwTimestampCapabilities, 0);
    a1->HwTimestampCapabilities = 0LL;
  }
  TopTimestampConfig = a1->TopTimestampConfig;
  if ( TopTimestampConfig )
  {
    ExFreePoolWithTag(TopTimestampConfig, 0);
    a1->TopTimestampConfig = 0LL;
  }
  TopHwTimestampCapabilities = a1->TopHwTimestampCapabilities;
  if ( TopHwTimestampCapabilities )
  {
    ExFreePoolWithTag(TopHwTimestampCapabilities, 0);
    a1->TopHwTimestampCapabilities = 0LL;
  }
  PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
  if ( PhysicalPerformanceCounters )
  {
    ExFreePoolWithTag(PhysicalPerformanceCounters, 0);
    a1->PhysicalPerformanceCounters = 0LL;
  }
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendFree(a1);
  PktMonClientComponentUnregister((__int64 *)&a1->PktMonComp);
  if ( a1 == ndisMiniportTrackAlloc )
    ndisMiniportTrackAlloc = 0LL;
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
    memset(BottomIfStats, 0, 112LL * ndisMaxNumberOfProcessors);
  if ( !a1->TimerQueue )
  {
    if ( a1->Interrupt )
      goto LABEL_143;
    if ( !a1->InterruptEx )
      goto LABEL_100;
  }
  if ( a1->Interrupt )
  {
LABEL_143:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1->pAdapterInstanceName,
      "Halting without deregistering interrupt");
    KeBugCheckEx(
      0x7Cu,
      (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13,
      (ULONG_PTR)a1,
      (ULONG_PTR)a1->Interrupt,
      0LL);
  }
  if ( a1->InterruptEx )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1->pAdapterInstanceName,
      "Halting without deregistering interrupt");
    KeBugCheckEx(
      0x7Cu,
      (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 13,
      (ULONG_PTR)a1,
      (ULONG_PTR)a1->InterruptEx,
      0LL);
  }
  if ( (a1->Flags & 0x80) == 0 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1->pAdapterInstanceName,
      "Halting without deregistering timer");
    KeBugCheckEx(
      0x7Cu,
      (-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFFBuLL) + 14,
      (ULONG_PTR)a1,
      (ULONG_PTR)a1->TimerQueue,
      0LL);
  }
LABEL_100:
  while ( 1 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( !a1->LockAcquired )
      break;
    v54 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v54);
    KeStallExecutionProcessor(1u);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  ndisMAbortPackets(a1, v43, v44);
  ndisMDeQueueWorkItem(a1, NdisWorkItemRequest, 0LL, 0LL);
  ndisMAbortRequests(a1);
  if ( (a2 & 0x20) != 0 )
  {
    CallMgrAfList = a1->CallMgrAfList;
    a1->CallMgrAfList = 0LL;
    if ( CallMgrAfList )
    {
      do
      {
        NextAf = CallMgrAfList->NextAf;
        ExFreePoolWithTag(CallMgrAfList, 0);
        CallMgrAfList = NextAf;
      }
      while ( NextAf );
    }
  }
  v46 = NewIrql;
  a1->LockAcquired = 0;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v46);
  if ( (a1->Flags & 0x80) == 0 )
    a1->MiniportAdapterContext = 0LL;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Du,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      a1);
}
