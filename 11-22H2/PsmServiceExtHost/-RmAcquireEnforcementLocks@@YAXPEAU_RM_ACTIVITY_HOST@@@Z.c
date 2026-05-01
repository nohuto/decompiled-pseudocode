/*
 * XREFs of ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012EA0
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x180053810 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall RmAcquireEnforcementLocks(struct _RM_ACTIVITY_HOST *a1)
{
  RmpAcquireGlobalLock();
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockExclusive((char *)a1 + 64);
  *((_DWORD *)a1 + 18) = GetCurrentThreadId();
}
