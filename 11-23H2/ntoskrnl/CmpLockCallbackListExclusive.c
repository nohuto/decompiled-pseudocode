/*
 * XREFs of CmpLockCallbackListExclusive @ 0x1408511F8
 * Callers:
 *     CmpInsertCallbackInListByAltitude @ 0x14085112C (CmpInsertCallbackInListByAltitude.c)
 *     CmUnRegisterCallback @ 0x140A0F470 (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 CmpLockCallbackListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpCallbackListLock, result, (__int64)&CmpCallbackListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
