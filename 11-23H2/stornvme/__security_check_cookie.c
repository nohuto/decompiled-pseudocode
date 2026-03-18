/*
 * XREFs of __security_check_cookie @ 0x1C00038A0
 * Callers:
 *     ScsiToNVMe @ 0x1C00015C0 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     NVMeCompletionDpcRoutine @ 0x1C0002A40 (NVMeCompletionDpcRoutine.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C000398C (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003E48 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __GSHandlerCheckCommon @ 0x1C000479C (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C0007E90 (NVMeHwFindAdapter.c)
 *     NVMeLogEtwControllerInfo @ 0x1C000894C (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x1C0008B44 (NVMeLogTelemetry.c)
 *     ControllerReset @ 0x1C00097A8 (ControllerReset.c)
 *     GetInterruptMessageInformation @ 0x1C0009BEC (GetInterruptMessageInformation.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1C000C470 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerInitPart1 @ 0x1C000D910 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000F020 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000F57C (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000F7F0 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012498 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C00126E8 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00128F4 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C0012E9C (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0014334 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00144EC (IoctlStorageStreamsGetParameters.c)
 *     NVMeGetRichDeviceDescription @ 0x1C00166BC (NVMeGetRichDeviceDescription.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C9C0 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C001DC40 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0022BC4 (NVMeReenumerateNameSpaceRescan.c)
 *     DpcWatchdogTimerRemainsMoreThan @ 0x1C00264F0 (DpcWatchdogTimerRemainsMoreThan.c)
 *     GetDynamicRegistrySettings @ 0x1C00265B8 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x1C0026780 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C0027FF0 (GetRegistrySettingsForSpecificKey.c)
 *     NVMeSendControllerInternalData @ 0x1C00284B0 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x1C0028BAC (NVMeSendLunInternalData.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C003424C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0037114 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
