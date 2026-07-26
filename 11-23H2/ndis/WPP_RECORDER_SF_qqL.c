/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C000CDB0
 * Callers:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0004DE0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015060 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001A45C (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001B908 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E6E8 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0022FBC (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisOidPreCurrentLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0024050 (-ndisOidPreCurrentLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisQueryGuidData @ 0x1C0026660 (ndisQueryGuidData.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00290D4 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C0029484 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     NdisIfRegisterProvider @ 0x1C002F970 (NdisIfRegisterProvider.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035128 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0063924 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C006D9A4 (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006DCAC (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E060 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E2D0 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E680 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0075B40 (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z @ 0x1C007604C (-ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0087D20 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008816C (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008838C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0088594 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0098918 (-ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099A3C (-ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     NdisQueryBindInstanceName @ 0x1C009D510 (NdisQueryBindInstanceName.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x1C009F390 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1310 (-ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5330 (-ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5600 (-ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C00A5750 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5B94 (-ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A639C (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A6D9C (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00BAA14 (ndisNsiChangeNetworkInfo.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C010D650 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C010EAE0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C010EDF0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C0110C94 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01124B0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01127E4 (-ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NO.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01344C8 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01346D8 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0137AE8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisQueueOpenOnProtocol@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0149A24 (-ndisQueueOpenOnProtocol@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0149B20 (-ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqL(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v9; // rdi
  unsigned int v11; // esi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, va, 4LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v14, &a6);
}
