/*
 * XREFs of ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008D1F0
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_POLICY_WORK_BUFFER@@EPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008D604 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY@@_KPEAU_RM_RESOURCE_USAGE_L.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18008D9B0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 */

void __fastcall RmpPolicyEnsureMetricsForAcquire(struct _RM_PARTITION *a1, struct _RM_SYSTEM_MEMORY_METRICS *a2)
{
  struct _RM_POLICY_WORK_BUFFER *v2; // rbx

  v2 = (struct _RM_PARTITION *)((char *)a1 + 160);
  RmpPolicyPopulateActivityHostMetrics(a1, 0LL, (char *)a1 + 160, 67LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  RmpPolicyPopulateFastCommitUse(a2, v2);
}
