/*
 * XREFs of sub_14052DF88 @ 0x14052DF88
 * Callers:
 *     sub_14052DF70 @ 0x14052DF70 (sub_14052DF70.c)
 *     sub_14052E450 @ 0x14052E450 (sub_14052E450.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052DEFC @ 0x14052DEFC (sub_14052DEFC.c)
 *     sub_14052E568 @ 0x14052E568 (sub_14052E568.c)
 *     sub_14052E9A8 @ 0x14052E9A8 (sub_14052E9A8.c)
 *     sub_140530270 @ 0x140530270 (sub_140530270.c)
 */

__int64 sub_14052DF88(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r9
  unsigned int *v4; // rax
  _DWORD *v6; // rsi
  char v9; // r13
  __int64 result; // rax
  int v11; // eax
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // r9
  int v14; // r8d
  int v15; // edx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int8 v17; // al
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  int v21; // [rsp+20h] [rbp-B9h]
  _QWORD v22[2]; // [rsp+50h] [rbp-89h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v24[44]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v25; // [rsp+158h] [rbp+7Fh] BYREF
  va_list va; // [rsp+158h] [rbp+7Fh]
  va_list va1; // [rsp+160h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v3 = v25;
  v4 = *(unsigned int **)(a2 + 32);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v6 = (_DWORD *)a3;
  v25 = 0LL;
  v9 = 0;
  result = sub_14052DEFC(a1, *v4, a3, v3, (__int64 *)va);
  if ( (int)result >= 0 )
  {
    memset(v24, 0, 0x78uLL);
    if ( !a3 )
    {
      v11 = *(_DWORD *)(a1 + 308);
      if ( v11 == 2 )
      {
        v24[1] = 1;
      }
      else if ( v11 != 1 )
      {
        return 3221225473LL;
      }
      v6 = v24;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 208);
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
    if ( a3 || sub_14052E9A8(a1, **(unsigned int **)(a2 + 32)) == *(_QWORD *)(a2 + 16) )
    {
      sub_140530270(a1, **(_DWORD **)(a2 + 32), v14, v25, v21);
      v9 = 1;
    }
    *(_QWORD *)(a2 + 16) = (unsigned int)v6[12];
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          v15 = v19 & *(_DWORD *)(v18 + 20);
          *(_DWORD *)(v18 + 20) = v15;
          if ( v20 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v9 )
    {
      v22[1] = v22;
      v22[0] = v22;
      LOBYTE(CurrentPrcb) = 1;
      sub_14052E568(a1, v15, 0, (_DWORD)CurrentPrcb, v21);
    }
    return 0LL;
  }
  return result;
}
