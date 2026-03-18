/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140609B30
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x14032FADC (ExfTryAcquirePushLockSharedEx.c)
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  return ExfTryAcquirePushLockSharedEx(a1, 0);
}
