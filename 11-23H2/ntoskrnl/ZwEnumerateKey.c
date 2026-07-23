/*
 * XREFs of ZwEnumerateKey @ 0x14041B730
 * Callers:
 *     BiZwEnumerateKey @ 0x140373F2C (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A1360 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A1420 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051BB20 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x1405F05C0 (DifZwEnumerateKeyWrapper.c)
 *     VrpPostEnumerateKey @ 0x14077ABA8 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1407CE520 (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x1407CECF8 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x140809344 (EtwpEnumerateKeyProviders.c)
 *     CmpLoadLayerVersions @ 0x14080D5A8 (CmpLoadLayerVersions.c)
 *     WdipSemLoadNextEndEvent @ 0x140830A80 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140830D84 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140831004 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140831410 (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x140838680 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C048 (EtwpEnumerateAutologgerPath.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083FC80 (RtlpUpdateDynamicTimeZones.c)
 *     CmpGetAcpiProfileInformation @ 0x14084AFD0 (CmpGetAcpiProfileInformation.c)
 *     PiDcInitUpdateProperties @ 0x14084F7A8 (PiDcInitUpdateProperties.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862AE8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     _RegRtlEnumKey @ 0x14086B6EC (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14087CF34 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087CFE0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 *     SepReadAndInsertCaps @ 0x1409D1F0C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DE288 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E4168 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E45A8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4CB4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140A0A38C (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x140A10068 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140A10464 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A10F4C (CmpMoveBiosAliasTable.c)
 *     AslRegistryEnumKey @ 0x140A544D0 (AslRegistryEnumKey.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B34A9C (VhdAutoAttachVirtualDisks.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulateProcessorClasses @ 0x140B70B7C (PopReadSimulateProcessorClasses.c)
 *     PsInitializeBootCpuPartitions @ 0x140B71D74 (PsInitializeBootCpuPartitions.c)
 *     RegistryOverwriteCentralProcessor @ 0x140B90CD8 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
