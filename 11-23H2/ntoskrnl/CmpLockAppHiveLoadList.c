/*
 * XREFs of CmpLockAppHiveLoadList @ 0x1407D70B4
 * Callers:
 *     CmLoadAppKey @ 0x140769640 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpAppHiveLoadListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpAppHiveLoadListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpAppHiveLoadListLock, result, (__int64)&CmpAppHiveLoadListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
