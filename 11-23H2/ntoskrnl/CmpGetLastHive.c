/*
 * XREFs of CmpGetLastHive @ 0x1407D8E44
 * Callers:
 *     CmpDoFlushAll @ 0x1402F6BDC (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpReferenceHive @ 0x14076A77C (CmpReferenceHive.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  signed __int64 v6; // rdx
  ULONG_PTR v7; // rtt

  v0 = 0LL;
  v1 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpHiveListHeadLock, 0LL, v1, (__int64)&CmpHiveListHeadLock);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  v2 = qword_140D54C70;
  v3 = &CmpHiveListHead;
  while ( (__int64 *)v2 != v3 )
  {
    if ( CmpReferenceHive(v2 - 1608) )
    {
      v0 = v4;
      break;
    }
    v2 = *(_QWORD *)(v5 + 8);
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
  return v0;
}
