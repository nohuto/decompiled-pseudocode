/*
 * XREFs of GetNamespaceId @ 0x1C0007C60
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     NVMeInitStreams @ 0x1C000F7F0 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012498 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013B50 (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014334 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00144EC (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C00148A8 (IoctlStorageStreamsReleaseId.c)
 *     NVMeReservationReportCapabilities @ 0x1C001752C (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x1C00175E0 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatus @ 0x1C0017708 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x1C0018830 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00189D4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C00190B0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00193F8 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001962C (QueryProtocolInfoLogPageData.c)
 *     ScsiPersistentReserveOut @ 0x1C001A400 (ScsiPersistentReserveOut.c)
 *     ScsiSanitizeRequest @ 0x1C001A9D4 (ScsiSanitizeRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C001AF40 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C001AFCC (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B34C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BBE0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 232) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1952)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
