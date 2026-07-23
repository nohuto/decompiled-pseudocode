/*
 * XREFs of ExfAcquirePushLockShared @ 0x1402FD2B0
 * Callers:
 *     ExpCovQueryInformation @ 0x140A06A3C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, 0LL, a1);
}
