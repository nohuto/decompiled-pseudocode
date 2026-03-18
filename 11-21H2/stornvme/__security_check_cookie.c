/*
 * XREFs of __security_check_cookie @ 0x1C000E880
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     NVMeLogEtwControllerInfo @ 0x1C0005BE0 (NVMeLogEtwControllerInfo.c)
 *     GetInterruptMessageInformation @ 0x1C0006260 (GetInterruptMessageInformation.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C0006EB0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     GetProcessorInformation @ 0x1C00075B8 (GetProcessorInformation.c)
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     DpcWatchdogTimerRemainsMoreThan @ 0x1C000A41C (DpcWatchdogTimerRemainsMoreThan.c)
 *     NVMeLogTelemetry @ 0x1C000A660 (NVMeLogTelemetry.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     GetRegistrySettings @ 0x1C000B42C (GetRegistrySettings.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000CE44 (NVMeGetRichDeviceDescription.c)
 *     FormInquiryStandardData @ 0x1C000CF58 (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C000D738 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C000D864 (FormInquiryDeviceIdentifiersData.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C000E5D0 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C000F320 (NVMeReenumerateNameSpaceRescan.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0010068 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __GSHandlerCheckCommon @ 0x1C001049C (__GSHandlerCheckCommon.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1C0018670 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C00196F4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C00198AC (NVMeInitStreams.c)
 *     GetStreamId @ 0x1C001AF28 (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C001C02C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001C1E4 (IoctlStorageStreamsGetParameters.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0021E00 (NVMeControllerPanicResetActionWorkItem.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C0025594 (GetRegistrySettingsForSpecificKey.c)
 *     NVMeSendControllerInternalData @ 0x1C0025758 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x1C0025E54 (NVMeSendLunInternalData.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C0032008 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C0032370 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00340BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
