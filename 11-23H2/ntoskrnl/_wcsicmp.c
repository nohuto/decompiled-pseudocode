/*
 * XREFs of _wcsicmp @ 0x1403D9C30
 * Callers:
 *     LdrRscIsTypeExist @ 0x1402F753C (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x1402F8238 (LdrpResSearchResourceMappedFile.c)
 *     PipUpdateDeviceProducts @ 0x140374FE0 (PipUpdateDeviceProducts.c)
 *     HalpMcUpdateFindDataTableEntry @ 0x14037989C (HalpMcUpdateFindDataTableEntry.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A12D4 (RtlpMuiRegAddAlternateCodePage.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403AD8C8 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x140562488 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1405624FC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14058ACBC (PopFxIsDevicePotentialDripsConstraint.c)
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     WmipPrepareWnodeSI @ 0x1406C6514 (WmipPrepareWnodeSI.c)
 *     PiDqPropertyCallback @ 0x1406CA210 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406CEB90 (PiPnpRtlInterfaceFilterCallback.c)
 *     AslpFileVerQueryBlock @ 0x1406D4870 (AslpFileVerQueryBlock.c)
 *     RtlpHashStringToAtom @ 0x140718170 (RtlpHashStringToAtom.c)
 *     LdrpSearchResourceSection_U @ 0x140755F00 (LdrpSearchResourceSection_U.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14075946C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407597EC (AslpFileGetVersionBlock.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E5E0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783734 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryApplyObjectEvent @ 0x140786E84 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 *     PropertyEval @ 0x140789FD0 (PropertyEval.c)
 *     StringListContains @ 0x14078D94C (StringListContains.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078E7D8 (PiBuildDeviceNodeInstancePath.c)
 *     _CmUpdateDevicePanel @ 0x140798EEC (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B7B0 (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwUpdateArrayProperties @ 0x14079CB48 (PiSwUpdateArrayProperties.c)
 *     PiDmCompareObjects @ 0x1407AD5F0 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1407BEB10 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB16C (PiDcHandleCustomDeviceEvent.c)
 *     GetPropertyFromPropArray @ 0x1407E0250 (GetPropertyFromPropArray.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E6874 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA238 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x1407FB468 (ConstraintEval.c)
 *     BiGetNtPartitionPath @ 0x1408075E0 (BiGetNtPartitionPath.c)
 *     BiIsValidDiskDevice @ 0x140807A34 (BiIsValidDiskDevice.c)
 *     SLQueryLicenseValueInternal @ 0x14080F564 (SLQueryLicenseValueInternal.c)
 *     DrvDbSuspendDatabase @ 0x1408117EC (DrvDbSuspendDatabase.c)
 *     PiDrvDbSetupNodeHive @ 0x140811C48 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140813270 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140819198 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14081B5D8 (PiSwDeviceFindInterfaceEntry.c)
 *     _CmGetDeviceSiblings @ 0x14083947C (_CmGetDeviceSiblings.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A4A8 (PiDqActionDataGetChangedProperties.c)
 *     RtlpLangNameInMultiSzString @ 0x14084521C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x140845D0C (RtlpMuiRegGetStringIndexInPool.c)
 *     SdbpFindMatchingName @ 0x14084A228 (SdbpFindMatchingName.c)
 *     PiSwDeviceCompareObjects @ 0x140854140 (PiSwDeviceCompareObjects.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140856594 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmIsLocalMachineContainer @ 0x14085D8A8 (_CmIsLocalMachineContainer.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1408651BC (PiDrvDbRegisterNodeCallback.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140866230 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14086648C (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408665C4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipCheckForDenyExecute @ 0x140866EE4 (PipCheckForDenyExecute.c)
 *     PiSwStopDestroy @ 0x140869F08 (PiSwStopDestroy.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1408725A0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     IopErrorLogThread @ 0x140872770 (IopErrorLogThread.c)
 *     PiDevCfgMigrateDevice @ 0x14087C1BC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14087C840 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087CFE0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14087E500 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x14087EE40 (PiDevCfgResolveVariable.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14088138C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140884514 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ArbShareDriverExclusive @ 0x140936AAC (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x1409587D8 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x14095A0A0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B430 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14095B680 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DC8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F408 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x140960120 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961CEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140967498 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDrvDbOverlayNodeHive @ 0x140970928 (PiDrvDbOverlayNodeHive.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099D5F4 (PpmProcessSettingsFromQueryTable.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E3B0 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EDB8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4FDAC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x140A51900 (SdbpMatchDeviceString.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A51DF0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A51ED0 (SdbpFindNextNamedTagHelper.c)
 *     SiGetEspFromFirmware @ 0x140A600E4 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140A604B4 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140A60560 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A63420 (_CmMatchLastKnownParentCallback.c)
 *     _CmFindFilterListInflectionPoint @ 0x140A67DC0 (_CmFindFilterListInflectionPoint.c)
 *     _CmGetDeclarativeFilterList @ 0x140A67EC0 (_CmGetDeclarativeFilterList.c)
 *     _CmMergeFilterLists @ 0x140A6973C (_CmMergeFilterLists.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C7C0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D464 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x140A73C20 (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A748F4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A75088 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140AC6E94 (VfIsPCIBus.c)
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
