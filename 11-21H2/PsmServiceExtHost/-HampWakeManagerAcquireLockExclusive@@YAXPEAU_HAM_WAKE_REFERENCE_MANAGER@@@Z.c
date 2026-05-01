/*
 * XREFs of ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18000176C
 * Callers:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800016AC (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800344CC (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007C544 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampWakeManagerAcquireLockExclusive(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  *((_DWORD *)a1 + 6) = GetCurrentThreadId();
}
