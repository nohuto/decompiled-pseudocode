/*
 * XREFs of ?ndisMRawInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0067E18
 * Callers:
 *     ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C00ADC50 (-ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
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
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  DriverHandle->UnhookedCharacteristics.__ptr_.__value_->CancelOidRequestHandler(a1->MiniportAdapterContext, a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF5u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
}
