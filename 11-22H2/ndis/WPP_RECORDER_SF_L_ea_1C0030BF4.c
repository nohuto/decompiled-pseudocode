/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0030BF4
 * Callers:
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016A7C (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E558 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0027660 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C002F068 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     NdisFRegisterFilterDriver @ 0x1C0030530 (NdisFRegisterFilterDriver.c)
 *     ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0030E00 (-ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ndisCreateThread @ 0x1C0033004 (ndisCreateThread.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C00336A4 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisWnfPdcCallback @ 0x1C005AAC0 (ndisWnfPdcCallback.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006BEE0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092A48 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0096F5C (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00974C0 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0098C6C (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0098EBC (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A83C4 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisAoAcTraceRundown @ 0x1C00B1944 (ndisAoAcTraceRundown.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B9758 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     NdisClCloseCall @ 0x1C00BD8F0 (NdisClCloseCall.c)
 *     NdisCmMakeCallComplete @ 0x1C00BE050 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C00BFAC0 (NdisCoDeleteVc.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CC948 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CCD0C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisNsiClientParameterChangeHandler @ 0x1C0117960 (ndisNsiClientParameterChangeHandler.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x1C011A8B0 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x1C011B5A0 (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0137268 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01375E0 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01377C4 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMAllocateMapRegisters @ 0x1C0153F90 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C0154B40 (NdisMRegisterDmaChannel.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x1C01617C0 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_L(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, struct _GUID *a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v10, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v7 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va);
}
