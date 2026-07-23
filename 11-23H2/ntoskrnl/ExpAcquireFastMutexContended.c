/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1402FCFDC
 * Callers:
 *     FsRtlAcquireHeaderMutex @ 0x140230330 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x1402FC810 (CcSetDirtyPinnedData.c)
 *     KeAcquireGuardedMutex @ 0x1402FCEF0 (KeAcquireGuardedMutex.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FDBE0 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140304A20 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x140328A70 (FsRtlReleaseEofLock.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD500 (KeAbPreWait.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rdi
  int v6; // esi
  __int64 result; // rax
  int v8; // ett
  int v9; // ett

  ++*(_DWORD *)(a1 + 16);
  v3 = 1;
  v4 = a2;
  v6 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v9 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v6 + result, result);
      if ( v9 == (_DWORD)result )
      {
        if ( v4 )
          KeAbPreWait(v4, a2, a3);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v3 = 3;
        v6 = 2;
        if ( v4 )
          v4 = KeAbPreAcquire(a1, v4);
        goto LABEL_2;
      }
    }
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v3 ^ result, result);
  }
  while ( v8 != (_DWORD)result );
  return result;
}
