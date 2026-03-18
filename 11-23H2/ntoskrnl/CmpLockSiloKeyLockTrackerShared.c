/*
 * XREFs of CmpLockSiloKeyLockTrackerShared @ 0x1408477C8
 * Callers:
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpLockSiloKeyLockTrackerShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0LL, v3, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
