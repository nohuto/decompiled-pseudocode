/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x140779890
 * Callers:
 *     AlpcpDisconnectPort @ 0x140718EC0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x14077920C (AlpcpCancelMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1407CDECC (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a2 + 80) = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2 + 80;
  *(_QWORD *)(a1 + 392) = a2 + 80;
  *(_DWORD *)(a2 + 40) |= 0x20000u;
  ++*(_DWORD *)(a1 + 464);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
