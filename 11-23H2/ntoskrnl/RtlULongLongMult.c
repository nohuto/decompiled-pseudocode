/*
 * XREFs of RtlULongLongMult @ 0x14022CE2C
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14022CCB0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     EmpEvaluateNodeLink @ 0x14032DB74 (EmpEvaluateNodeLink.c)
 *     HalpSetTimer @ 0x1403378E0 (HalpSetTimer.c)
 *     RtlCreateAtomTableEx @ 0x140339DD0 (RtlCreateAtomTableEx.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14033DFA8 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403467E4 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     SepCaptureTokenSecurityOperations @ 0x140370B58 (SepCaptureTokenSecurityOperations.c)
 *     RtlpHpVaMgrCtxStart @ 0x140388B78 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3AA4 (HalpTimerSchedulePeriodicQueries.c)
 *     EtwpGetDurationSince @ 0x14046798E (EtwpGetDurationSince.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404FE2F4 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404FE3F0 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404FE520 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpSetResumeTime @ 0x14051C6C8 (HalpSetResumeTime.c)
 *     ExPoolQueryLimits @ 0x1406073C0 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140607704 (ExPoolSetLimit.c)
 *     PnpAllocatePWSTR @ 0x1406CCC3C (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D49F8 (AslStringDuplicate.c)
 *     SeCaptureUnicodeStringStructures @ 0x1406D4E7C (SeCaptureUnicodeStringStructures.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140722A80 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1407A3AE0 (MiCaptureAllocateMapExtendedParameters.c)
 *     PopBootStatGet @ 0x1407EC4E8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EEA78 (PopBootStatSet.c)
 *     PnpConcatPWSTR @ 0x1407FA9A8 (PnpConcatPWSTR.c)
 *     PnpAllocateMultiSZ @ 0x14081968C (PnpAllocateMultiSZ.c)
 *     PnpCopyDevPropertyArray @ 0x140819B60 (PnpCopyDevPropertyArray.c)
 *     PopFxConvertV1Components @ 0x140836138 (PopFxConvertV1Components.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x140845908 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PpmRegisterProfiles @ 0x140849B18 (PpmRegisterProfiles.c)
 *     PopBootStatCheckIntegrity @ 0x14084D53C (PopBootStatCheckIntegrity.c)
 *     WmipBuildInstanceSet @ 0x14086A3D4 (WmipBuildInstanceSet.c)
 *     PopFxPepPerfInfoQuery @ 0x140985744 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x140985948 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x140988D88 (PopReadResumeContext.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x1409C7C24 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x1409C7D88 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1409C8544 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409C8608 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x140A51760 (SdbpResolveMatchingFile.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A5A04C (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A5A1D4 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A5A3B8 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA7BB0 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AEC0B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF21E0 (AnFwpBackgroundUpdateTimer.c)
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
