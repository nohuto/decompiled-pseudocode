/*
 * XREFs of NVMeZeroMemory @ 0x1C0009358
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00075A8 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0007E90 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0009394 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C0009624 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C0009BEC (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C0009E70 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C000A000 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C000B18C (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000B7B4 (IoReservedQueuesInitialize.c)
 *     NVMeCleanUpSqCqMapping @ 0x1C000C61C (NVMeCleanUpSqCqMapping.c)
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CE8C (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E9B4 (NVMeControllerSetHostIdentifier.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F57C (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000FE54 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C0010EE0 (SubmissionQueueReInit.c)
 *     DiagAllDiagnosticData @ 0x1C0011284 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x1C0011AB4 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012498 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013B50 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0013DB4 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0014008 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014CB4 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0014E20 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0014EA0 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0015628 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00158B8 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015C00 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015F80 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C00162C0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016B70 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016E98 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C001703C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C00171CC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C00173C0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x1C0017708 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C00178C0 (NVMeReservationReportStatusCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001859C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00189D4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C00190B0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00193F8 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001962C (QueryProtocolInfoLogPageData.c)
 *     ScsiInquiryRequest @ 0x1C0019E54 (ScsiInquiryRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B34C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BBE0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001D02C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001D2B0 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D580 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D8E0 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001E1C8 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001F1D4 (NVMeGetNamespaceMetadata.c)
 *     NVMeMapError @ 0x1C00208AC (NVMeMapError.c)
 *     NVMeNameSpaceIdentify @ 0x1C0021890 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0023080 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00235A4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023954 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C0024B48 (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C0024C28 (NVMeSyncHostTime.c)
 *     GetDynamicRegistrySettings @ 0x1C00265B8 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x1C0026780 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C0027FF0 (GetRegistrySettingsForSpecificKey.c)
 *     ReadBinaryRegistryValue @ 0x1C0028150 (ReadBinaryRegistryValue.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0028254 (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C0028450 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0004D40 (memset.c)
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
