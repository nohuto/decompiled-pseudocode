/*
 * XREFs of ExfAcquirePushLockShared @ 0x14029F330
 * Callers:
 *     ExpCovQueryInformation @ 0x140A0350C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, 0LL, a1);
}
