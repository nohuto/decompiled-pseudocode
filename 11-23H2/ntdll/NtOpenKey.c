/*
 * XREFs of NtOpenKey @ 0x1800A10F0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008C2C (RtlpQueryRegistryValues.c)
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A534 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadUserUIByPolicy @ 0x18000A690 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadLanguageConfigList @ 0x18000A780 (RtlpLoadLanguageConfigList.c)
 *     RtlpGetRegistryHandle @ 0x18000AAF8 (RtlpGetRegistryHandle.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18000B254 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B650 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlOpenCurrentUser @ 0x18000E890 (RtlOpenCurrentUser.c)
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 *     WerpGlobalFlagsForProcess @ 0x1800519C4 (WerpGlobalFlagsForProcess.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18005D65C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x18005D744 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x18005DA34 (EtwpQueryRegString.c)
 *     RtlpLookupCurDirSetting @ 0x18006AB88 (RtlpLookupCurDirSetting.c)
 *     SaferpIsV2PolicyPresent @ 0x180073A88 (SaferpIsV2PolicyPresent.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800770D0 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800773C0 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180078700 (RtlpGetDeviceFamilyInfoEnum.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x18007F7A4 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpTestHookInitialize @ 0x18007FB50 (RtlpTestHookInitialize.c)
 *     RtlpNtOpenKey @ 0x180080D50 (RtlpNtOpenKey.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180088080 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008B024 (RtlpGetNtProductTypeFromRegistry.c)
 *     RXactpOpenTargetKey @ 0x18008C350 (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008E5F8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800B00B4 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800B08A6 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D7050 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD260 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E5B74 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800E9BC0 (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E9C70 (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EAB00 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800EBB44 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800ED708 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ED7A0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800EE2C0 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EF610 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800FAD90 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800FCEB0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpOverrideGCInterval @ 0x180100C58 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x18010AFC8 (RtlpGetLocaleDataKey.c)
 *     RtlpIsCustomLocale @ 0x18010B234 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x180110090 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1801101D0 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180111E00 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180115204 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180116084 (_RtlpRemovePendingDeleteLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012E954 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012EBF0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
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
