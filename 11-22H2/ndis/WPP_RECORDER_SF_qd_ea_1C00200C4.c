/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00200C4
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001F85C (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C002019C (-ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     NdisFIndicateStatus @ 0x1C0022AC0 (NdisFIndicateStatus.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C002A9D0 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C002DC94 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F72C (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058650 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058760 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x1C005BD78 (-ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROP.c)
 *     NdisLWMStartNetworkInterface @ 0x1C005EE30 (NdisLWMStartNetworkInterface.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C007126C (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?NdisPDGetBuffersFromBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@PEAKPEAPEAU_PD_BUFFER@@@Z @ 0x1C007B050 (-NdisPDGetBuffersFromBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@PEAKPEAPEAU_PD_BUFFER@@@Z.c)
 *     ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0081CA0 (-ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0082660 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009996C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009AAF4 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00A7540 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00AD3D0 (-ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOC.c)
 *     ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00AE4B0 (-ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C00B6060 (ndisFInvokeSynchronousOidRequest.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C00B6138 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C00B6240 (ndisMInvokeSynchronousOidRequest.c)
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B93D0 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     KLoaderQueryDispatchTable @ 0x1C00CFE20 (KLoaderQueryDispatchTable.c)
 *     KLoaderReferenceModule @ 0x1C00CFEF0 (KLoaderReferenceModule.c)
 *     ndisPktMonFilterRegister @ 0x1C0111CA4 (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0111E00 (ndisPktMonOpenRegister.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0FC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisPktMonMiniportRegister @ 0x1C011B7CC (ndisPktMonMiniportRegister.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B950 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C012C464 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C8F4 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C012D0C8 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012D8B4 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C01327C0 (-NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CO.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0133928 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0134718 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C01352D0 (-NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PAR.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qd(
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
