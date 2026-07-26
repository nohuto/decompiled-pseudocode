/*
 * XREFs of ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006C518
 * Callers:
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0035B58 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??$?0H$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@H@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBH@Z @ 0x1C0069998 (--$-0H$0A@$0A@@-$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@H@Details@AzTelemetry@@QEAA@PEBU_NDIS.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1C00D1564 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void *AddDeviceContext; // rcx
  char v7[4]; // [rsp+30h] [rbp-58h]
  _QWORD v8[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+90h] [rbp+8h] BYREF

  DriverHandle = a1->DriverHandle;
  v9 = 0;
  if ( DriverHandle->FilterResourceRequirementsHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD1u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        a1);
    AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>(
      (__int64)v8,
      (__int64)a1,
      (__int64)&v9);
    AddDeviceContext = a1->AddDeviceContext;
    v8[0] = &AzTelemetry::MiniportFilterResourceRequirements::`vftable';
    v9 = a1->DriverHandle->FilterResourceRequirementsHandler(AddDeviceContext, a2);
    AzTelemetry::MiniportFilterResourceRequirements::~MiniportFilterResourceRequirements((AzTelemetry::MiniportFilterResourceRequirements *)v8);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = v9;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD2u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a1,
        *(_DWORD *)v7);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD3u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  }
  return v9;
}
