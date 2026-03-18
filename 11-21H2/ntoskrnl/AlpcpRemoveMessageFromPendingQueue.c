/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x1407A6FD8
 * Callers:
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406C9174 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpDispatchReplyToPort @ 0x1407A6CE4 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v3; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = v1 + 176;
  ExAcquirePushLockExclusiveEx(v1 + 176, 0LL);
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  result = KeAbPostRelease(v3);
  --*(_WORD *)(a1 - 30);
  return result;
}
