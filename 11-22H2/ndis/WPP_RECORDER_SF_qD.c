/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C0008318
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C0002580 (NdisReturnNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x1C00034C0 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0003B00 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0003EC0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisFReturnNetBufferLists @ 0x1C0004390 (NdisFReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0004680 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0004980 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C0005410 (NdisFSendNetBufferLists.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00086D0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0011B90 (NdisFreeCloneNetBufferList.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0011EB0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00125A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0013228 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00132A0 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00149F0 (-ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0015D00 (-ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C0016EBC (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00237F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisQueryGuidData @ 0x1C00264D0 (ndisQueryGuidData.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00292F4 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A6F0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C8B8 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EA50 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032490 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0033F60 (-ndisMInvokeStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C005E13C (-ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C0067120 (NdisEnumerateFilterModules.c)
 *     NdisFRestartFilter @ 0x1C0067E60 (NdisFRestartFilter.c)
 *     ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006AB94 (-ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006C518 (-ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1C006C798 (-ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z.c)
 *     ?ndisMRawInvokeDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C006D2A8 (-ndisMRawInvokeDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisMQueryAdapterInstanceName @ 0x1C0071820 (NdisMQueryAdapterInstanceName.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00757C0 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C0082D98 (ndisWdmSendOidPmParametersForSx.c)
 *     ?ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00840D0 (-ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084230 (-ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084550 (-ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisWdfDevicePowerDown @ 0x1C008C4FC (ndisWdfDevicePowerDown.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C008CDA4 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0091A8C (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092A48 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00950C4 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096660 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096A70 (-ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096C60 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C009C1AC (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E310 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009FA54 (-ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A0FD0 (-ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1BF0 (-ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C00A5730 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F54 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC30 (ndisMIndicateSplitNblChain.c)
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00ACB44 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00AF780 (NdisMIdleNotificationCompleteEx.c)
 *     NdisFDirectOidRequest @ 0x1C00B5810 (NdisFDirectOidRequest.c)
 *     NdisCoOidRequest @ 0x1C00C09E0 (NdisCoOidRequest.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1C00C6BF0 (NdisWritePcmciaAttributeMemory.c)
 *     ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C6F4 (-ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C010F884 (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1C01102AC (-ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C01103B4 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x1C01108A0 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01112C0 (-ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x1C01133E0 (-ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C011694C (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x1C0116A6C (-ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C0117370 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1C011752C (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z @ 0x1C01175FC (-ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z.c)
 *     ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C011E668 (-ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERI.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C011F7E0 (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0121424 (-ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     NdisSetAoAcOptions @ 0x1C012B5F0 (NdisSetAoAcOptions.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B950 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C012D2DC (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C012DE7C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisMInvokeReset @ 0x1C012E070 (ndisMInvokeReset.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0137268 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01377C4 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x1C0141900 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 *     ?Dereference@DriverService@@QEAAXXZ @ 0x1C0141E00 (-Dereference@DriverService@@QEAAXXZ.c)
 *     ?Reference@DriverService@@QEAAJXZ @ 0x1C0141FE4 (-Reference@DriverService@@QEAAJXZ.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014798C (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C01482B0 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        ...)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v8 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, va, 4LL, 0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v13, &a6);
}
