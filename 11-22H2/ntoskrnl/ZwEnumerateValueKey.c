/*
 * XREFs of ZwEnumerateValueKey @ 0x14041A900
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x1405F0240 (DifZwEnumerateValueKeyWrapper.c)
 *     RtlpQueryRegistryValues @ 0x1406C5A80 (RtlpQueryRegistryValues.c)
 *     ExpSetPendingUILanguage @ 0x1407FC998 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084729C (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084A26C (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x140850328 (PiDcInitUpdateProperties.c)
 *     SepLoadNgenLocations @ 0x140856CF0 (SepLoadNgenLocations.c)
 *     _RegRtlEnumValue @ 0x14086EAA0 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E8F4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F798 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x140977ADC (KsepRegistryEnumValue.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB78 (SdbpGetManifestedMergeStubAlloc.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A7570C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A759B8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140B609A8 (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6F58C (PiLastGoodCopyKeyContents.c)
 *     PsInitializeBootCpuPartitions @ 0x140B72D1C (PsInitializeBootCpuPartitions.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B95930 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulateProcessorClass @ 0x140B976F4 (PopReadSimulateProcessorClass.c)
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
