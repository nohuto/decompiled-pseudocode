/*
 * XREFs of CmpLockContextListShared @ 0x14068F348
 * Callers:
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     CmpCallbackFillObjectContext @ 0x1406E8D20 (CmpCallbackFillObjectContext.c)
 *     CmpGetCallbackObjectContext @ 0x1407AF720 (CmpGetCallbackObjectContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockContextListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0LL, v1, (__int64)&CmpContextListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  return result;
}
