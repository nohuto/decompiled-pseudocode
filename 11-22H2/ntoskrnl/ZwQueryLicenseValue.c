/*
 * XREFs of ZwQueryLicenseValue @ 0x14041D260
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225D5C (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x14036A310 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403776B0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x140411094 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     DifZwQueryLicenseValueWrapper @ 0x1405F5310 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EF528 (RtlpGetPolicyValueForSystemCapability.c)
 *     ExGetExpirationDate @ 0x140812204 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x1408263C0 (RtlpGetWindowsPolicy.c)
 *     SepIsLockedDown @ 0x1409C8DAC (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F9E80 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x140A2F1B0 (MmCreateMirror.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B52464 (InitializeDynamicPartitioningPolicy.c)
 *     PpmInitIdlePolicy @ 0x140B68458 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140B6E9EC (WheapLoadPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ValueName);
}
