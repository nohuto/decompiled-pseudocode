/*
 * XREFs of ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800851A8
 * Callers:
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18005614C (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RmpActivityHostRelease(struct _RM_ACTIVITY_HOST *a1)
{
  RmpObjectRelease(a1);
}
