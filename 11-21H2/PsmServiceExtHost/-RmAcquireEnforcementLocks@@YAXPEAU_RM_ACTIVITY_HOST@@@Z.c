/*
 * XREFs of ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003CFE4
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall RmAcquireEnforcementLocks(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdx

  RmpAcquireGlobalLock();
  CempLockTrackerMarkAcquired(HampLockTrackerId, v2, 1u, 0);
  RtlAcquireSRWLockExclusive((char *)a1 + 64);
  *((_DWORD *)a1 + 18) = GetCurrentThreadId();
}
