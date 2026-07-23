/*
 * XREFs of NtOpenKey @ 0x1800A42B0
 * Callers:
 *     EtwpGetCpuSpeedFromRegistry @ 0x180008D64 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x180008E4C (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x18000913C (EtwpQueryRegString.c)
 *     RtlpQueryRegistryValues @ 0x180009D1C (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x18000A5F4 (RtlpGetRegistryHandle.c)
 *     RtlCapabilityCheck @ 0x180012560 (RtlCapabilityCheck.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18004F360 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetPersistedStateLocation @ 0x180050B20 (RtlGetPersistedStateLocation.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180062EC0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006DBD0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006E5F4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18006EA54 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlOpenCurrentUser @ 0x18006F250 (RtlOpenCurrentUser.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006F390 (RtlpLoadUserUIByPolicy.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180072370 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x18007C570 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007C5D8 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x180083288 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpTestHookInitialize @ 0x180083B50 (RtlpTestHookInitialize.c)
 *     RtlpLookupCurDirSetting @ 0x180084E88 (RtlpLookupCurDirSetting.c)
 *     RtlpNtOpenKey @ 0x180084F90 (RtlpNtOpenKey.c)
 *     WerpGlobalFlagsForProcess @ 0x18008A834 (WerpGlobalFlagsForProcess.c)
 *     RtlpIsCustomLocale @ 0x18008FA30 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800915D0 (RtlpGetNtProductTypeFromRegistry.c)
 *     RXactpOpenTargetKey @ 0x180091904 (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180093130 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D768C (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD130 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E59B4 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800E9A1C (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E9ACC (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EA470 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EB360 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800ECB08 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ECBA0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ED690 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800F0590 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800F9720 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800FBDB0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC470 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800FF814 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpHpOverrideGCInterval @ 0x1800FFC1C (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x180109A88 (RtlpGetLocaleDataKey.c)
 *     RtlOsDeploymentState @ 0x18010E9E0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x18010EB20 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180113918 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1801147B8 (_RtlpRemovePendingDeleteLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1801287D8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180128A70 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
