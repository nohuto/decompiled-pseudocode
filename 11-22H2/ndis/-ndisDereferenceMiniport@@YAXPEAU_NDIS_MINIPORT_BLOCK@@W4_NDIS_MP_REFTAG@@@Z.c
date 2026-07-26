/*
 * XREFs of ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40
 * Callers:
 *     ndisDispatchRequest @ 0x1C0002B08 (ndisDispatchRequest.c)
 *     ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0002CD0 (-ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0004C50 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C00062C0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021F54 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0025928 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C0025B50 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00284DC (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0028964 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002FFD4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033610 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ndisQueueDpcWorkItem @ 0x1C003D186 (ndisQueueDpcWorkItem.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C003D340 (ndisQueuedMiniportDpcWorkItem.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C003E930 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00583AC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058650 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058760 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisCsResiliencyCallback @ 0x1C0058A80 (ndisCsResiliencyCallback.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00594B4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005A310 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C005A610 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisWnfPdcCallback @ 0x1C005AAC0 (ndisWnfPdcCallback.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C005DCE0 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x1C005DE30 (-ndisMQueuedFreeSharedHandler@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C005E6E0 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C005EE30 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C005EFA0 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfMiniportDereference @ 0x1C00605F0 (NdisWdfMiniportDereference.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0061370 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C00614C4 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     NdisEnumerateFilterModules @ 0x1C0067120 (NdisEnumerateFilterModules.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C00680E8 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00698A8 (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C006EE20 (NdisAllocateIoWorkItem.c)
 *     NdisFreeIoWorkItem @ 0x1C006F120 (NdisFreeIoWorkItem.c)
 *     ndisQueuedResetMiniport @ 0x1C00715C0 (ndisQueuedResetMiniport.c)
 *     NdisMResetMiniport @ 0x1C0071700 (NdisMResetMiniport.c)
 *     ?ndisSriovInterfaceDereference@@YAXPEAX@Z @ 0x1C007A480 (-ndisSriovInterfaceDereference@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F60C (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00800A0 (NdisMReenumerateFailedAdapter.c)
 *     NdisMAllocatePort @ 0x1C00815D0 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C0081930 (NdisMFreePort.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081C2C (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMediaDisconnectTimeout@@YAXPEAX000@Z @ 0x1C00820A0 (-ndisMediaDisconnectTimeout@@YAXPEAX000@Z.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C0082230 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1C0082430 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 *     ?ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z @ 0x1C0082CB0 (-ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0083480 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C0083BEC (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0083DA8 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085A5C (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D074 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D224 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D874 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C008E338 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C008EFB0 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0092390 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C00925FC (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C00973A0 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1C0097910 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 *     ?ndisPMRejectAsync@@YAXPEAX@Z @ 0x1C0097A60 (-ndisPMRejectAsync@@YAXPEAX@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0099EA8 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C009BED0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C009CBF0 (-ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1C009E080 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C009E200 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1C00A4DB0 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00ADA90 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00AEA38 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00AF780 (NdisMIdleNotificationCompleteEx.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00B1AEC (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00BCA30 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00BD180 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C00BD710 (NdisMCmRegisterAddressFamilyEx.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C00C6FE0 (ndis5QueuedMiniportDpcWorkItem.c)
 *     wil::details::lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___::_lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___ @ 0x1C00CBBA0 (wil--details--lambda_call__lambda_329f299aae1cd30621f80eb33d2d9772___--_lambda_call__lambda_329f.c)
 *     ndisLwmIoctlIrpHandler @ 0x1C00CBF98 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1C00CC7A0 (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C010FD30 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1C01134AC (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01177D0 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisCounterSetProviderCallback @ 0x1C0117C30 (ndisCounterSetProviderCallback.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C011E8E0 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01205A0 (-ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C012DD90 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C012E040 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C012E230 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisHandleBindNotification @ 0x1C012EB20 (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1C012EC8C (ndisHandleLegacyBindIoctl.c)
 *     ndisPnpRefresh @ 0x1C012EEDC (ndisPnpRefresh.c)
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0133B10 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0133EF0 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135C20 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0135E94 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01360B0 (-ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01361D8 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPktMonComponentNotify @ 0x1C0136F80 (ndisPktMonComponentNotify.c)
 *     ?ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01374F0 (-ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01375E0 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x1C01384D4 (-ndisNdkPcwMiniportCleanup@@YAXPEAX@Z.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C01388B8 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01484E0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0148B30 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C014B610 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisUnprocessAllMiniports @ 0x1C0155010 (ndisUnprocessAllMiniports.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C0156158 (ndisHandleProtocolReconfigNotification.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C01572D0 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  ULONG_PTR v2; // rbx
  char v4; // bp
  KIRQL v5; // al
  _BYTE *v6; // rdx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v8; // r14
  __int64 v9; // r10
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // al
  char v13; // cl
  ULONG_PTR v14; // r9
  NDIS_REFCOUNT_HANDLE__ *v15; // rbx
  unsigned int v16; // edx
  int v17; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx

  v2 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      25,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)a1);
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v8 = v5;
  if ( RefCountTracker && (unsigned __int64)RefCountTracker - 2 > 1 )
  {
    if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( (_BYTE)v2 == 0xFF )
    {
      if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0xFFuLL);
      *(_BYTE *)RefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v2 >= *((_BYTE *)RefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, v2);
      if ( *((_BYTE *)RefCountTracker + 1) )
      {
        if ( *((_BYTE *)RefCountTracker + 1) == 1 )
        {
          v14 = v2;
          v15 = RefCountTracker + 16 * v2;
          v16 = *((_DWORD *)v15 + 16);
          v17 = (unsigned __int16)v16 >> 1;
          if ( v16 >> 17 < 0x3FFE && v17 == (v16 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 2));
            *((_DWORD *)v15 + 16) &= 0x10001u;
          }
          else
          {
            if ( v17 == 0 && (v16 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, v14);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 2), 0);
          }
        }
      }
      else
      {
        v9 = *((_QWORD *)RefCountTracker + 1);
        if ( v9 && (v10 = *((_BYTE *)RefCountTracker + 3), v11 = 0, v10) )
        {
          while ( 1 )
          {
            v6 = (_BYTE *)(v9 + 2LL * v11);
            if ( *v6 == (_BYTE)v2 )
            {
              v13 = v6[1];
              if ( v13 )
                break;
            }
            if ( ++v11 >= v10 )
              goto LABEL_13;
          }
          v6[1] = v13 - 1;
        }
        else
        {
LABEL_13:
          if ( !_bittestandreset((signed __int32 *)RefCountTracker + 4, v2) )
            ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, v2);
        }
      }
    }
  }
  if ( a1->Ref.ReferenceCount-- == 1 )
    v4 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v6,
      20,
      14,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v8);
  if ( v4 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      26,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)a1);
}
