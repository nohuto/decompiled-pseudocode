/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0016E68
 * Callers:
 *     NdisFOidRequestComplete @ 0x1C000FC10 (NdisFOidRequestComplete.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C0016CD0 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     NdisIMVBusDeviceAdd @ 0x1C005EE40 (NdisIMVBusDeviceAdd.c)
 *     NdisIMVBusDeviceRemove @ 0x1C005EF30 (NdisIMVBusDeviceRemove.c)
 *     NdisPDStartup @ 0x1C00776E0 (NdisPDStartup.c)
 *     ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C007C7A0 (-ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     NdisSynchronousOidRequest @ 0x1C00B1680 (NdisSynchronousOidRequest.c)
 *     ndisMiniportQueryDeviceProperty @ 0x1C0113688 (ndisMiniportQueryDeviceProperty.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C01155F0 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C0124B40 (-NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HA.c)
 *     ?NdisPDCreateBMGroup@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C01256A0 (-NdisPDCreateBMGroup@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z.c)
 *     ?NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C0125800 (-NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z.c)
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C0126210 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C0126470 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C01270D0 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012A924 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AC73C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqd(
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
  unsigned int v10; // esi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, va, 4LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v14, &a6);
}
