/*
 * XREFs of ZwQueryLicenseValue @ 0x14041DCB0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225E4C (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x14036AB00 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140377200 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x140411AE4 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     DifZwQueryLicenseValueWrapper @ 0x1405F57F0 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EF278 (RtlpGetPolicyValueForSystemCapability.c)
 *     ExGetExpirationDate @ 0x14080FF54 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140825B60 (RtlpGetWindowsPolicy.c)
 *     SepIsLockedDown @ 0x1409C8EFC (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409FA060 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x140A2F3F0 (MmCreateMirror.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B4FF30 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140B670B8 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140B6D580 (WheapLoadPolicy.c)
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
