/*
 * XREFs of ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007A2F4
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0029F90 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C005B440 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0008C44 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00146B0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020738 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C00251E8 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A1C0 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int PnPFlags; // eax
  unsigned int v9; // edi
  unsigned __int8 v10; // bp
  bool v11; // zf
  bool v12; // cc

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x27u,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved((__int64)a2, 3u, (__int64)a3);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceSurpriseRemoval);
  PnPFlags = a2->PnPFlags;
  v9 = 0;
  a2->Flags |= 4u;
  a2->PnPFlags = PnPFlags & 0xFFFEFFEF | 0x10;
  if ( a3 )
    a3->IoStatus.Status = 0;
  v10 = 1;
  if ( ndisIsMiniportStarted(a2) && a2->PnPDeviceState == NdisPnPDeviceStarted && (a2->PnPFlags & 0x4000) == 0 )
    ndisDevicePnPEventNotifyMiniport(a2, NdisDevicePnPEventSurpriseRemoved, 0LL, 0);
  ndisReferenceMiniportNoCheck(a2, MPREF_PNP_REMOVING);
  ndisReferenceMiniportNoCheck(a2, MPREF_PNP_SURPRISE_REMOVAL);
  v11 = a2->MajorNdisVersion == 6;
  v12 = a2->MajorNdisVersion <= 6u;
  a2->PnPDeviceState = NdisPnPDeviceRemoved;
  if ( v12 && (!v11 || a2->MinorNdisVersion < 0x28u) || (a2->Flags & 0x80u) != 0 )
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
    v10 = 0;
  }
  *a5 = v10;
  *a4 = 0;
  if ( !*a5 && (a2->Flags & 0x80u) == 0 )
    return 259;
  return v9;
}
