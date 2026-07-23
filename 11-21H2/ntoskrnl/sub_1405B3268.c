/*
 * XREFs of sub_1405B3268 @ 0x1405B3268
 * Callers:
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403CF630 @ 0x1403CF630 (sub_1403CF630.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405B3268(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 2005, &LockHandle);
  if ( a3 )
    a1[2001] -= a3;
  if ( a2 )
    a1[2187] -= a2;
  sub_1403CF630(a1);
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
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
