/*
 * XREFs of NVMeZeroMemory @ 0x1C0005100
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C00014A0 (QueryProtocolInfoLogPageData.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0001870 (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C0001950 (WMultiStringToAscii.c)
 *     NVMeMapError @ 0x1C0001D84 (NVMeMapError.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002BF0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003610 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeHwBuildIo @ 0x1C0004360 (NVMeHwBuildIo.c)
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 *     GetInterruptMessageInformation @ 0x1C0006260 (GetInterruptMessageInformation.c)
 *     IoSqToIoCqMapping @ 0x1C00066C8 (IoSqToIoCqMapping.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C0006EB0 (NVMeInitHostMemoryBuffer.c)
 *     GetProcessorInformation @ 0x1C00075B8 (GetProcessorInformation.c)
 *     AdminQueueInitialize @ 0x1C0007E00 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C0008168 (IoQueuesInitialize.c)
 *     NVMePowerInitialize @ 0x1C0009B20 (NVMePowerInitialize.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     ControllerAllocateUncachedExtension @ 0x1C000B2D0 (ControllerAllocateUncachedExtension.c)
 *     GetRegistrySettings @ 0x1C000B42C (GetRegistrySettings.c)
 *     ReadBinaryRegistryValue @ 0x1C000CA18 (ReadBinaryRegistryValue.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CAF4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetNamespaceMetadata @ 0x1C000CC64 (NVMeGetNamespaceMetadata.c)
 *     NVMeControllerFilterResourceRequirements @ 0x1C000D2BC (NVMeControllerFilterResourceRequirements.c)
 *     GetProcessorGroupInformation @ 0x1C000D57C (GetProcessorGroupInformation.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000D864 (FormInquiryDeviceIdentifiersData.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     CompletionQueueReInit @ 0x1C0017D4C (CompletionQueueReInit.c)
 *     IoReservedQueuesInitialize @ 0x1C0018434 (IoReservedQueuesInitialize.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C0019314 (NVMeControllerSetHostIdentifier.c)
 *     SubmissionQueueReInit @ 0x1C001A044 (SubmissionQueueReInit.c)
 *     DiagAllDiagnosticData @ 0x1C001A27C (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x1C001AA58 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C001B91C (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C001BAD4 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001BD14 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C001C6EC (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C001C858 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C001C8D4 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001CFA8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001D238 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C001D540 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C001D870 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C001DFE0 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C001E16C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C001E2EC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C001E4D0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x1C001E814 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C001E9E0 (NVMeReservationReportStatusCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C001FAF4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001FE84 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0020158 (QueryProtocolInfoIdentifyData.c)
 *     SetProtocolInfoFeatureData @ 0x1C002111C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C00223F4 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0023918 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0023B84 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023F2C (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C0025594 (GetRegistrySettingsForSpecificKey.c)
 * Callees:
 *     memset @ 0x1C00109C0 (memset.c)
 */

void *__fastcall NVMeZeroMemory(void *a1, unsigned int a2)
{
  unsigned int v2; // edx
  void *result; // rax

  if ( (a2 & 3) != 0 )
  {
    if ( a2 )
      return memset(a1, 0, a2);
  }
  else
  {
    v2 = a2 >> 2;
    if ( v2 )
      return memset(a1, 0, 4LL * v2);
  }
  return result;
}
