/*
 * XREFs of ?ndisMRawInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C006D1F4
 * Callers:
 *     ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C00B3C70 (-ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMRawInvokeCancelOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi

  DriverHandle = a1->DriverHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF4u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  DriverHandle->UnhookedCharacteristics.__ptr_.__value_->CancelOidRequestHandler(a1->MiniportAdapterContext, a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF5u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
}
