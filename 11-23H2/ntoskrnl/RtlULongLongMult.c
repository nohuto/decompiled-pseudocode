/*
 * XREFs of RtlULongLongMult @ 0x14022CF3C
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14022CDC0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     EmpEvaluateNodeLink @ 0x14032DE04 (EmpEvaluateNodeLink.c)
 *     HalpSetTimer @ 0x140337B70 (HalpSetTimer.c)
 *     RtlCreateAtomTableEx @ 0x14033A060 (RtlCreateAtomTableEx.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14033E238 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x140346A74 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     SepCaptureTokenSecurityOperations @ 0x140370CF8 (SepCaptureTokenSecurityOperations.c)
 *     RtlpHpVaMgrCtxStart @ 0x140388D58 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3C84 (HalpTimerSchedulePeriodicQueries.c)
 *     EtwpGetDurationSince @ 0x140467D8E (EtwpGetDurationSince.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404FE844 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404FE940 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404FEA70 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpSetResumeTime @ 0x14051CC18 (HalpSetResumeTime.c)
 *     ExPoolQueryLimits @ 0x140607910 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140607C54 (ExPoolSetLimit.c)
 *     PnpAllocatePWSTR @ 0x1406CCC6C (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D4A28 (AslStringDuplicate.c)
 *     SeCaptureUnicodeStringStructures @ 0x1406D4EAC (SeCaptureUnicodeStringStructures.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140722C80 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1407A3CD0 (MiCaptureAllocateMapExtendedParameters.c)
 *     PopBootStatGet @ 0x1407EC7B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EED48 (PopBootStatSet.c)
 *     PnpConcatPWSTR @ 0x1407FAC78 (PnpConcatPWSTR.c)
 *     PnpAllocateMultiSZ @ 0x14081995C (PnpAllocateMultiSZ.c)
 *     PnpCopyDevPropertyArray @ 0x140819E30 (PnpCopyDevPropertyArray.c)
 *     PopFxConvertV1Components @ 0x140836438 (PopFxConvertV1Components.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x140845C08 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PpmRegisterProfiles @ 0x140849E18 (PpmRegisterProfiles.c)
 *     PopBootStatCheckIntegrity @ 0x14084D83C (PopBootStatCheckIntegrity.c)
 *     WmipBuildInstanceSet @ 0x14086A614 (WmipBuildInstanceSet.c)
 *     PopFxPepPerfInfoQuery @ 0x140985944 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x140985B48 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x140988F88 (PopReadResumeContext.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x1409C7E24 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x1409C7F88 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1409C8744 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409C8808 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x140A51A10 (SdbpResolveMatchingFile.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A5A2FC (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A5A484 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A5A668 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7A20 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF21F0 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140B7333C (GetBootSystemTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  return v3;
}
