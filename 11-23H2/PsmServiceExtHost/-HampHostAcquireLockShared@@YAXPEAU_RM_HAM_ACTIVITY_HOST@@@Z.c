/*
 * XREFs of ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005511C
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800556F0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostAcquireLockShared(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  HampHostAcquireLockSharedEx(a1);
}
