/*
 * XREFs of CmpUnlockHiveList @ 0x140750B28
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x140207A48 (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x14036E3BC (CmpJoinClassOfTrust.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 */

signed __int32 CmpUnlockHiveList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpHiveListHeadLock);
  v0 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v1 = CmpHiveListHeadLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v0, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  return KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
}
