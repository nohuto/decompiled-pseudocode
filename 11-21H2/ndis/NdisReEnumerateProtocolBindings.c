/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C0097680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0095EA0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C010B13C (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C010F45C (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?BeginBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C012E5B4 (-BeginBindOperation@BindEngine@Ndis@@SAXXZ.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r9

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x21u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 103) + 1LL) = 1;
    Ndis::BindEngine::BeginBindOperation();
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103),
      (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_91df9d05bf67801b2bd22608b8e0e6a4_::_lambda_invoker_cdecl_);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103),
        (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_);
    Ndis::BindEngine::EndBindOperation();
    LOBYTE(v3) = 10;
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, v4, v3, v5);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x23u,
        (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
        NdisProtocolHandle);
    if ( byte_1C00EE582 < 0 )
      McTemplateK0qqq_EtwWriteTransfer(
        v2,
        &ReferenceProtocolFailed,
        (const GUID *)&NDIS_PROVIDER_ID,
        0,
        1,
        (char)NdisProtocolHandle);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x24u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      NdisProtocolHandle);
}
