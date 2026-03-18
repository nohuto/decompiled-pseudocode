/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x14097A1DC
 * Callers:
 *     AlpcpLogClosePort @ 0x14097A270 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x14097A2E0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14097A354 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14097A3C4 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x14097A430 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x14097A4A0 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x14097A510 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x14097A57C (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x14097A678 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
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
