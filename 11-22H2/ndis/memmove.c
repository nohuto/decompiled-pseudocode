/*
 * XREFs of memmove @ 0x1C0038280
 * Callers:
 *     NdisGetDataBuffer @ 0x1C0004270 (NdisGetDataBuffer.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0006A60 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0006FC0 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00073A8 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0007868 (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C000798C (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FCB0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisQueryStatisticsOids @ 0x1C0011308 (ndisQueryStatisticsOids.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013AF0 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016A7C (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMSetMiniportAttributes @ 0x1C00182A0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C00185C0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x1C00191A8 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C001A9A8 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C001B90C (ndisIfRegisterInterfaceEx.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C6B0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     NdisWriteConfiguration @ 0x1C001C7C0 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C001C9B0 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C001D1E0 (NdisReadConfiguration.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E558 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     NdisOpenProtocolConfiguration @ 0x1C001E6E0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001EA64 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ndisWmiRegister @ 0x1C0020268 (ndisWmiRegister.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0021BDC (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0021D48 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00224DC (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     NdisFIndicateStatus @ 0x1C0022AC0 (NdisFIndicateStatus.c)
 *     ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0023940 (-ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x1C0024730 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0025E00 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisQueryGuidData @ 0x1C00264D0 (ndisQueryGuidData.c)
 *     ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00270F0 (-ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00284DC (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x1C00298D4 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C002A9D0 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002AB44 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterDeviceEx @ 0x1C002B290 (NdisRegisterDeviceEx.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C4B0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C002D1FC (ndisQuerySupportedGuidToOidList.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C002F6B4 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1C0030530 (NdisFRegisterFilterDriver.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0031BF0 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0031DE4 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C0033B78 (ndisIfCreateCompartmentBlock.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034690 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisEtwRegisterGuids @ 0x1C0034950 (ndisEtwRegisterGuids.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034F98 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x1C003547C (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0035640 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 *     ?ndisReadParameter@@YAJPEA_WKPEAXK11@Z @ 0x1C0035AD0 (-ndisReadParameter@@YAJPEA_WKPEAXK11@Z.c)
 *     memcpy_s @ 0x1C0035F50 (memcpy_s.c)
 *     ndisIfUpdateSingleField @ 0x1C00379DC (ndisIfUpdateSingleField.c)
 *     ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003E210 (-ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisReadUpperBindings @ 0x1C005D048 (ndisReadUpperBindings.c)
 *     NdisMQueryAdapterResources @ 0x1C005FD80 (NdisMQueryAdapterResources.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C00611C8 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1C00618E8 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 *     ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x1C006198C (-EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C0061A6C (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C0061CA4 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0064DE0 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0065A24 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     NdisEnumerateFilterModules @ 0x1C0067120 (NdisEnumerateFilterModules.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0068540 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C0068BC4 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0069670 (NdisWriteErrorLogEntry.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006BBA4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006BE64 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006BEE0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006C284 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006DC8C (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C006DF28 (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E040 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E2B0 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C006E5B8 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E660 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0070CEC (-ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisMWriteLogData @ 0x1C0071050 (NdisMWriteLogData.c)
 *     NdisGetProcessorInformationEx @ 0x1C0074420 (NdisGetProcessorInformationEx.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0074CFC (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C00750E0 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00753B4 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C0076894 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078E50 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00799C0 (-ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007B758 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C007B874 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BB80 (-ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisMAllocatePort @ 0x1C00815D0 (NdisMAllocatePort.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0083480 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085400 (-ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00855C0 (-ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00858C0 (-ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085A5C (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C0086D50 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0087730 (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0087D00 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C00888F4 (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C008E338 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C008EFB0 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C008F70C (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C0091048 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C00916D8 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C009183C (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0091A8C (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C009228C (-ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C0092D78 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1C009316C (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C0093300 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C009349C (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C009357C (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096410 (-ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00989E0 (-ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0098B94 (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A8B8 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009AAF4 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009AE8C (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B158 (-ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B438 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisWriteEventLogEntry @ 0x1C009DD20 (NdisWriteEventLogEntry.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009FD78 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A0480 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A0FD0 (-ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1520 (-ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1BF0 (-ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A2E20 (-ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3184 (-ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A32C4 (-ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PE.c)
 *     ?ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3F50 (-ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00A4178 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C00A4498 (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A50E4 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5440 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5EB0 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A637C (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A6B18 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A9B38 (ndisCopyPeriodicReceiveNbl.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C00AD224 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AD904 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00ADC34 (-ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00B08C8 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00B1868 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B375C (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C00B4834 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00B492C (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00B4A24 (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B6E90 (NdisSetSessionCompartmentId.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B75A8 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B8ED0 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B9758 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B9974 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B9DD0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00BAFA0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00BB820 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00C4E50 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     NdisCopyFromPacketToPacket @ 0x1C00C6000 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C00C6200 (NdisCopyFromPacketToPacketSafe.c)
 *     NdisInitializeWrapper @ 0x1C00C6CD0 (NdisInitializeWrapper.c)
 *     ndisLWM5IndicateReceive @ 0x1C00CB020 (ndisLWM5IndicateReceive.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00CBA20 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ndisAllocateSharedMemoryInternal @ 0x1C00CC290 (ndisAllocateSharedMemoryInternal.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00D1AA0 (Duplicate802_11AttachAttributesCommon.c)
 *     CreateNewEventEntry @ 0x1C00D3B0C (CreateNewEventEntry.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C010CD00 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C010D240 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C010D690 (ndisNsiGetInterfaceRosInformation.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C010E390 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C010EB20 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C010EE30 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C010FBDC (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0110FB4 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C011144C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B80 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x1C011630C (-ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@E$00@Rtl@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01170A4 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C0118118 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C011B46C (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C011E2A8 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C0120C6C (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C012E5D0 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x1C012EE80 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C012F800 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C012F9F0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C012FEE0 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C01300D0 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C0132CB0 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x1C01366C4 (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     WppTraceCallback @ 0x1C0139200 (WppTraceCallback.c)
 *     _lambda_4865fb945cd28a177f845da523c8204e_::operator() @ 0x1C013A064 (_lambda_4865fb945cd28a177f845da523c8204e_--operator().c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C013B92C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C013D9D0 (NdisMRegisterWdiMiniportDriver.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C013E844 (ndisIfUpdateStringIfNeeded.c)
 *     ndisNsiGetPackageFamilyName @ 0x1C013ED20 (ndisNsiGetPackageFamilyName.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x1C013EFF4 (ndisNsiGetIfRcvAddressRodInformation.c)
 *     AddKnobNameToBuffer @ 0x1C013F5E4 (AddKnobNameToBuffer.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C0142410 (SeSddlSecurityDescriptorFromSDDL.c)
 *     SepSddlAddAceToAcl @ 0x1C01424E4 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C014394C (CmRegUtilUcValueSetUcString.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C014D4BC (ndisEnumerateInterfaces.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0153954 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 *     NdisMRegisterDevice @ 0x1C0154870 (NdisMRegisterDevice.c)
 *     NdisMRegisterInterruptEx @ 0x1C0155390 (NdisMRegisterInterruptEx.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0155F38 (ndisEnumerateInterfaces32.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0162AFC (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C01636F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z @ 0x1C0164210 (-ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z.c)
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
