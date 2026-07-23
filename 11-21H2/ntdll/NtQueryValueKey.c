/*
 * XREFs of NtQueryValueKey @ 0x1800A4350
 * Callers:
 *     EtwpGetCpuSpeedFromRegistry @ 0x180008D64 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x180008E4C (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x18000913C (EtwpQueryRegString.c)
 *     RtlpQueryRegistryValues @ 0x180009D1C (RtlpQueryRegistryValues.c)
 *     RtlCapabilityCheck @ 0x180012560 (RtlCapabilityCheck.c)
 *     RtlGetPersistedStateLocation @ 0x180050B20 (RtlGetPersistedStateLocation.c)
 *     LdrpQueryValueKey @ 0x18006F0A8 (LdrpQueryValueKey.c)
 *     ReadUlongFromKey @ 0x180072594 (ReadUlongFromKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007C5D8 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x180081F20 (RtlQueryImageFileKeyOption.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x180083340 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     RtlpTestHookInitialize @ 0x180083B50 (RtlpTestHookInitialize.c)
 *     RtlpNtQueryValueKey @ 0x180083C70 (RtlpNtQueryValueKey.c)
 *     RtlpLookupCurDirSetting @ 0x180084E88 (RtlpLookupCurDirSetting.c)
 *     WerpGlobalFlagsForProcess @ 0x18008A834 (WerpGlobalFlagsForProcess.c)
 *     RtlpIsCustomLocale @ 0x18008FA30 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800915D0 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlInitializeRXact @ 0x180092D10 (RtlInitializeRXact.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6600 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800D6990 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D768C (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCD78 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD130 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800E0834 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800E9B7C (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EA470 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EB360 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ECBA0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ED690 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EEB28 (RtlpQueryEafPlusModuleList.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800F0590 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800F9720 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800F9AC0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800FF814 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpHpOverrideGCInterval @ 0x1800FFC1C (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x180109C14 (RtlpGetUserLocaleName.c)
 *     RtlOsDeploymentState @ 0x18010E9E0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x18010EB20 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180113B9C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180128A70 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     QueryRegistryValue @ 0x1801290E0 (QueryRegistryValue.c)
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
