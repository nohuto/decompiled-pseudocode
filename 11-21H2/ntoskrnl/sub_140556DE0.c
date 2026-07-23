/*
 * XREFs of sub_140556DE0 @ 0x140556DE0
 * Callers:
 *     sub_140934260 @ 0x140934260 (sub_140934260.c)
 *     IoRegisterIoTracking @ 0x140937E50 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140937F70 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14055712C @ 0x14055712C (sub_14055712C.c)
 */

__int64 __fastcall sub_140556DE0(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // cl
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C46FC8, &LockHandle);
  if ( a2 == 1 )
  {
    v6 = dword_140D01110 == 0;
    dword_140D01110 |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_140D01114;
    if ( (a1 & 2) != 0 )
      ++dword_140D01118;
    if ( v6 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      LOBYTE(v5) = 1;
      sub_14055712C(4LL, v4, v5);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_140D01114 )
      dword_140D01110 &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_140D01118 )
      dword_140D01110 &= ~2u;
    if ( !dword_140D01110 )
    {
      v4 = 0LL;
      goto LABEL_16;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
