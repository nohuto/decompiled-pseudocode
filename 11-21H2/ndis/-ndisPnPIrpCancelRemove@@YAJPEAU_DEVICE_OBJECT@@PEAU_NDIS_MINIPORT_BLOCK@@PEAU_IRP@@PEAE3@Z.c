/*
 * XREFs of ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0079C68
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0029F90 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0014340 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0058D64 (-ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpCancelRemove(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v9; // esi

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x22u,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceCancelRemove);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v9 = IoSynchronousCallDriver(a2->NextDeviceObject, a3);
  if ( v9 >= 0 )
  {
    if ( a2->PnPDeviceState == NdisPnPDeviceQueryRemoved )
      a2->PnPDeviceState = a2->OldPnPDeviceState;
    ndisPnPCancelRemoveDevice(a2);
    ndisPowerSaveClearStop((__int64)a2, 1u);
  }
  *a4 = 1;
  *a5 = 0;
  return (unsigned int)v9;
}
