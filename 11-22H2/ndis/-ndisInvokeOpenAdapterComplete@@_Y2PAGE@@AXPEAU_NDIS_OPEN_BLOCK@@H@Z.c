/*
 * XREFs of ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1C0137998
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D070 (WPP_RECORDER_SF_qqD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeOpenAdapterComplete(struct _NDIS_OPEN_BLOCK *a1, int a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi

  ProtocolHandle = a1->ProtocolHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x5Fu,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)ProtocolHandle,
      (char)a1,
      a2);
  ProtocolHandle->OpenAdapterCompleteHandlerEx(a1->ProtocolBindingContext, a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x60u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)ProtocolHandle,
      a1);
}
