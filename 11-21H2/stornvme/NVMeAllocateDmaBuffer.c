/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C00055C4
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C00014A0 (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C0002AC0 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C000335C (ScsiModeSenseRequest.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C00069E8 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0006C38 (NVMeIoCompletionQueueCreate.c)
 *     IoQueuesInitialize @ 0x1C0008168 (IoQueuesInitialize.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00088B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0008A28 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CAF4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetNamespaceMetadata @ 0x1C000CC64 (NVMeGetNamespaceMetadata.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C0019314 (NVMeControllerSetHostIdentifier.c)
 *     IoctlQueryEnduranceInformation @ 0x1C001B91C (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001BD14 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C001C6EC (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C001C8D4 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001CFA8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001D238 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C001DC70 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationAcquireCommand @ 0x1C001DFE0 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C001E16C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C001E2EC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C001E4D0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x1C001E814 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x1C001F950 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001FE84 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0020158 (QueryProtocolInfoIdentifyData.c)
 *     SetProtocolInfoFeatureData @ 0x1C002111C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C00223F4 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C0022AC8 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0023B84 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023F2C (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // r15
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 244);
  v4 = a2;
  result = StorPortExtendedFunction(82LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, v4, 0LL);
  }
  return result;
}
