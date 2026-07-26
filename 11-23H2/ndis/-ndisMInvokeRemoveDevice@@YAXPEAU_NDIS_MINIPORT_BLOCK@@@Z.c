/*
 * XREFs of ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C6A0
 * Callers:
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C8B4 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ??$?0X$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023EEC (--$-0X$0A@$0A@@-$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D1638 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

void __fastcall ndisMInvokeRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  void *AddDeviceContext; // rcx
  unsigned __int16 v4; // r9
  _QWORD v5[6]; // [rsp+40h] [rbp-38h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( !DriverHandle->RemoveDeviceHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v4 = 208;
    goto LABEL_8;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCEu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)DriverHandle,
      a1);
  AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>(
    (__int64)v5,
    (__int64)a1);
  AddDeviceContext = a1->AddDeviceContext;
  v5[0] = &AzTelemetry::MiniportRemoveDeviceTelemetry::`vftable';
  DriverHandle->RemoveDeviceHandler(AddDeviceContext);
  AzTelemetry::MiniportRemoveDeviceTelemetry::~MiniportRemoveDeviceTelemetry((AzTelemetry::MiniportRemoveDeviceTelemetry *)v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v4 = 207;
LABEL_8:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      v4,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)DriverHandle,
      a1);
  }
}
