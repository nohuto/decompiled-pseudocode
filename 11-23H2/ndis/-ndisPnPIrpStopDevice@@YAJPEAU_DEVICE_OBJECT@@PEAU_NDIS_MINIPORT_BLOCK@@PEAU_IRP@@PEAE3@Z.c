/*
 * XREFs of ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F62C
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A880 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00606B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C0014384 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00183E8 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001F354 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020FFC (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022ACC (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005D9B4 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005E27C (-ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0155AE4 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x2Au,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceStop);
  ndisPowerSaveStop((__int64)a2, 5LL);
  a2->PnPFlags &= ~0x10000u;
  a2->PnPDeviceState = NdisPnPDeviceStopped;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a2->PnPDeviceState = NdisPnPDeviceStopped;
  a2->RemoveReadyEvent = &Event;
  ndisReferenceMiniport(a2, 0x1Cu);
  a2->PnPFlags |= 0x10u;
  ndisPnPStopDevice(a2);
  if ( a2->RemoveReadyEvent )
  {
    ndisDereferenceMiniport(a2, 0x1Cu);
    ndisWaitForKernelObject(&Event);
    a2->RemoveReadyEvent = 0LL;
  }
  MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a2->Flags & 0x40) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    a2->Flags &= ~0x40u;
  }
  if ( ndisIsMiniportStarted(a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, a2->DriverHandle);
    ndisDereferenceDriver(a2->DriverHandle, 0, 2u);
    if ( (a2->Flags & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C00F4178);
      _InterlockedDecrement((volatile signed __int32 *)&dword_1C00F4168);
    }
  }
  if ( a3 )
    a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
