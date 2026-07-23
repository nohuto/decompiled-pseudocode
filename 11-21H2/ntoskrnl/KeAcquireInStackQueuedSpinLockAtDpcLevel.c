/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402127F0
 * Callers:
 *     sub_1404171F4 @ 0x1404171F4 (sub_1404171F4.c)
 *     sub_140A6849C @ 0x140A6849C (sub_140A6849C.c)
 * Callees:
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rdx
  int v6; // eax

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v5 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v6 = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v5 + 24) = v6 + 1;
      if ( v6 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(LockHandle, SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle) )
  {
    sub_140311C70(LockHandle);
  }
}
