/*
 * XREFs of CmpGetNextActiveHive @ 0x140752250
 * Callers:
 *     CmShutdownSystem1 @ 0x140616114 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14061636C (CmShutdownSystem2.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14061681C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoReconcileNextHive @ 0x140750C30 (CmpDoReconcileNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140751550 (CmpDoLocalizeNextHive.c)
 *     CmpDoFlushNextHive @ 0x140752110 (CmpDoFlushNextHive.c)
 *     CmpTransMgrPrepare @ 0x140768C8C (CmpTransMgrPrepare.c)
 *     CmpHandlePageFileOpenNotification @ 0x1408542D0 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085DD74 (CmpUpdatePhaseAccessBit.c)
 *     CmpFreeAllMemory @ 0x140A115DC (CmpFreeAllMemory.c)
 *     CmEtwRunDown @ 0x140A126D4 (CmEtwRunDown.c)
 *     CmFreezeRegistry @ 0x140A135B0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13B08 (CmpBlockTwoHiveWrites.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A16B54 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
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
