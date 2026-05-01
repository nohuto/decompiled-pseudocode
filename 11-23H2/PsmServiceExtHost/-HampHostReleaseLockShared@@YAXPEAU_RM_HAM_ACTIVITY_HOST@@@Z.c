/*
 * XREFs of ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180055222
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800556F0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampHostReleaseLockShared(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(HampLockTrackerId, a2, 1u);
  RtlReleaseSRWLockShared(a1);
}
