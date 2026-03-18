/*
 * XREFs of ZwEnumerateKey @ 0x14041B3A0
 * Callers:
 *     BiZwEnumerateKey @ 0x140373D8C (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A1180 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A1240 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B5D0 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x1405F0050 (DifZwEnumerateKeyWrapper.c)
 *     VrpPostEnumerateKey @ 0x14077A9B8 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1407CE250 (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x1407CEA28 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x140809074 (EtwpEnumerateKeyProviders.c)
 *     CmpLoadLayerVersions @ 0x14080D2D8 (CmpLoadLayerVersions.c)
 *     WdipSemLoadNextEndEvent @ 0x140830780 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140830A84 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140830D04 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140831110 (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x140838380 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083BD48 (EtwpEnumerateAutologgerPath.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083F980 (RtlpUpdateDynamicTimeZones.c)
 *     CmpGetAcpiProfileInformation @ 0x14084ACD0 (CmpGetAcpiProfileInformation.c)
 *     PiDcInitUpdateProperties @ 0x14084F4A8 (PiDcInitUpdateProperties.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1408628A8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     _RegRtlEnumKey @ 0x14086B4AC (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14087CCF4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087CDA0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E424 (PiDevCfgCopyDeviceKey.c)
 *     SepReadAndInsertCaps @ 0x1409D1D0C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DE088 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E3ED8 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E4318 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4A24 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140A0A0DC (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x140A0FDB8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A10C9C (CmpMoveBiosAliasTable.c)
 *     AslRegistryEnumKey @ 0x140A54220 (AslRegistryEnumKey.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B34A9C (VhdAutoAttachVirtualDisks.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 *     PopReadSimulateProcessorClasses @ 0x140B70B7C (PopReadSimulateProcessorClasses.c)
 *     PsInitializeBootCpuPartitions @ 0x140B71D74 (PsInitializeBootCpuPartitions.c)
 *     RegistryOverwriteCentralProcessor @ 0x140B90CD8 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}
