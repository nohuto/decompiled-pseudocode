/*
 * XREFs of ZwQueryKey @ 0x14041B3B0
 * Callers:
 *     BiZwQueryKey @ 0x140373FE4 (BiZwQueryKey.c)
 *     BiOpenStoreKeyFromObject @ 0x140374038 (BiOpenStoreKeyFromObject.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051BB20 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PipIs32bitKey @ 0x14055FD7C (PipIs32bitKey.c)
 *     DifZwQueryKeyWrapper @ 0x1405F5690 (DifZwQueryKeyWrapper.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140687DC0 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     VrpPostEnumerateKey @ 0x14077ABA8 (VrpPostEnumerateKey.c)
 *     IopGetRegistryKeyInformation @ 0x1407CF068 (IopGetRegistryKeyInformation.c)
 *     RtlpValidateKeyTrust @ 0x1407D9684 (RtlpValidateKeyTrust.c)
 *     CmpGetAcpiProfileInformation @ 0x14084AFD0 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1408560E0 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x14085D25C (SepReadAndPopulateCapes.c)
 *     _RegRtlQueryInfoKey @ 0x14086B624 (_RegRtlQueryInfoKey.c)
 *     PiNormalizeDeviceText @ 0x1408710F8 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x140883078 (PiRearrangeDeviceInstances.c)
 *     PipCallbackHasDeviceOverrides @ 0x140951CF8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970388 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977D28 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1409D1F0C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E4CB4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmpCloneHwProfile @ 0x140A10464 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A10F4C (CmpMoveBiosAliasTable.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A948 (_RegRtlCopyTreeInternal.c)
 *     PipInitDeviceOverrideCache @ 0x140B3C2C8 (PipInitDeviceOverrideCache.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140B5D968 (HalpInitChipHacks.c)
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
