/*
 * XREFs of CmpUnlockCallbackList @ 0x14068F274
 * Callers:
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140850E2C (CmpInsertCallbackInListByAltitude.c)
 *     CmpEnumerateCallback @ 0x140885580 (CmpEnumerateCallback.c)
 *     CmUnRegisterCallback @ 0x140A0F1C0 (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402BD830 (ExfReleasePushLock.c)
 */

void CmpUnlockCallbackList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpCallbackListLock);
  v0 = CmpCallbackListLock - 16;
  if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpCallbackListLock & 2) != 0
    || (v1 = CmpCallbackListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, v0, CmpCallbackListLock)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
  KeLeaveCriticalRegion();
}
