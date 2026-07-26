/*
 * XREFs of ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D4C
 * Callers:
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00698A8 (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0145BC4 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014684 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x1C0014744 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x1C0014870 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00148B4 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014940 (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0016750 (WPP_RECORDER_SF_LqZ.c)
 *     PktMonClientComponentUnregister @ 0x1C001C3D8 (PktMonClientComponentUnregister.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C3FC (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020E6C (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021F54 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     NdisMSleep @ 0x1C0040C80 (NdisMSleep.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D994 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?MINIPORT_INTERLOCKED_TEST_FLAG@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0061348 (-MINIPORT_INTERLOCKED_TEST_FLAG@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x1C010F580 (-ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x1C0110B74 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112654 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B40 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01177D0 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0134508 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisNDKCleanup@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138168 (-ndisNDKCleanup@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x1C01384D4 (-ndisNdkPcwMiniportCleanup@@YAXPEAX@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138C20 (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMCommonHaltMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int16 a2)
{
  char v2; // bl
  void (__fastcall *PacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // r14
  char v5; // r15
  KIRQL v7; // dl
  enum _NDIS_HALT_ACTION v8; // esi
  struct _NDIS_NDK_BLOCK *NDKBlock; // rcx
  KIRQL v10; // dl
  KIRQL v11; // dl
  KIRQL v12; // dl
  char v13; // bl
  KIRQL v14; // dl
  _NDIS_AF_LIST *NextAf; // rbx
  KIRQL v16; // dl
  __int64 v17; // rdx
  __int64 v18; // r8
  KIRQL v19; // dl
  signed int Flags; // ecx
  enum _NDIS_HALT_ACTION v21; // r9d
  enum _NDIS_HALT_ACTION v22; // eax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  KIRQL v24; // dl
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v26; // rcx
  _SINGLE_LIST_ENTRY *v27; // rcx
  _NDIS_OBJECT_HEADER *MediaSpecificAttributes; // rcx
  unsigned __int8 *AllocatedPortIndices; // rcx
  unsigned int *ndisSupportedOidList; // rcx
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
  KIRQL v53; // dl
  struct _NDIS_OPEN_BLOCK *v54; // rdx
  void *v55; // r8
  _NDIS_AF_LIST *CallMgrAfList; // rcx
  KIRQL v57; // dl
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  struct NDISWATCHDOG__ *v59; // [rsp+A0h] [rbp+40h] BYREF
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
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
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
  v8 = NdisHaltDevicePoweredDown;
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
    v10 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
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
  v11 = NewIrql;
  a1->LockAcquired = 0;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v11);
  if ( v2 )
    ndisWaitForKernelObject(&Event);
  while ( 1 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( !a1->LockAcquired )
      break;
    v12 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v12);
    KeStallExecutionProcessor(1u);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  if ( a1->DirectOidRequestCount )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v13 = 1;
    a1->AllDirectRequestsCompletedEvent = &Event;
  }
  else
  {
    v13 = 0;
  }
  v14 = NewIrql;
  a1->LockAcquired = 0;
  a1->LockThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v14);
  if ( v13 )
    ndisWaitForKernelObject(&Event);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  NextAf = 0LL;
  if ( a1->NsiOpenReferences )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v16 = NewIrql;
    a1->NsiRequestsCompletedEvent = &Event;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v16);
    ndisWaitForKernelObject(&Event);
    a1->NsiRequestsCompletedEvent = 0LL;
  }
  else
  {
    v19 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v19);
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
  LOBYTE(v21) = 6;
  if ( v5 )
  {
    if ( Flags >= 0 )
    {
      if ( (a1->PnPFlags & 0x100) != 0 )
      {
        v8 = NdisHaltDeviceFailed;
      }
      else
      {
        v8 = NdisHaltDeviceSurpriseRemoved;
        if ( (Flags & 0x8000) != 0 && a1->PnPDeviceState == NdisPnPDeviceStopped )
        {
          v8 = NdisHaltDeviceInstanceDeInitialized;
        }
        else if ( !MINIPORT_INTERLOCKED_TEST_FLAG(a1, 4) )
        {
          v22 = NdisHaltDeviceDisabled;
          if ( a1->PnPDeviceState == NdisPnPDeviceStopped )
            v22 = v21;
          v8 = v22;
        }
      }
    }
  }
  else
  {
    v8 = NdisHaltDeviceInitializationFailed;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      v18,
      0x1Cu,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      v8,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
    LOBYTE(v21) = 6;
  }
  if ( a1->MajorNdisVersion < (unsigned __int8)v21 )
  {
    ((void (__fastcall *)(void *))a1->DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx)(a1->MiniportAdapterContext);
  }
  else if ( (a1->Flags & 0x100) == 0 )
  {
    ndisMakeWatchdog(&v59, a1, 34, a1->DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx, 0x41EB0u, 0LL);
    ndisMInvokeHalt(a1, v8);
    if ( v59 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v59);
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
    v24 = NewIrql;
    if ( MiniportSGDmaBlock )
    {
      MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v24);
      ndisWaitForKernelObject(&Event, 30000LL);
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v24);
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
    v26 = a1->WOLPatternList.Next;
    if ( !v26 )
      break;
    a1->WOLPatternList = (_SINGLE_LIST_ENTRY)v26->Next;
    ExFreePoolWithTag(v26, 0);
  }
  while ( 1 )
  {
    v27 = a1->PMProtocolOffloadList.Next;
    if ( !v27 )
      break;
    a1->PMProtocolOffloadList = (_SINGLE_LIST_ENTRY)v27->Next;
    ExFreePoolWithTag(v27, 0);
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
  PktMonClientComponentUnregister(&a1->PktMonComp.ListLink.Flink);
  if ( a1 == ndisMiniportTrackAlloc )
    ndisMiniportTrackAlloc = 0LL;
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
    memset(BottomIfStats, 0, 112LL * ndisMaxNumberOfProcessors);
  if ( a1->TimerQueue )
    goto LABEL_152;
  if ( a1->Interrupt )
    goto LABEL_136;
  if ( a1->InterruptEx )
  {
LABEL_152:
    if ( a1->Interrupt )
    {
LABEL_136:
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
  }
  while ( 1 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( !a1->LockAcquired )
      break;
    v53 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v53);
    KeStallExecutionProcessor(1u);
  }
  a1->LockAcquired = 1;
  a1->LockThread = KeGetCurrentThread();
  ndisMAbortPackets(a1, v54, v55);
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
  v57 = NewIrql;
  a1->LockAcquired = (unsigned __int8)NextAf;
  a1->LockThread = NextAf;
  a1->MiniportThread = NextAf;
  KeReleaseSpinLock(&a1->Lock, v57);
  if ( (a1->Flags & 0x80) == 0 )
    a1->MiniportAdapterContext = NextAf;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Du,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      a1);
}
