/*
 * XREFs of sub_1405311A8 @ 0x1405311A8
 * Callers:
 *     sub_140531190 @ 0x140531190 (sub_140531190.c)
 *     sub_140531690 @ 0x140531690 (sub_140531690.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140531A6C @ 0x140531A6C (sub_140531A6C.c)
 *     sub_1405330B8 @ 0x1405330B8 (sub_1405330B8.c)
 */

__int64 __fastcall sub_1405311A8(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // r9
  int v9; // r9d
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  _QWORD v16[2]; // [rsp+58h] [rbp-69h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v18[32]; // [rsp+88h] [rbp-39h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v16[1] = v16;
  v16[0] = v16;
  memset(v18, 0, 0x78uLL);
  if ( !a3 )
  {
    v6 = *(_DWORD *)(a1 + 172);
    if ( v6 == 2 )
    {
      v18[1] = 1;
    }
    else if ( v6 != 1 )
    {
      return 3221225473LL;
    }
    a3 = v18;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 152);
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 152));
  LOBYTE(v9) = 1;
  sub_1405330B8(a1, **(_DWORD **)(a2 + 32), 0, v9, (__int64)a3, 1, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  sub_140531A6C(a1, 0, a3[12], 0, 1, 0, (__int64)v16, 0, 0LL);
  return 0LL;
}
