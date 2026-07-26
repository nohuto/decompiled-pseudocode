/*
 * XREFs of memmove @ 0x1C0036080
 * Callers:
 *     NdisGetDataBuffer @ 0x1C0006CD0 (NdisGetDataBuffer.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C00089F8 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0008AD0 (-ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00108B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C0011E38 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ndisQueryStatisticsOids @ 0x1C0012470 (ndisQueryStatisticsOids.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0012E80 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014500 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00181F4 (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C001834C (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     NdisMSetMiniportAttributes @ 0x1C0018820 (NdisMSetMiniportAttributes.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C001AA80 (NdisOpenConfigurationKeyByName.c)
 *     NdisWriteConfiguration @ 0x1C001AC80 (NdisWriteConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001B880 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001BDD4 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001C630 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001D194 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001D438 (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisOpenProtocolConfiguration @ 0x1C001D660 (NdisOpenProtocolConfiguration.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001DE0C (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001E44C (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisWmiRegister @ 0x1C001F500 (ndisWmiRegister.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0020BA8 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C0021AA4 (ndisIfRegisterInterfaceEx.c)
 *     NdisFIndicateStatus @ 0x1C0024440 (NdisFIndicateStatus.c)
 *     ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0024D80 (-ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x1C0025790 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0025900 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0026AD0 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisQueryGuidData @ 0x1C00271A0 (ndisQueryGuidData.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0027F1C (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0028268 (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C002889C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0028FD8 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     NdisRegisterDeviceEx @ 0x1C0029A20 (NdisRegisterDeviceEx.c)
 *     NdisFRegisterFilterDriver @ 0x1C002B200 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C002BBF0 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C002CBC0 (ndisIfCreateCompartmentBlock.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ndisEtwRegisterGuids @ 0x1C002D6A0 (ndisEtwRegisterGuids.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C002DE88 (ndisQuerySupportedGuidToOidList.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0030610 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0031264 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0031880 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0032AF4 (InitializeTelemetryAssertsKM.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0032CB8 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0032D8C (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003369C (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0033C44 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 *     ?ndisReadParameter@@YAJPEA_WKPEAXK11@Z @ 0x1C0034240 (-ndisReadParameter@@YAJPEA_WKPEAXK11@Z.c)
 *     memcpy_s @ 0x1C0034580 (memcpy_s.c)
 *     ndisReadUpperBindings @ 0x1C0057DF8 (ndisReadUpperBindings.c)
 *     NdisMQueryAdapterResources @ 0x1C005AB10 (NdisMQueryAdapterResources.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C005BF78 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1C005C660 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 *     ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x1C005C704 (-EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C005C7E4 (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C005CA18 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C005FE70 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0060AA4 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     NdisEnumerateFilterModules @ 0x1C0062120 (NdisEnumerateFilterModules.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0063540 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0063BC4 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0064690 (NdisWriteErrorLogEntry.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00668E4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0066B8C (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C0066C08 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0066FAC (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C00688D0 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C0068B6C (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0068C78 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0068EE8 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C00691FC (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C00692A4 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006B944 (-ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisMWriteLogData @ 0x1C006BC90 (NdisMWriteLogData.c)
 *     NdisGetProcessorInformationEx @ 0x1C006F070 (NdisGetProcessorInformationEx.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C006F8F4 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C006FCD0 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C006FFA4 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C0071468 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00739F0 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0074510 (-ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0076298 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C00763B4 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00766C0 (-ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisMAllocatePort @ 0x1C007C0D0 (NdisMAllocatePort.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007DF58 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007FEB0 (-ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080080 (-ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080380 (-ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0080514 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C0081860 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C008221C (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00827B8 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C00833AC (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0089354 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C0089A64 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C008B414 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C008BA98 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C008BBFC (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C008BE4C (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008C654 (-ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C008CD54 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1C008D148 (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C008D2DC (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C008D478 (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C008D558 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090440 (-ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00929F8 (-ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0092BAC (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094894 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094AD0 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094E68 (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095134 (-ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095414 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisWriteEventLogEntry @ 0x1C0097CF0 (NdisWriteEventLogEntry.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C0099D84 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009A5A0 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009AC20 (-ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B100 (-ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B660 (-ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009BD30 (-ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009CF40 (-ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D290 (-ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009D3D0 (-ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PE.c)
 *     ?ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009DE20 (-ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C009E048 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009ED04 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F060 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009FADC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FFC0 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A313C (ndisCopyPeriodicReceiveNbl.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C00A6E84 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A777C (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A7AB4 (-ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00AAEA0 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00ABE58 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C00AE978 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00AEA70 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00AEB68 (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B1CA0 (NdisSetSessionCompartmentId.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B23A8 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1C00B300C (ndisIfCreateCompartment.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B3EF0 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B4768 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B4984 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B4DE0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B5FF0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B67F0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00C0264 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     NdisCopyFromPacketToPacket @ 0x1C00C13C0 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C00C15C0 (NdisCopyFromPacketToPacketSafe.c)
 *     NdisInitializeWrapper @ 0x1C00C2090 (NdisInitializeWrapper.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C63D0 (ndisLWM5IndicateReceive.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C6DB0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ndisAllocateSharedMemoryInternal @ 0x1C00C7534 (ndisAllocateSharedMemoryInternal.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00CB660 (Duplicate802_11AttachAttributesCommon.c)
 *     CreateNewEventEntry @ 0x1C00CD180 (CreateNewEventEntry.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C0101250 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C0101E50 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C0102390 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C01027E0 (ndisNsiGetInterfaceRosInformation.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C0103890 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0104484 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106C18 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x1C0109D90 (-ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@E$00@Rtl@@@Z.c)
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C010A1D4 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010A270 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x1C010AB54 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C010ABF8 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C010B850 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C010CC0C (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C0110BC8 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C01137A4 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C0115310 (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0115958 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C0122A88 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x1C0123318 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C0123CD0 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C0123EB0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C0124360 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C0124530 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C01270D0 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x1C012A9DC (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     WppTraceCallback @ 0x1C012D410 (WppTraceCallback.c)
 *     _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x1C012E1F8 (_lambda_4865fb945cd28a177f845da523c8204e_--operator().c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C012FAF8 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0131610 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0131DE0 (NdisMRegisterWdiMiniportDriver.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0132C58 (ndisIfUpdateStringIfNeeded.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x1C0133328 (ndisNsiGetIfRcvAddressRodInformation.c)
 *     AddKnobNameToBuffer @ 0x1C0133914 (AddKnobNameToBuffer.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C01365A4 (SeSddlSecurityDescriptorFromSDDL.c)
 *     SepSddlAddAceToAcl @ 0x1C0136668 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C0137A90 (CmRegUtilUcValueSetUcString.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013B55C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C013FC28 (ndisEnumerateInterfaces.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0147590 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C01479F4 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 *     NdisMRegisterDevice @ 0x1C0148920 (NdisMRegisterDevice.c)
 *     NdisMRegisterInterruptEx @ 0x1C0149430 (NdisMRegisterInterruptEx.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0149FE8 (ndisEnumerateInterfaces32.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C015339C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0154974 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z @ 0x1C0157140 (-ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
