/*
 * XREFs of ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0087F88
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C005B440 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001D894 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___::_lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___ @ 0x1C00353C8 (wil--details--lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___--_lambda_call__lambda_c18e.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x1C00558FC (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00792E0 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall ndisWdfSendPmParametersForSx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  __int64 MediaSpecificWakeUpEvents; // rdx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // [rsp+48h] [rbp-B8h]
  struct _NDIS_MINIPORT_BLOCK *v7; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_MINIPORT_BLOCK **v8; // [rsp+78h] [rbp-88h] BYREF
  char v9; // [rsp+80h] [rbp-80h]
  struct _NDIS_OID_REQUEST v10; // [rsp+90h] [rbp-70h] BYREF
  __int128 v11; // [rsp+190h] [rbp+90h] BYREF
  int v12; // [rsp+1A0h] [rbp+A0h]

  v7 = a1;
  if ( ndisReferenceMiniportByHandle(a1, 1, 0xEu) )
  {
    v1 = v7;
    v8 = &v7;
    v9 = 1;
    v11 = *(_OWORD *)&v7->PMCurrentParameters.Header.Type;
    MediaSpecificWakeUpEvents = v7->PMCurrentParameters.MediaSpecificWakeUpEvents;
    HIDWORD(v11) = 0;
    v12 = MediaSpecificWakeUpEvents;
    if ( ndisAoAcCapable || ndisAoAcTest )
    {
      v3 = 0LL;
      DWORD1(v11) = 0;
    }
    else
    {
      v3 = DWORD1(v11);
    }
    if ( (v7->PMAdvertisedCapabilities.SupportedWakeUpEvents & 2) != 0 )
    {
      v3 = (unsigned int)v3 | 2;
      DWORD1(v11) = v3;
    }
    if ( (byte_1C00EE583 & 4) != 0 )
    {
      McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
        v3,
        MediaSpecificWakeUpEvents,
        &v7->InterfaceGuid,
        (__int64)&v7->InterfaceGuid,
        v7->PMAdvertisedCapabilities.Flags,
        v7->PMAdvertisedCapabilities.SupportedWoLPacketPatterns,
        v7->PMAdvertisedCapabilities.SupportedProtocolOffloads,
        v7->PMAdvertisedCapabilities.SupportedWakeUpEvents,
        v7->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents,
        v6,
        v3,
        SBYTE8(v11),
        0,
        MediaSpecificWakeUpEvents);
      v1 = v7;
    }
    memset(&v10, 0, 0xF8uLL);
    *(_DWORD *)&v10.NdisReserved[16] |= 8u;
    v10.PortNumber = 0;
    *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
    v10.Header = (NDIS_OBJECT_HEADER)15466902;
    v10.DATA.QUERY_INFORMATION.InformationBuffer = &v11;
    v10.DATA.QUERY_INFORMATION.Oid = -50265847;
    v10.RequestType = NdisRequestSetInformation;
    v10.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
    v4 = ndisQuerySetMiniportEx(v1, 0LL, &v10, 0, 0LL, 0LL);
    v5 = v4;
    if ( v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0xBu,
        (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
        v4,
        v7);
    ((void (__fastcall *)(void *, __int128 *, __int64))v7->DriverHandle->CxBlock->Chars.EvtCxUpdatePMParameters)(
      v7->MiniportAdapterContext,
      &v11,
      v5);
    wil::details::lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___::_lambda_call__lambda_c18eadf4a2a14e2e189094deb1de46d4___((__int64)&v8);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0xAu,
      (struct _GUID *)&WPP_cc38803a95a73ced301517c87e670f26_Traceguids,
      v7);
  }
}
