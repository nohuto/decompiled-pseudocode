/*
 * XREFs of ZwQueryLicenseValue @ 0x14041D920
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225D3C (SepDesktopAppxSubProcessToken.c)
 *     RtlGetProductInfo @ 0x14036A960 (RtlGetProductInfo.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140377060 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x1404118A4 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     DifZwQueryLicenseValueWrapper @ 0x1405F5280 (DifZwQueryLicenseValueWrapper.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1407EEFA8 (RtlpGetPolicyValueForSystemCapability.c)
 *     ExGetExpirationDate @ 0x14080FC84 (ExGetExpirationDate.c)
 *     RtlpGetWindowsPolicy @ 0x140825860 (RtlpGetWindowsPolicy.c)
 *     SepIsLockedDown @ 0x1409C8CFC (SepIsLockedDown.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F9DD0 (ExpGenuinePolicyPostProcess.c)
 *     MmCreateMirror @ 0x140A2F140 (MmCreateMirror.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B4FF30 (InitializeDynamicPartitioningPolicy.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     PpmInitIdlePolicy @ 0x140B670B8 (PpmInitIdlePolicy.c)
 *     WheapLoadPolicy @ 0x140B6D580 (WheapLoadPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryLicenseValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
