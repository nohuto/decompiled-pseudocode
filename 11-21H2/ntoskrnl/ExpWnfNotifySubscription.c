/*
 * XREFs of ExpWnfNotifySubscription @ 0x1407927AC
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x14079982C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406D7CC4 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140793A34 (ExpWnfInsertSubscriptionInPendingQueue.c)
 */

void __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  signed __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rbp
  struct _KEVENT *v10; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (__int64)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      v10 = *(struct _KEVENT **)(v8[1].EndPadding[2] + 128);
      if ( v10 )
        KeSetEvent(v10, 1, 0);
    }
  }
}
