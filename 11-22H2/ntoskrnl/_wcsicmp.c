/*
 * XREFs of _wcsicmp @ 0x1403D93F0
 * Callers:
 *     LdrRscIsTypeExist @ 0x1402F72AC (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1402F7FA8 (LdrpResSearchResourceMappedFile.c)
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x140379D4C (HalpMcUpdateFindDataTableEntry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A0E04 (RtlpMuiRegAddAlternateCodePage.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403AD058 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140561E68 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x140561EDC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14058A85C (PopFxIsDevicePotentialDripsConstraint.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     WmipPrepareWnodeSI @ 0x1406C6594 (WmipPrepareWnodeSI.c)
 *     PiDqPropertyCallback @ 0x1406CA290 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406CEC10 (PiPnpRtlInterfaceFilterCallback.c)
 *     AslpFileVerQueryBlock @ 0x1406D48F0 (AslpFileVerQueryBlock.c)
 *     RtlpHashStringToAtom @ 0x140717FE0 (RtlpHashStringToAtom.c)
 *     LdrpSearchResourceSection_U @ 0x140756220 (LdrpSearchResourceSection_U.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14075978C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileGetVersionBlock @ 0x140759B0C (AslpFileGetVersionBlock.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E900 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783A54 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407871A4 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PropertyEval @ 0x14078A2F0 (PropertyEval.c)
 *     StringListContains @ 0x14078DC6C (StringListContains.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078EAF8 (PiBuildDeviceNodeInstancePath.c)
 *     _CmUpdateDevicePanel @ 0x14079920C (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079BAD0 (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwUpdateArrayProperties @ 0x14079CE68 (PiSwUpdateArrayProperties.c)
 *     PiDmCompareObjects @ 0x1407AD9B0 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1407BEDD0 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB41C (PiDcHandleCustomDeviceEvent.c)
 *     GetPropertyFromPropArray @ 0x1407E0500 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E6B24 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA618 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x1407FB848 (ConstraintEval.c)
 *     BiGetNtPartitionPath @ 0x140809890 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140809CE4 (BiIsValidDiskDevice.c)
 *     SLQueryLicenseValueInternal @ 0x140811814 (SLQueryLicenseValueInternal.c)
 *     DrvDbSuspendDatabase @ 0x140813A9C (DrvDbSuspendDatabase.c)
 *     PiDrvDbSetupNodeHive @ 0x140813EF8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140815520 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14081B448 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14081D888 (PiSwDeviceFindInterfaceEntry.c)
 *     _CmGetDeviceSiblings @ 0x14083ACCC (_CmGetDeviceSiblings.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083BF38 (PiDqActionDataGetChangedProperties.c)
 *     RtlpLangNameInMultiSzString @ 0x140846CAC (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x14084779C (RtlpMuiRegGetStringIndexInPool.c)
 *     SdbpFindMatchingName @ 0x14084B188 (SdbpFindMatchingName.c)
 *     PiSwDeviceCompareObjects @ 0x140854D50 (PiSwDeviceCompareObjects.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1408571A4 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmIsLocalMachineContainer @ 0x14085DAC8 (_CmIsLocalMachineContainer.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14086539C (PiDrvDbRegisterNodeCallback.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1408664C0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14086671C (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140866854 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipCheckForDenyExecute @ 0x140867174 (PipCheckForDenyExecute.c)
 *     PiSwStopDestroy @ 0x14086A198 (PiSwStopDestroy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140872830 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     IopErrorLogThread @ 0x140872A00 (IopErrorLogThread.c)
 *     PiDevCfgMigrateDevice @ 0x14087C44C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14087CAD0 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087D270 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14087E790 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x14087F0D0 (PiDevCfgResolveVariable.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088161C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408847A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ArbShareDriverExclusive @ 0x14093695C (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x140958688 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140959F50 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B2E0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14095B530 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F2B8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14095FFD0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961B9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140967348 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDrvDbOverlayNodeHive @ 0x1409707D8 (PiDrvDbOverlayNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099D4A4 (PpmProcessSettingsFromQueryTable.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E170 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB78 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FB6C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140A516C0 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51BB0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51C90 (SdbpFindNextNamedTagHelper.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140A60274 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140A60320 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A631E0 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindFilterListInflectionPoint @ 0x140A67B80 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140A67C80 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x140A694FC (_CmMergeFilterLists.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C580 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D224 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140A739E0 (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A746B4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A74E48 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140AC7E74 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140AEEB84 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5C4DC (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140B95540 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140B960F0 (PipPendingServicesFilter.c)
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
