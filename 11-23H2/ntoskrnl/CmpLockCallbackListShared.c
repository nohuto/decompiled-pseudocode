/*
 * XREFs of CmpLockCallbackListShared @ 0x14068F2D8
 * Callers:
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     CmpEnumerateCallback @ 0x140885580 (CmpEnumerateCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockCallbackListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0LL, v1, (__int64)&CmpCallbackListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  return result;
}
