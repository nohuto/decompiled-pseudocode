/*
 * XREFs of RtlULongLongMult @ 0x14022CE4C
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14022CCD0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     EmpEvaluateNodeLink @ 0x14032D9D4 (EmpEvaluateNodeLink.c)
 *     HalpSetTimer @ 0x140337740 (HalpSetTimer.c)
 *     RtlCreateAtomTableEx @ 0x140339C30 (RtlCreateAtomTableEx.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14033DDA8 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403462F4 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     SepCaptureTokenSecurityOperations @ 0x140370508 (SepCaptureTokenSecurityOperations.c)
 *     RtlpHpVaMgrCtxStart @ 0x140397528 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3414 (HalpTimerSchedulePeriodicQueries.c)
 *     EtwpGetDurationSince @ 0x14046732E (EtwpGetDurationSince.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404FE404 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404FE500 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404FE630 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpSetResumeTime @ 0x14051C788 (HalpSetResumeTime.c)
 *     ExPoolQueryLimits @ 0x140607430 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140607774 (ExPoolSetLimit.c)
 *     PnpAllocatePWSTR @ 0x1406CCCEC (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D4AA8 (AslStringDuplicate.c)
 *     SeCaptureUnicodeStringStructures @ 0x1406D4F2C (SeCaptureUnicodeStringStructures.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140722AF0 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1407A3FF0 (MiCaptureAllocateMapExtendedParameters.c)
 *     PopBootStatGet @ 0x1407ECA68 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EEFF8 (PopBootStatSet.c)
 *     PnpConcatPWSTR @ 0x1407FB058 (PnpConcatPWSTR.c)
 *     PnpAllocateMultiSZ @ 0x14081BC0C (PnpAllocateMultiSZ.c)
 *     PnpCopyDevPropertyArray @ 0x14081C0E0 (PnpCopyDevPropertyArray.c)
 *     PopFxConvertV1Components @ 0x140837C88 (PopFxConvertV1Components.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x140847698 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PpmRegisterProfiles @ 0x14084AD78 (PpmRegisterProfiles.c)
 *     PopBootStatCheckIntegrity @ 0x14084E3B0 (PopBootStatCheckIntegrity.c)
 *     WmipBuildInstanceSet @ 0x14086A8A4 (WmipBuildInstanceSet.c)
 *     PopFxPepPerfInfoQuery @ 0x1409857F4 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1409859F8 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x140988E38 (PopReadResumeContext.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x1409C7CD4 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x1409C7E38 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1409C85F4 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409C86B8 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x140A517D0 (SdbpResolveMatchingFile.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A5A0BC (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A5A244 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A5A428 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7C70 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AED07C (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF31E0 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140B37C28 (GetBootSystemTime.c)
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
