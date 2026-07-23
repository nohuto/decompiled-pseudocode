/*
 * XREFs of NtQueryValueKey @ 0x1800A1190
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008C2C (RtlpQueryRegistryValues.c)
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     LdrpQueryValueKey @ 0x18000BAC0 (LdrpQueryValueKey.c)
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 *     WerpGlobalFlagsForProcess @ 0x1800519C4 (WerpGlobalFlagsForProcess.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18005D65C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x18005D744 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x18005DA34 (EtwpQueryRegString.c)
 *     RtlpLookupCurDirSetting @ 0x18006AB88 (RtlpLookupCurDirSetting.c)
 *     SaferpIsV2PolicyPresent @ 0x180073A88 (SaferpIsV2PolicyPresent.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800770D0 (RtlpProcessIFEOKeyFilter.c)
 *     ReadUlongFromKey @ 0x180078924 (ReadUlongFromKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007DF70 (RtlQueryImageFileKeyOption.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x18007F85C (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     RtlpTestHookInitialize @ 0x18007FB50 (RtlpTestHookInitialize.c)
 *     RtlpNtQueryValueKey @ 0x180080710 (RtlpNtQueryValueKey.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008B024 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18008DF90 (RtlQueryRegistryValueWithFallback.c)
 *     RtlInitializeRXact @ 0x18008E0C0 (RtlInitializeRXact.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800B00B4 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800B08A6 (RtlpHpApplySegmentHeapConfigurations.c)
 *     QueryRegistryValue @ 0x1800B2300 (QueryRegistryValue.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D5FE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800D6354 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D7050 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCEA8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD260 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800E0478 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800E9D20 (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EAB00 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EBB44 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ED7A0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800EE2C0 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EF7F0 (RtlpQueryEafPlusModuleList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800FAD90 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpHpOverrideGCInterval @ 0x180100C58 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x18010B154 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x18010B234 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x180110090 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1801101D0 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180115480 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012EBF0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
