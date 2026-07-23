/*
 * XREFs of sub_14039D3E4 @ 0x14039D3E4
 * Callers:
 *     ExReleaseFastResource @ 0x14039CF80 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x14063C8C0 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x14063C9F0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     sub_14039CEC8 @ 0x14039CEC8 (sub_14039CEC8.c)
 *     sub_14039D600 @ 0x14039D600 (sub_14039D600.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14039D3E4(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  volatile __int64 *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+88h] [rbp+48h] BYREF
  __int64 v28; // [rsp+90h] [rbp+50h] BYREF
  __int64 *v29; // [rsp+98h] [rbp+58h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v27 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( *(_BYTE *)(a2 + 18) )
  {
    v5 = (_QWORD *)(a2 + 40);
    LockHandle.LockQueue.Next = 0LL;
    v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v5 == v5 )
    {
      sub_1403119F0((__int64)&LockHandle, v6);
      sub_14039D600(
        BugCheckParameter2,
        &v29,
        &v28,
        &v27,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
      v7 = (_QWORD *)(a2 + 56);
      v8 = *(_QWORD *)(a2 + 56);
      v9 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v8 + 8) == a2 + 56 && (_QWORD *)*v9 == v7 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        sub_14035B8F4(&v29, 0LL, 2 * (unsigned int)(v28 != 0) + 1, v10);
        *(_BYTE *)(a2 + 18) = 0;
        v11 = *(_QWORD *)a2;
        v12 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v12 == a2 )
        {
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v5 = 0LL;
          *(_QWORD *)(a2 + 48) = 0LL;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v22 = KeGetCurrentIrql();
              if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v24 = *((_QWORD *)CurrentPrcb + 4375);
                v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v21 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
                *(_DWORD *)(v24 + 20) &= v25;
                if ( v21 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          result = *(unsigned __int8 *)(a2 + 16);
          if ( (_BYTE)result )
            result = sub_140353BB0(BugCheckParameter2, *(unsigned __int8 *)(a2 + 16));
          goto LABEL_11;
        }
      }
LABEL_21:
      __fastfail(3u);
    }
    sub_1403119F0((__int64)&LockHandle, v6);
    sub_14039CEC8(BugCheckParameter2, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = *(_QWORD *)a2;
    v16 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v16 != a2 )
      goto LABEL_21;
  }
  else
  {
    v15 = *(_QWORD *)a2;
    v16 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v16 != a2 )
      goto LABEL_21;
  }
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_11:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
