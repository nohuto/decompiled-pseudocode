/*
 * XREFs of sub_14029EF4C @ 0x14029EF4C
 * Callers:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     FsRtlAcquireHeaderMutex @ 0x140347B70 (FsRtlAcquireHeaderMutex.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140359B80 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x14035D230 (FsRtlAcquireEofLock.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

__int64 __fastcall sub_14029EF4C(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(a1 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v5 + result, result);
      if ( v8 == (_DWORD)result )
      {
        if ( a2 )
          sub_14029F580(a2);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v2 = 3;
        v5 = 2;
        if ( a2 )
          a2 = sub_140347C10(a1, a2, 0LL);
        goto LABEL_2;
      }
    }
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v2 ^ result, result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
