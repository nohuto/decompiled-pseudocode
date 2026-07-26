/*
 * XREFs of ?ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01047C8
 * Callers:
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0104680 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeCloseAdapterComplete(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi

  ProtocolHandle = a1->ProtocolHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x61u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)ProtocolHandle,
      a1);
  ProtocolHandle->CloseAdapterCompleteHandlerEx(a1->ProtocolBindingContext);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x62u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)ProtocolHandle,
      a1);
}
