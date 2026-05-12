/*
 * XREFs of sub_1C0066E34 @ 0x1C0066E34
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 * Callees:
 *     sub_1C0066CAC @ 0x1C0066CAC (sub_1C0066CAC.c)
 *     sub_1C0066FC8 @ 0x1C0066FC8 (sub_1C0066FC8.c)
 */

void __fastcall sub_1C0066E34(_DWORD *SpinLock, unsigned int a2)
{
  KSPIN_LOCK v3; // rax
  unsigned int v4; // r8d
  unsigned int v5; // eax
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( SpinLock )
  {
    v3 = *((_QWORD *)SpinLock + 6);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v3 + 904) <= 1u )
    {
      if ( !SpinLock[10] )
      {
        v4 = SpinLock[48];
        if ( v4 )
        {
          v5 = 0;
          if ( a2 <= v4 )
            v5 = v4 - a2;
          SpinLock[8] = v5;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
          v6 = SpinLock[48] == 0;
          SpinLock[10] = 1;
          if ( v6 )
          {
            ++dword_1C0094150;
            sub_1C0066FC8(SpinLock, 0LL);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
    }
    else
    {
      sub_1C0066CAC((__int64)SpinLock, a2);
    }
  }
}
