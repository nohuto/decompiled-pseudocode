/*
 * XREFs of ZwEnumerateValueKey @ 0x14041B350
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x1405F0720 (DifZwEnumerateValueKeyWrapper.c)
 *     RtlpQueryRegistryValues @ 0x1406C5A00 (RtlpQueryRegistryValues.c)
 *     ExpSetPendingUILanguage @ 0x1407FC5B8 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084580C (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084930C (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x14084F7A8 (PiDcInitUpdateProperties.c)
 *     SepLoadNgenLocations @ 0x1408560E0 (SepLoadNgenLocations.c)
 *     _RegRtlEnumValue @ 0x14086E810 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DC8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F8E8 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x140977C2C (KsepRegistryEnumValue.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EDB8 (SdbpGetManifestedMergeStubAlloc.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A7594C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A75BF8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140B5D968 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6E120 (PiLastGoodCopyKeyContents.c)
 *     PsInitializeBootCpuPartitions @ 0x140B71D74 (PsInitializeBootCpuPartitions.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulateProcessorClass @ 0x140B966F4 (PopReadSimulateProcessorClass.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
