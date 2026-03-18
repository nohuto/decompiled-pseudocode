/*
 * XREFs of CmpUnlockCallbackList @ 0x1406930D4
 * Callers:
 *     CmpInsertCallbackInListByAltitude @ 0x1406902B4 (CmpInsertCallbackInListByAltitude.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     CmpEnumerateCallback @ 0x1407FC920 (CmpEnumerateCallback.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void CmpUnlockCallbackList()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegion();
}
