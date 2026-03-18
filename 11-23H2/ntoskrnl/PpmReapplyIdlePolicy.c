/*
 * XREFs of PpmReapplyIdlePolicy @ 0x140982AC4
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14082BF80 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140992E4C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1402BFB1C (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}
