/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x1402A1C28
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A13B0 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 */

void *__fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  void *v2; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  v2 = (void *)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v2 )
    ObfReferenceObjectWithTag(v2, 0x63536343u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v2;
}
