/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C000EFC4
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002A40 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C00037DC (NVMeRequestComplete.c)
 *     NVMeControllerAllocateLocalCommand @ 0x1C000431C (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x1C00044B0 (NVMeControllerDeleteLocalCommandPool.c)
 *     IoQueuesFreeResources @ 0x1C000AF04 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C000B18C (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000E2F4 (NVMeControllerRemove.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E9B4 (NVMeControllerSetHostIdentifier.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00134A4 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0015A70 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015C00 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0015EC0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015F80 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C00162C0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016830 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016B70 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationReportStatus @ 0x1C0017708 (NVMeReservationReportStatus.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0018C70 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C0018D60 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001962C (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019AF0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C001B290 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001D02C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001D2B0 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D580 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D8E0 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C001DC40 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001DEA4 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001E1C8 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E690 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C001E850 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001F1D4 (NVMeGetNamespaceMetadata.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001F6C0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001FE50 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeNameSpaceIdentify @ 0x1C0021890 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C00224B0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0023080 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C00232C0 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeSyncHostTime @ 0x1C0024C28 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax

  if ( !a3 )
    return 3238002689LL;
  v5 = *a3;
  if ( !v5 || !a4 )
    return 3238002689LL;
  result = StorPortExtendedFunction(83LL, a1, v5);
  if ( !(_DWORD)result )
    *a3 = 0LL;
  return result;
}
