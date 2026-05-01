/*
 * XREFs of ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180001730
 * Callers:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800016AC (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800344CC (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007C544 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampWakeManagerReleaseLockExclusive(struct _HAM_WAKE_REFERENCE_MANAGER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(HampLockTrackerId, a2, 4LL);
  *((_DWORD *)a1 + 6) = 0;
  RtlReleaseSRWLockExclusive();
}
