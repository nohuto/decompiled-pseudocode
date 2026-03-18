/*
 * XREFs of ZwEnumerateValueKey @ 0x14041AFC0
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x1405F01B0 (DifZwEnumerateValueKeyWrapper.c)
 *     RtlpQueryRegistryValues @ 0x1406C59D0 (RtlpQueryRegistryValues.c)
 *     ExpSetPendingUILanguage @ 0x1407FC2E8 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084550C (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084900C (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x14084F4A8 (PiDcInitUpdateProperties.c)
 *     SepLoadNgenLocations @ 0x140855DE0 (SepLoadNgenLocations.c)
 *     _RegRtlEnumValue @ 0x14086E5D0 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E424 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DA8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F6E8 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x140977A2C (KsepRegistryEnumValue.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB08 (SdbpGetManifestedMergeStubAlloc.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A7569C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A75948 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140B5D968 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6E120 (PiLastGoodCopyKeyContents.c)
 *     PsInitializeBootCpuPartitions @ 0x140B71D74 (PsInitializeBootCpuPartitions.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulateProcessorClass @ 0x140B966F4 (PopReadSimulateProcessorClass.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}
