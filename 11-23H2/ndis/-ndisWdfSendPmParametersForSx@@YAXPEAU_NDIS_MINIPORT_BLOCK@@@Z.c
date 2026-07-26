/*
 * XREFs of ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D244
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00606B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001EA90 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x1C005AD4C (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dq @ 0x1C007E7BC (WPP_RECORDER_SF_dq_ea_1C007E7BC.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00902F4 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisWdfSendPmParametersForSx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 MediaSpecificWakeUpEvents; // rdx
  __int64 v3; // rcx
  unsigned int SupportedWakeUpEvents; // r9d
  int v5; // ecx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v7; // [rsp+48h] [rbp-B8h]
  struct _NDIS_OID_REQUEST v8; // [rsp+80h] [rbp-80h] BYREF
  __int128 v9; // [rsp+180h] [rbp+80h] BYREF
  int v10; // [rsp+190h] [rbp+90h]

  if ( ndisReferenceMiniportByHandle(a1, 1, 0xEu) )
  {
    v9 = *(_OWORD *)&a1->PMCurrentParameters.Header.Type;
    MediaSpecificWakeUpEvents = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
    HIDWORD(v9) = 0;
    v10 = MediaSpecificWakeUpEvents;
    if ( ndisAoAcCapable || ndisAoAcTest )
    {
      v3 = 0LL;
      DWORD1(v9) = 0;
    }
    else
    {
      v3 = DWORD1(v9);
    }
    SupportedWakeUpEvents = a1->PMAdvertisedCapabilities.SupportedWakeUpEvents;
    if ( (SupportedWakeUpEvents & 2) != 0 )
    {
      v3 = (unsigned int)v3 | 2;
      DWORD1(v9) = v3;
    }
    if ( (byte_1C00F7643 & 4) != 0 )
      McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
        v3,
        MediaSpecificWakeUpEvents,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->PMAdvertisedCapabilities.Flags,
        a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns,
        a1->PMAdvertisedCapabilities.SupportedProtocolOffloads,
        SupportedWakeUpEvents,
        a1->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents,
        v7,
        v3,
        SBYTE8(v9),
        0,
        MediaSpecificWakeUpEvents);
    memset(&v8, 0, 0xF8uLL);
    *(_DWORD *)&v8.NdisReserved[16] |= 8u;
    *(_QWORD *)&v8.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v8.NdisReserved[96]);
    v8.PortNumber = 0;
    v8.DATA.QUERY_INFORMATION.InformationBuffer = &v9;
    v8.Header = (NDIS_OBJECT_HEADER)15466902;
    v8.DATA.QUERY_INFORMATION.Oid = -50265847;
    v8.RequestType = NdisRequestSetInformation;
    v8.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
    v5 = ndisQuerySetMiniportEx(a1, 0LL, &v8, 0, 0LL, 0LL);
    if ( v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0xBu,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        v5,
        a1);
    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
    CxBlockFromMiniport->Chars.EvtCxUpdatePMParameters(a1->MiniportAdapterContext, (_NDIS_PM_PARAMETERS *)&v9);
    ndisDereferenceMiniport(a1, 0xEu);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0xAu,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a1);
  }
}
