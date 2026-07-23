/*
 * XREFs of ZwEnumerateKey @ 0x14041ACE0
 * Callers:
 *     BiZwEnumerateKey @ 0x1403743E0 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A0E90 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A0F50 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B690 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x1405F00E0 (DifZwEnumerateKeyWrapper.c)
 *     VrpPostEnumerateKey @ 0x14077AEC8 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1407CE7E0 (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x1407CEFB8 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x14080B5F4 (EtwpEnumerateKeyProviders.c)
 *     CmpLoadLayerVersions @ 0x14080F858 (CmpLoadLayerVersions.c)
 *     WdipSemLoadNextEndEvent @ 0x1408322D0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1408325D4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140832854 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140832C60 (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x140839ED0 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083DAD8 (EtwpEnumerateAutologgerPath.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140841710 (RtlpUpdateDynamicTimeZones.c)
 *     CmpGetAcpiProfileInformation @ 0x14084BF30 (CmpGetAcpiProfileInformation.c)
 *     PiDcInitUpdateProperties @ 0x140850328 (PiDcInitUpdateProperties.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862AC8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     _RegRtlEnumKey @ 0x14086B97C (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14087D1C4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087D270 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E8F4 (PiDevCfgCopyDeviceKey.c)
 *     SepReadAndInsertCaps @ 0x1409D1DBC (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DE138 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E3F88 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E43C8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4AD4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140A0A18C (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x140A0FE68 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A10D4C (CmpMoveBiosAliasTable.c)
 *     AslRegistryEnumKey @ 0x140A54290 (AslRegistryEnumKey.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B35A9C (VhdAutoAttachVirtualDisks.c)
 *     PipInitDeviceOverrideCache @ 0x140B3F9C8 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulateProcessorClasses @ 0x140B71BF8 (PopReadSimulateProcessorClasses.c)
 *     PsInitializeBootCpuPartitions @ 0x140B72D1C (PsInitializeBootCpuPartitions.c)
 *     RegistryOverwriteCentralProcessor @ 0x140B91CD8 (RegistryOverwriteCentralProcessor.c)
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
