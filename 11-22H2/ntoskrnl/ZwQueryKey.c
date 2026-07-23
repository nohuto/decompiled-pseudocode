/*
 * XREFs of ZwQueryKey @ 0x14041A960
 * Callers:
 *     BiZwQueryKey @ 0x140374498 (BiZwQueryKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1403744EC (BiOpenStoreKeyFromObject.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B690 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x14055F75C (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x1405F51B0 (DifZwQueryKeyWrapper.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140687DC0 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     VrpPostEnumerateKey @ 0x14077AEC8 (VrpPostEnumerateKey.c)
 *     IopGetRegistryKeyInformation @ 0x1407CF328 (IopGetRegistryKeyInformation.c)
 *     RtlpValidateKeyTrust @ 0x1407D9934 (RtlpValidateKeyTrust.c)
 *     CmpGetAcpiProfileInformation @ 0x14084BF30 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x140856CF0 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x14085D47C (SepReadAndPopulateCapes.c)
 *     _RegRtlQueryInfoKey @ 0x14086B8B4 (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x140871388 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140883308 (PiRearrangeDeviceInstances.c)
 *     PipCallbackHasDeviceOverrides @ 0x140951BA8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970238 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977BD8 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1409D1DBC (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4AD4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A10D4C (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A708 (_RegRtlCopyTreeInternal.c)
 *     PipInitDeviceOverrideCache @ 0x140B3F9C8 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140B609A8 (HalpInitChipHacks.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
