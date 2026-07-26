/*
 * XREFs of ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F7B4
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A6F0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C0060690 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00141F4 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020E6C (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C0023A44 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0024220 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026C28 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135E94 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // edi
  unsigned __int8 v9; // bp
  bool v10; // zf
  bool v11; // cc

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x27u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceSurpriseRemoval);
  _InterlockedOr((volatile signed __int32 *)&a2->InterlockedFlags, 0x200u);
  v8 = 0;
  a2->PnPFlags = a2->PnPFlags & 0xFFFEFFEF | 0x10;
  if ( a3 )
    a3->IoStatus.Status = 0;
  v9 = 1;
  if ( ndisIsMiniportStarted(a2) && a2->PnPDeviceState == NdisPnPDeviceStarted && (a2->PnPFlags & 0x4000) == 0 )
    ndisDevicePnPEventNotifyMiniport(a2, NdisDevicePnPEventSurpriseRemoved, 0LL, 0);
  ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  ndisReferenceMiniportNoCheck(a2, 0x1Du);
  v10 = a2->MajorNdisVersion == 6;
  v11 = a2->MajorNdisVersion <= 6u;
  a2->PnPDeviceState = NdisPnPDeviceRemoved;
  if ( v11 && (!v10 || a2->MinorNdisVersion < 0x28u) || (a2->Flags & 0x80u) != 0 )
  {
    ndisPnPIrpSurpriseRemovalInner(a2);
  }
  else
  {
    if ( a3 )
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    a2->SurpriseRemovalWorkItem.Irp = a3;
    a2->SurpriseRemovalWorkItem.Workitem.Parameter = &a2->SurpriseRemovalWorkItem;
    a2->SurpriseRemovalWorkItem.Workitem.WorkerRoutine = ndisQueuedPnPIrpSurpriseRemoval;
    a2->SurpriseRemovalWorkItem.Workitem.List.Flink = 0LL;
    ExQueueWorkItem(&a2->SurpriseRemovalWorkItem.Workitem, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    v9 = 0;
  }
  *a5 = v9;
  *a4 = 0;
  if ( !*a5 && (a2->Flags & 0x80u) == 0 )
    return 259;
  return v8;
}
