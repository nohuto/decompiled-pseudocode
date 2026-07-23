/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x1407CE19C
 * Callers:
 *     AlpcpReceiveMessage @ 0x14073B030 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D7C0 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14071C25C (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140779A80 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpExposeContextAttribute @ 0x1407CE260 (AlpcpExposeContextAttribute.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x1407CE2D8 (AlpcpInsertMessageLargeMessageQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  signed __int64 *v3; // rsi
  int v7; // eax

  v3 = (signed __int64 *)(a1 + 352);
  *a3 = 0LL;
  a3[1] = 0LL;
  ExAcquirePushLockSharedEx(a1 + 352, 0LL);
  v7 = *(_DWORD *)(a1 + 416) & 0x40;
  if ( a2[8] == a1 )
  {
    if ( v7 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, (__int64)a2);
    }
LABEL_6:
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    AlpcpExposeContextAttribute(a1, a2, a3, 0LL);
    return 3221225507LL;
  }
  if ( !v7 )
  {
    if ( a2[2] )
      AlpcpRemoveMessageFromPendingQueue((__int64)a2);
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_6;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return 3221227264LL;
}
