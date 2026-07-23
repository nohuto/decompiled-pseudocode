/*
 * XREFs of sub_140532A28 @ 0x140532A28
 * Callers:
 *     sub_1405316B0 @ 0x1405316B0 (sub_1405316B0.c)
 *     sub_140531930 @ 0x140531930 (sub_140531930.c)
 *     sub_140531A6C @ 0x140531A6C (sub_140531A6C.c)
 *     sub_14053292C @ 0x14053292C (sub_14053292C.c)
 *     sub_140532998 @ 0x140532998 (sub_140532998.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

KSPIN_LOCK __fastcall sub_140532A28(KSPIN_LOCK *a1, KSPIN_LOCK *a2, int a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r9
  KSPIN_LOCK v7; // rax
  KSPIN_LOCK v8; // r9
  unsigned __int64 v9; // rbx
  KSPIN_LOCK v10; // r10
  __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  __int64 v14; // rbp
  __int64 v15; // r15
  KSPIN_LOCK result; // rax
  unsigned int v17; // ebx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  signed __int32 v23[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  KSPIN_LOCK v25; // [rsp+80h] [rbp+8h]
  KSPIN_LOCK v26; // [rsp+88h] [rbp+10h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = a1 + 19;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)a1 + 19);
  }
  if ( *a2 >> 60 == 1 )
  {
    v7 = a1[17];
    a1[15] = 1LL;
    *a2 = v7;
    a2[1] = a1[18];
  }
  v8 = *a1;
  v25 = *a1;
  v9 = *(_QWORD *)(*a1 + 8200);
  v10 = a1[6];
  v26 = v10;
  v11 = ((unsigned int)(v9 >> 4) & 0x7FFF) + 1;
  v12 = 0;
  v13 = 0;
  if ( (_DWORD)v11 != (unsigned int)(a1[8] >> 4) )
    v13 = ((v9 >> 4) & 0x7FFF) + 1;
  v14 = v13;
  if ( v13 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v12 & dword_140C4C47C) != 0 || !qword_140C4C480 )
      {
        _mm_pause();
      }
      else
      {
        sub_14042A5E0(v12, v11);
        v8 = v25;
      }
    }
    while ( v14 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) );
    v10 = v26;
  }
  v15 = 2 * ((v9 >> 4) & 0x7FFF);
  *(_QWORD *)(v10 + 8 * v15) = *a2;
  *(_QWORD *)(v10 + 8 * v15 + 8) = a2[1];
  *(_QWORD *)(v8 + 8200) = ((unsigned int)v9 ^ (16 * (_DWORD)v14)) & 0x7FFF0 ^ v9;
  _InterlockedOr(v23, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      result = a1[15];
      if ( !result )
        break;
      if ( (++v17 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        sub_14042A5E0(v17, v11);
    }
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
