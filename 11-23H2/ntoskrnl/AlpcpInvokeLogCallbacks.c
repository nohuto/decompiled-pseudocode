/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x14097A3DC
 * Callers:
 *     AlpcpLogClosePort @ 0x14097A470 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x14097A4E0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14097A554 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14097A5C4 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x14097A630 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x14097A6A0 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x14097A710 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x14097A77C (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x14097A878 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

signed __int32 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
