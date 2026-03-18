/*
 * XREFs of CmpGetNextActiveHive @ 0x140752060
 * Callers:
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140615E1C (CmShutdownSystem2.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1406162CC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoReconcileNextHive @ 0x140750A40 (CmpDoReconcileNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140751360 (CmpDoLocalizeNextHive.c)
 *     CmpDoFlushNextHive @ 0x140751F20 (CmpDoFlushNextHive.c)
 *     CmpTransMgrPrepare @ 0x140768A9C (CmpTransMgrPrepare.c)
 *     CmpHandlePageFileOpenNotification @ 0x140853FD0 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085DB34 (CmpUpdatePhaseAccessBit.c)
 *     CmpFreeAllMemory @ 0x140A1132C (CmpFreeAllMemory.c)
 *     CmEtwRunDown @ 0x140A12424 (CmEtwRunDown.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13858 (CmpBlockTwoHiveWrites.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A168A4 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     ExfReleasePushLock @ 0x1402BD830 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v2; // rsi
  __int64 **v3; // r14
  unsigned __int64 v4; // rbx
  __int64 *v5; // rbx
  signed __int64 v6; // rdx
  ULONG_PTR v7; // rtt

  v2 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 **)&a1[201];
  v4 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpHiveListHeadLock, 0LL, v4, (__int64)&CmpHiveListHeadLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v5 = *v3;
  while ( v5 != &CmpHiveListHead )
  {
    v2 = v5 - 201;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v5 + 4) )
      break;
    v5 = (__int64 *)*v5;
    v2 = 0LL;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  v6 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v7 = CmpHiveListHeadLock,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v6, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 205);
  return v2;
}
