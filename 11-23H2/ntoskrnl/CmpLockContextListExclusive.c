/*
 * XREFs of CmpLockContextListExclusive @ 0x14068F02C
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x14068EF1C (CmpFreeCallbackObjectContexts.c)
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140A0F470 (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpContextListLock, result, (__int64)&CmpContextListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
