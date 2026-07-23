/*
 * XREFs of NtOpenKey @ 0x18009F030
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A754 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadUserUIByPolicy @ 0x18000A8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadLanguageConfigList @ 0x18000A9A0 (RtlpLoadLanguageConfigList.c)
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18000B474 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetPersistedStateLocation @ 0x18000B6A0 (RtlGetPersistedStateLocation.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlOpenCurrentUser @ 0x18000EAA0 (RtlOpenCurrentUser.c)
 *     RtlCapabilityCheck @ 0x180011970 (RtlCapabilityCheck.c)
 *     WerpGlobalFlagsForProcess @ 0x180051B24 (WerpGlobalFlagsForProcess.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800604EC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x1800605D4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x1800608C4 (EtwpQueryRegString.c)
 *     RtlpLookupCurDirSetting @ 0x18006ABA8 (RtlpLookupCurDirSetting.c)
 *     SaferpIsV2PolicyPresent @ 0x180073418 (SaferpIsV2PolicyPresent.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076A60 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180076D50 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180078090 (RtlpGetDeviceFamilyInfoEnum.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x18007F134 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpTestHookInitialize @ 0x18007F4E0 (RtlpTestHookInitialize.c)
 *     RtlpNtOpenKey @ 0x1800806E0 (RtlpNtOpenKey.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083530 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180087880 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A824 (RtlpGetNtProductTypeFromRegistry.c)
 *     RXactpOpenTargetKey @ 0x18008BB50 (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DDF8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800ADFE4 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800AE7D6 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D76F0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD8B0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E4844 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800E8890 (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E8940 (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E97D0 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EA814 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800EC3D8 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800EC470 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ECF20 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE200 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800F9980 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800FBAA0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpOverrideGCInterval @ 0x1800FF848 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x180109B58 (RtlpGetLocaleDataKey.c)
 *     RtlpIsCustomLocale @ 0x180109DC4 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x18010EC10 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x18010ED50 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180113D84 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180114C04 (_RtlpRemovePendingDeleteLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012D434 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012D6D0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
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
