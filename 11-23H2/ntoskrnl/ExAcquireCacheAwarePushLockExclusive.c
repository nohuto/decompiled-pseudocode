/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x1402BC790
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1402BC810 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 */

__int64 __fastcall ExAcquireCacheAwarePushLockExclusive(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = KeAbPreAcquire(a1, 0LL);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v2, a1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
