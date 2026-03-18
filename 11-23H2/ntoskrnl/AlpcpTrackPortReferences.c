/*
 * XREFs of AlpcpTrackPortReferences @ 0x140737F80
 * Callers:
 *     AlpciSendDeferredMessageBeforeWait @ 0x1402B69C0 (AlpciSendDeferredMessageBeforeWait.c)
 *     NtAlpcSendWaitReceivePort @ 0x14073ABB0 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall AlpcpTrackPortReferences(__int64 a1)
{
  signed __int32 v2; // edi
  volatile signed __int64 *v3; // rbx
  struct _KEVENT *v4; // rcx
  signed __int32 result; // eax

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( *(_QWORD *)(a1 + 408) )
  {
    v3 = (volatile signed __int64 *)(a1 + 352);
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    v4 = *(struct _KEVENT **)(a1 + 408);
    if ( v4 && v2 == v4[1].Header.LockNV )
      KeSetEvent(v4, 0, 0);
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    return KeAbPostRelease((ULONG_PTR)v3);
  }
  return result;
}
