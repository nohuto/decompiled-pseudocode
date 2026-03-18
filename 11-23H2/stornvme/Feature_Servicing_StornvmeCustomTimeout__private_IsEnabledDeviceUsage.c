/*
 * XREFs of Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648
 * Callers:
 *     NVMeHwStartIo @ 0x1C00022D0 (NVMeHwStartIo.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D7C4 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E9B4 (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EC3C (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016830 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeBuildDevicePollingConfiguration @ 0x1C001C490 (NVMeBuildDevicePollingConfiguration.c)
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
 *     NVMeGetNVMSetAttributeList @ 0x1C001EC38 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001EE1C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001EFA8 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001F1D4 (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001F574 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001F6C0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001FB14 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001FE50 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0020284 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C0021890 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C00224B0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00235A4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023954 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C0023CF0 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetArbitration @ 0x1C0023ED8 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0024004 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00240F0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C002429C (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C00243B4 (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0024864 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSyncHostTime @ 0x1C0024C28 (NVMeSyncHostTime.c)
 * Callees:
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledFallback @ 0x1C0004680 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_StornvmeCustomTimeout__private_featureState & 0x10) != 0 )
    return Feature_Servicing_StornvmeCustomTimeout__private_featureState & 1;
  else
    return Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_StornvmeCustomTimeout__private_featureState,
             3LL);
}
