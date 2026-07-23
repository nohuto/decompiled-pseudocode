/*
 * XREFs of CmpUnlockContextList @ 0x14068F210
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x14068EF1C (CmpFreeCallbackObjectContexts.c)
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     CmpCallbackFillObjectContext @ 0x1406E8D20 (CmpCallbackFillObjectContext.c)
 *     CmpGetCallbackObjectContext @ 0x1407AF720 (CmpGetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140A0F470 (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 */

void CmpUnlockContextList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpContextListLock);
  v0 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpContextListLock & 2) != 0
    || (v1 = CmpContextListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v0, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  KeLeaveCriticalRegion();
}
