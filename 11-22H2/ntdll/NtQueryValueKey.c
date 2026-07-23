/*
 * XREFs of NtQueryValueKey @ 0x18009F0D0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlGetPersistedStateLocation @ 0x18000B6A0 (RtlGetPersistedStateLocation.c)
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     RtlCapabilityCheck @ 0x180011970 (RtlCapabilityCheck.c)
 *     WerpGlobalFlagsForProcess @ 0x180051B24 (WerpGlobalFlagsForProcess.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800604EC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x1800605D4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x1800608C4 (EtwpQueryRegString.c)
 *     RtlpLookupCurDirSetting @ 0x18006ABA8 (RtlpLookupCurDirSetting.c)
 *     SaferpIsV2PolicyPresent @ 0x180073418 (SaferpIsV2PolicyPresent.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076A60 (RtlpProcessIFEOKeyFilter.c)
 *     ReadUlongFromKey @ 0x1800782B4 (ReadUlongFromKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D900 (RtlQueryImageFileKeyOption.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x18007F1EC (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     RtlpTestHookInitialize @ 0x18007F4E0 (RtlpTestHookInitialize.c)
 *     RtlpNtQueryValueKey @ 0x1800800A0 (RtlpNtQueryValueKey.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A824 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18008D790 (RtlQueryRegistryValueWithFallback.c)
 *     RtlInitializeRXact @ 0x18008D8C0 (RtlInitializeRXact.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800ADFE4 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800AE7D6 (RtlpHpApplySegmentHeapConfigurations.c)
 *     QueryRegistryValue @ 0x1800B0230 (QueryRegistryValue.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6680 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800D69F4 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D76F0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD8B0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800DF14C (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800E89F0 (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E97D0 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EA814 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800EC470 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ECF20 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EE3E0 (RtlpQueryEafPlusModuleList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800F9980 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpHpOverrideGCInterval @ 0x1800FF848 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x180109CE4 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x180109DC4 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x18010EC10 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x18010ED50 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180114000 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012D6D0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
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
