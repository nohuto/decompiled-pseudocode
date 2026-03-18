/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C000C2EC
 * Callers:
 *     NVMeControllerAllocateLocalCommand @ 0x1C000431C (NVMeControllerAllocateLocalCommand.c)
 *     IoQueuesInitialize @ 0x1C000B18C (IoQueuesInitialize.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E9B4 (NVMeControllerSetHostIdentifier.c)
 *     FirmwareGetInfo @ 0x1C0011E94 (FirmwareGetInfo.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013B50 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0014008 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014CB4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0014EA0 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0015628 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00158B8 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016830 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016E98 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C001703C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C00171CC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C00173C0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x1C0017708 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x1C0018830 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C00190B0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00193F8 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001962C (QueryProtocolInfoLogPageData.c)
 *     ScsiModeSenseRequest @ 0x1C001A174 (ScsiModeSenseRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B34C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BBE0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001D02C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001D2B0 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D580 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D8E0 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001DAAC (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001DD10 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001DEA4 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001E1C8 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E690 (NVMeGetHealthInfoLog.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001F1D4 (NVMeGetNamespaceMetadata.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001F6C0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001FE50 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeNameSpaceIdentify @ 0x1C0021890 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C00224B0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0023080 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00235A4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023954 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C0024C28 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 252);
  result = StorPortExtendedFunction(82LL, a1, a2);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, a2);
  }
  return result;
}
