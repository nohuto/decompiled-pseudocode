/*
 * XREFs of AlpcpInsertMessagePendingQueue @ 0x14073D510
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AC10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B490 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073DCE0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407BAF94 (AlpcpReceiveDirectMessagePort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall AlpcpInsertMessagePendingQueue(__int64 a1, __int64 a2)
{
  int v4; // eax

  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
  v4 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v4 & 0xFFFFFF83 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 192);
  *(_QWORD *)a2 = a1 + 184;
  **(_QWORD **)(a1 + 192) = a2;
  ++*(_DWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 192) = a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 176));
  return KeAbPostRelease(a1 + 176);
}
