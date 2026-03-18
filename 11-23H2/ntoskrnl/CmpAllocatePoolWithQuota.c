/*
 * XREFs of CmpAllocatePoolWithQuota @ 0x140616578
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x140A11E2C (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A1213C (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocatePoolWithQuota(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(a1 | 1, a2, a3);
}
