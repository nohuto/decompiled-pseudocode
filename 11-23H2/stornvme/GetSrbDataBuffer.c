/*
 * XREFs of GetSrbDataBuffer @ 0x1C0007C8C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     BuildReadWriteCommand @ 0x1C0011154 (BuildReadWriteCommand.c)
 *     FirmwareActivate @ 0x1C0011870 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0011AB4 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0011E94 (FirmwareGetInfo.c)
 *     FormInquiryBlockLimitsData @ 0x1C001210C (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012334 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C0012424 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012498 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C00126E8 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00128F4 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0012B14 (FormInquiryVpdSupportedPagesData.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012F90 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00134A4 (IoctlDeleteReservedQueuePair.c)
 *     IoctlFirmwareProcess @ 0x1C0013948 (IoctlFirmwareProcess.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013B50 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryProtocolInfoProcess @ 0x1C0013D08 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0013DB4 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0014008 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x1C0014178 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0014200 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014334 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00144EC (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C00148A8 (IoctlStorageStreamsReleaseId.c)
 *     IoctlToNVMe @ 0x1C00149A0 (IoctlToNVMe.c)
 *     LogSenseInformationalExceptions @ 0x1C0014CB4 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0014E20 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0014EA0 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0015628 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00158B8 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0015B20 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0015EC0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015F80 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C00162C0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016B70 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016E98 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C001703C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C00171CC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C00173C0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x1C00175E0 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C00178C0 (NVMeReservationReportStatusCompletion.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C00180B0 (NVMeValidateProtocolCommandRequest.c)
 *     ProtocolCommandToNVMe @ 0x1C00189D4 (ProtocolCommandToNVMe.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0018C70 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C00190B0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00193F8 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001962C (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019AF0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019CC0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiInquiryRequest @ 0x1C0019E54 (ScsiInquiryRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0019FD8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C001A174 (ScsiModeSenseRequest.c)
 *     ScsiPersistentReserveIn @ 0x1C001A30C (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x1C001A400 (ScsiPersistentReserveOut.c)
 *     ScsiReadCapacityRequest @ 0x1C001A618 (ScsiReadCapacityRequest.c)
 *     ScsiReportLunsCommand @ 0x1C001A8BC (ScsiReportLunsCommand.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001AC18 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C001AD3C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiUnmapRequest @ 0x1C001AFCC (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B34C (SetProtocolInfoFeatureData.c)
 *     ProcessCommandNvmePacket @ 0x1C0024E0C (ProcessCommandNvmePacket.c)
 *     RecordCommandTimingHistory @ 0x1C0025AFC (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbDataBuffer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( a2 )
      *a2 = a1 + 60;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( a2 )
      *a2 = a1 + 16;
  }
  return v2;
}
