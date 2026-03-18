/*
 * XREFs of CmLockHive @ 0x140747FB4
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402EC614 (CmpWaitForLateUnloadWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CmLockHive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 1680);
  result = KeAbPreAcquire(a1 + 1680, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
