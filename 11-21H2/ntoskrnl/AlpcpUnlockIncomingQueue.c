/*
 * XREFs of AlpcpUnlockIncomingQueue @ 0x140966DC0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1407A8B00 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpUnlockIncomingQueue(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 136;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 136);
  return KeAbPostRelease(v1);
}
