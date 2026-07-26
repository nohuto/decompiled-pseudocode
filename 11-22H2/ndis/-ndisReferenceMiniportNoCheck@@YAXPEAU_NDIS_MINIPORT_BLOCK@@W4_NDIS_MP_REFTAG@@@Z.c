/*
 * XREFs of ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0024220
 * Callers:
 *     ?ndisSetDevicePowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0017ED0 (-ndisSetDevicePowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0025928 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ndisQueueDpcWorkItem @ 0x1C003D186 (ndisQueueDpcWorkItem.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x1C003EAA0 (ndisQueuePeriodicReceivesWorkItem.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C005EFA0 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisMFreeSharedMemory @ 0x1C005F970 (NdisMFreeSharedMemory.c)
 *     NdisMPromoteMiniport @ 0x1C006F770 (NdisMPromoteMiniport.c)
 *     ?ndisPnPQuerySriovInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007A2BC (-ndisPnPQuerySriovInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisSriovInterfaceReference@@YAXPEAX@Z @ 0x1C007A4A0 (-ndisSriovInterfaceReference@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F7B4 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C008289C (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A320 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00BCA30 (NdisClOpenAddressFamilyEx.c)
 *     ndis5InterruptDpc @ 0x1C00C6F20 (ndis5InterruptDpc.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C010FD30 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135C20 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01362AC (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0148B30 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 */

void __fastcall ndisReferenceMiniportNoCheck(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _ULONG_REFERENCE *p_Ref; // rbx
  KIRQL v5; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v7; // si
  unsigned int ReferenceCount; // [rsp+30h] [rbp-18h]

  p_Ref = &a1->Ref;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v7 = v5;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, a2);
  ++p_Ref->ReferenceCount;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ReferenceCount = a1->Ref.ReferenceCount;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xDu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      ReferenceCount);
  }
  KeReleaseSpinLock(&p_Ref->SpinLock, v7);
}
