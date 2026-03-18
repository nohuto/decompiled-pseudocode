/*
 * XREFs of _wcsicmp @ 0x1403D9A50
 * Callers:
 *     LdrRscIsTypeExist @ 0x1402F72AC (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1402F7FA8 (LdrpResSearchResourceMappedFile.c)
 *     PipUpdateDeviceProducts @ 0x140374E40 (PipUpdateDeviceProducts.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x1403796FC (HalpMcUpdateFindDataTableEntry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A10F4 (RtlpMuiRegAddAlternateCodePage.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403AD6E8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140561DC8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x140561E3C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14058A7CC (PopFxIsDevicePotentialDripsConstraint.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     WmipPrepareWnodeSI @ 0x1406C64E4 (WmipPrepareWnodeSI.c)
 *     PiDqPropertyCallback @ 0x1406CA1E0 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406CEB60 (PiPnpRtlInterfaceFilterCallback.c)
 *     AslpFileVerQueryBlock @ 0x1406D4840 (AslpFileVerQueryBlock.c)
 *     RtlpHashStringToAtom @ 0x140717F70 (RtlpHashStringToAtom.c)
 *     LdrpSearchResourceSection_U @ 0x140755D10 (LdrpSearchResourceSection_U.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14075927C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407595FC (AslpFileGetVersionBlock.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E3F0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783544 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryApplyObjectEvent @ 0x140786C94 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407884D0 (PiPnpRtlObjectEventWorker.c)
 *     PropertyEval @ 0x140789DE0 (PropertyEval.c)
 *     StringListContains @ 0x14078D75C (StringListContains.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078E5E8 (PiBuildDeviceNodeInstancePath.c)
 *     _CmUpdateDevicePanel @ 0x140798CFC (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B5C0 (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwUpdateArrayProperties @ 0x14079C958 (PiSwUpdateArrayProperties.c)
 *     PiDmCompareObjects @ 0x1407AD400 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1407BE840 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DAE9C (PiDcHandleCustomDeviceEvent.c)
 *     GetPropertyFromPropArray @ 0x1407DFF80 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E65A4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407F9F68 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x1407FB198 (ConstraintEval.c)
 *     BiGetNtPartitionPath @ 0x140807310 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140807764 (BiIsValidDiskDevice.c)
 *     SLQueryLicenseValueInternal @ 0x14080F294 (SLQueryLicenseValueInternal.c)
 *     DrvDbSuspendDatabase @ 0x14081151C (DrvDbSuspendDatabase.c)
 *     PiDrvDbSetupNodeHive @ 0x140811978 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140812FA0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140818EC8 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A5F0 (PiCreateDriverSwDeviceCallback.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14081B308 (PiSwDeviceFindInterfaceEntry.c)
 *     _CmGetDeviceSiblings @ 0x14083917C (_CmGetDeviceSiblings.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A1A8 (PiDqActionDataGetChangedProperties.c)
 *     RtlpLangNameInMultiSzString @ 0x140844F1C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x140845A0C (RtlpMuiRegGetStringIndexInPool.c)
 *     SdbpFindMatchingName @ 0x140849F28 (SdbpFindMatchingName.c)
 *     PiSwDeviceCompareObjects @ 0x140853E40 (PiSwDeviceCompareObjects.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140856294 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmIsLocalMachineContainer @ 0x14085D668 (_CmIsLocalMachineContainer.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140864F7C (PiDrvDbRegisterNodeCallback.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140865FF0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14086624C (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140866384 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipCheckForDenyExecute @ 0x140866CA4 (PipCheckForDenyExecute.c)
 *     PiSwStopDestroy @ 0x140869CC8 (PiSwStopDestroy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140872360 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     IopErrorLogThread @ 0x140872530 (IopErrorLogThread.c)
 *     PiDevCfgMigrateDevice @ 0x14087BF7C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14087C600 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087CDA0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14087E2C0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x14087EC00 (PiDevCfgResolveVariable.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088114C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408842D4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ArbShareDriverExclusive @ 0x1409368AC (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x1409585D8 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140959EA0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B230 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14095B480 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DA8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F208 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14095FF20 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961AEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140967298 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDrvDbOverlayNodeHive @ 0x140970728 (PiDrvDbOverlayNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099D3F4 (PpmProcessSettingsFromQueryTable.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E100 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB08 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FAFC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140A51650 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51B40 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C20 (SdbpFindNextNamedTagHelper.c)
 *     SiGetEspFromFirmware @ 0x140A5FE34 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140A60204 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140A602B0 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A63170 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindFilterListInflectionPoint @ 0x140A67B10 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140A67C10 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x140A6948C (_CmMergeFilterLists.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C510 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D1B4 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140A73970 (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A74644 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A74DD8 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140AC6EA4 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140AEDBC4 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140B94540 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140B950F0 (PipPendingServicesFilter.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = Str2;
  v3 = (char *)Str1 - (char *)Str2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
