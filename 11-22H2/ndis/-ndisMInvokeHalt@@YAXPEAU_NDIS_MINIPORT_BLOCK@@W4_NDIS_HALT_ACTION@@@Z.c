/*
 * XREFs of ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x1C010F580
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D4C (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0008C20 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00142EC (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x1C001431C (--0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMInvokeHalt(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_HALT_ACTION a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  _BYTE v5[64]; // [rsp+40h] [rbp-48h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDCu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      DriverHandle);
  if ( ndisIsMiniportVerified(DriverHandle) )
  {
    AzTelemetry::MiniportHaltTelemetry::MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v5, a1, a2);
    (*((void (__fastcall **)(void *, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NDIS_HALT_ACTION)))ndisVerifierNdisDispatch
     + 7))(
      a1->MiniportAdapterContext,
      (unsigned int)a2,
      a1,
      a1->VerifierContext,
      DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx);
  }
  else
  {
    AzTelemetry::MiniportHaltTelemetry::MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v5, a1, a2);
    DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx(a1->MiniportAdapterContext, a2);
  }
  AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDDu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      DriverHandle);
}
