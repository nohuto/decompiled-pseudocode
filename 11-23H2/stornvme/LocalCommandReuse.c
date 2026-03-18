/*
 * XREFs of LocalCommandReuse @ 0x1C000C29C
 * Callers:
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D7C4 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E9B4 (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EC3C (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016830 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeBuildPollingConfiguration @ 0x1C001C59C (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C001C750 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C001C868 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001CF38 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001D02C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C001D1C4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001D2B0 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D494 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D580 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x1C001D790 (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D8E0 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001DAAC (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001DD10 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001E09C (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001E1C8 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001E558 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E690 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C001E850 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001EC38 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001EE1C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001EFA8 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001F1D4 (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001F574 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001F6C0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001FB14 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001FE50 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0020284 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0020358 (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C0021890 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C00224B0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0023080 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00235A4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023954 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C0023CF0 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetArbitration @ 0x1C0023ED8 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0024004 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00240F0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C002429C (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C00243B4 (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C0024A4C (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C0024C28 (NVMeSyncHostTime.c)
 * Callees:
 *     memset @ 0x1C0004D40 (memset.c)
 */

__int64 __fastcall LocalCommandReuse(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 4344) |= 0x40u;
  v3 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v3, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4232LL) = 0LL;
  result = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = result;
  *(_BYTE *)a2 = 1;
  return result;
}
