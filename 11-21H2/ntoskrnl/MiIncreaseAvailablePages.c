/*
 * XREFs of MiIncreaseAvailablePages @ 0x140338BF0
 * Callers:
 *     MiReplenishPageSlist @ 0x140264720 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x1403C3E64 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  signed int v3; // r14d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  struct _KEVENT *v12; // rdi
  struct _KEVENT *v13; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 != 1 )
  {
    v3 = 0;
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16896), a2);
    v5 = a2 + v4;
    v6 = 0;
    if ( a2 + v4 < 0xA0 )
    {
      if ( v5 < 0x22 )
        goto LABEL_9;
    }
    else if ( v4 < 0xA0 )
    {
      v6 = 2;
    }
    if ( v4 < 0x22 )
      v6 |= 1u;
    if ( v4 < 0x420 && v5 >= 0x420 )
      v6 |= 4u;
    if ( v6 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 15680);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 15680));
      v13 = (struct _KEVENT *)(a1 + 15712);
      do
      {
        if ( _bittest(&v6, v3) )
        {
          KeSetEvent(v13 - 1, 0, 0);
          ++v13->Header.LockNV;
        }
        ++v3;
        v13 = (struct _KEVENT *)((char *)v13 + 32);
      }
      while ( v3 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_9:
    v7 = *(_QWORD *)(a1 + 15952);
    if ( v4 <= v7 && v5 > v7 )
      goto LABEL_15;
    v8 = *(_QWORD *)(a1 + 15944);
    if ( v4 <= v8 && v5 > v8 )
      goto LABEL_15;
    return;
  }
  v9 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16896));
  if ( v9 <= 0x420 )
  {
    switch ( v9 )
    {
      case 0xA0uLL:
        v11 = 15720LL;
        break;
      case 0x420uLL:
        v11 = 15752LL;
        break;
      case 0x22uLL:
        v11 = 15688LL;
        break;
      default:
        goto LABEL_13;
    }
    v12 = (struct _KEVENT *)(a1 + v11);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 15680);
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 15680));
    KeSetEvent(v12, 0, 0);
    ++v12[1].Header.LockNV;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
LABEL_13:
  v10 = v9 - 1;
  if ( v10 == *(_QWORD *)(a1 + 15944) || v10 == *(_QWORD *)(a1 + 15952) )
LABEL_15:
    MiUpdateAvailableEvents(a1);
}
