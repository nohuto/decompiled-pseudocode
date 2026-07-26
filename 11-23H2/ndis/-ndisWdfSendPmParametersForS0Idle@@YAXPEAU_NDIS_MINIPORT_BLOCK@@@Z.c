/*
 * XREFs of ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D094
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00606B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001EA90 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x1C005AD4C (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00902F4 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisWdfSendPmParametersForS0Idle(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MediaSpecificWakeUpEvents; // r9d
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int SupportedWakeUpEvents; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v7; // [rsp+48h] [rbp-1h]
  __int128 v8; // [rsp+78h] [rbp+2Fh] BYREF
  unsigned int v9; // [rsp+88h] [rbp+3Fh]

  if ( ndisReferenceMiniportByHandle(a1, 1, 0xEu) )
  {
    v8 = *(_OWORD *)&a1->PMCurrentParameters.Header.Type;
    MediaSpecificWakeUpEvents = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
    v9 = MediaSpecificWakeUpEvents;
    HIDWORD(v8) = 0;
    if ( !ndisAoAcCapable && !ndisAoAcTest || ndisIdleCondition == NdisIdleConditionAnyLowLatency )
      goto LABEL_18;
    if ( (unsigned int)(ndisIdleCondition - 1) > 2 )
      NT_ASSERT(
        "ndisIdleCondition == NdisIdleConditionAnyLowLatency || ndisIdleCondition == NdisIdleConditionAny || ndisIdleCond"
        "ition == NdisIdleConditionUnicastOnly || ndisIdleCondition == NdisIdleConditionL2ConnectedOnly");
    if ( ndisIdleCondition != NdisIdleConditionAny )
    {
      v3 = DWORD1(v8);
      v4 = 0LL;
      if ( ndisIdleCondition == NdisIdleConditionL2ConnectedOnly )
        v3 = 0LL;
      DWORD1(v8) = v3;
      SupportedWakeUpEvents = a1->PMAdvertisedCapabilities.SupportedWakeUpEvents;
      if ( (SupportedWakeUpEvents & 2) != 0 )
        v4 = 2LL;
      HIDWORD(v8) = v4;
      if ( (SupportedWakeUpEvents & 1) != 0 )
      {
        v4 = (unsigned int)v4 | 1;
        HIDWORD(v8) = v4;
      }
      if ( (SupportedWakeUpEvents & 2) != 0 )
      {
        v3 = (unsigned int)v3 | 2;
        DWORD1(v8) = v3;
      }
    }
    else
    {
LABEL_18:
      v3 = DWORD1(v8);
      v4 = 16LL;
      HIDWORD(v8) = 16;
    }
    if ( (byte_1C00F7643 & 4) != 0 )
      McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
        v4,
        v3,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->PMAdvertisedCapabilities.Flags,
        a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns,
        a1->PMAdvertisedCapabilities.SupportedProtocolOffloads,
        a1->PMAdvertisedCapabilities.SupportedWakeUpEvents,
        a1->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents,
        v7,
        v3,
        SBYTE8(v8),
        v4,
        MediaSpecificWakeUpEvents);
    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
    CxBlockFromMiniport->Chars.EvtCxUpdatePMParameters(a1->MiniportAdapterContext, (_NDIS_PM_PARAMETERS *)&v8);
    ndisDereferenceMiniport(a1, 0xEu);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0xCu,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a1);
  }
}
