/*
 * XREFs of sub_1405336FC @ 0x1405336FC
 * Callers:
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 *     sub_140532200 @ 0x140532200 (sub_140532200.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405314E8 @ 0x1405314E8 (sub_1405314E8.c)
 *     sub_140532998 @ 0x140532998 (sub_140532998.c)
 */

__int64 __fastcall sub_1405336FC(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  __int128 *v8; // r10
  __int128 v9; // xmm1
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  __int64 result; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  __int128 v21; // [rsp+48h] [rbp-30h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 152);
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 152));
  v8 = (__int128 *)(*(_QWORD *)(a1 + 24) + 32 * v4);
  v9 = v8[1];
  v20 = *v8;
  v21 = v9;
  sub_1405314E8(a1, a3, (__int64)&v20);
  *(_QWORD *)(v10 + 16) = v21;
  _InterlockedOr(v18, 0);
  sub_140532998(a1, v11, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
