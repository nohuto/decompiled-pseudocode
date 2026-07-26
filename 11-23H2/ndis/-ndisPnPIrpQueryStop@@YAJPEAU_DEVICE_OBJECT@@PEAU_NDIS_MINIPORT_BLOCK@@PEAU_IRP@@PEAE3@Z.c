/*
 * XREFs of ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F564
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A880 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00183E8 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020FFC (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisPnPQueryStopDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C01533E4 (-ndisPnPQueryStopDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpQueryStop(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        bool *a5)
{
  struct _IRP *v7; // rdx
  int v8; // edx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x28u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceQueryStop);
  if ( a2->PagingPathCount )
  {
    v8 = -1073741823;
  }
  else
  {
    ndisPowerSaveStop((__int64)a2, 4LL);
    a2->OldPnPDeviceState = a2->PnPDeviceState;
    a2->PnPDeviceState = NdisPnPDeviceQueryStopped;
    v8 = ndisPnPQueryStopDevice(a2, v7);
  }
  a3->IoStatus.Status = v8;
  *a5 = v8 >= 0;
  return (unsigned int)v8;
}
