/*
 * XREFs of sub_140359548 @ 0x140359548
 * Callers:
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14022A110 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402AE130 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x14035D230 (FsRtlAcquireEofLock.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 */

__int64 __fastcall sub_140359548(volatile signed __int32 *a1, signed __int32 a2)
{
  int v3; // ecx
  bool v4; // zf
  __int64 result; // rax

  do
  {
    v3 = a2 & 2;
    result = (unsigned int)_InterlockedCompareExchange(a1, a2 + (v3 != 0 ? 1 : -1), a2);
    v4 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v4 );
  if ( !v3 )
    return sub_1403595B4((PVOID)(a1 + 6), 1, 1);
  return result;
}
