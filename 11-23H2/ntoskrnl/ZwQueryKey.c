/*
 * XREFs of ZwQueryKey @ 0x14041B020
 * Callers:
 *     BiZwQueryKey @ 0x140373E44 (BiZwQueryKey.c)
 *     BiOpenStoreKeyFromObject @ 0x140373E98 (BiOpenStoreKeyFromObject.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B5D0 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x14055F6BC (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x1405F5120 (DifZwQueryKeyWrapper.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140687DC0 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     VrpPostEnumerateKey @ 0x14077A9B8 (VrpPostEnumerateKey.c)
 *     IopGetRegistryKeyInformation @ 0x1407CED98 (IopGetRegistryKeyInformation.c)
 *     RtlpValidateKeyTrust @ 0x1407D93B4 (RtlpValidateKeyTrust.c)
 *     CmpGetAcpiProfileInformation @ 0x14084ACD0 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x140855DE0 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x14085D01C (SepReadAndPopulateCapes.c)
 *     _RegRtlQueryInfoKey @ 0x14086B3E4 (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x140870EB8 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140882E38 (PiRearrangeDeviceInstances.c)
 *     PipCallbackHasDeviceOverrides @ 0x140951AF8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970188 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977B28 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1409D1D0C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4A24 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A10C9C (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A698 (_RegRtlCopyTreeInternal.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140B5D968 (HalpInitChipHacks.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeyInformationClass);
}
