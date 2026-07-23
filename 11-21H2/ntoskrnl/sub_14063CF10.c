/*
 * XREFs of sub_14063CF10 @ 0x14063CF10
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14039CB30 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x14063C690 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x14063C7A0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     sub_14039CE24 @ 0x14039CE24 (sub_14039CE24.c)
 *     sub_14039CEC8 @ 0x14039CEC8 (sub_14039CEC8.c)
 *     sub_14039D600 @ 0x14039D600 (sub_14039D600.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG_PTR __fastcall sub_14063CF10(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r9
  __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  volatile __int64 *v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  LONG_PTR result; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+38h] [rbp-18h] BYREF
  int v29; // [rsp+98h] [rbp+48h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 *v31; // [rsp+A8h] [rbp+58h] BYREF

  v31 = 0LL;
  v30 = 0LL;
  v29 = 0;
  *(_QWORD *)&v28.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = *(_QWORD *)(a2 + 32);
  v28.LockQueue.Next = 0LL;
  v28.LockQueue.Lock = (volatile PKSPIN_LOCK)(v6 + 1672);
  sub_1403119F0((__int64)&v28, (volatile __int64 *)(v6 + 1672));
  if ( !*(_BYTE *)(a2 + 18) )
  {
    v7 = *(_QWORD *)a2;
    v8 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v8 != a2 )
      goto LABEL_8;
    goto LABEL_12;
  }
  v9 = (_QWORD *)(a2 + 40);
  LockHandle.LockQueue.Next = 0LL;
  v10 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 96);
  if ( (_QWORD *)*v9 != v9 )
  {
    sub_1403119F0((__int64)&LockHandle, v10);
    sub_14039CEC8(a1, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = *(_QWORD *)a2;
    v8 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v8 == a2 )
    {
LABEL_12:
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = *((_QWORD *)CurrentPrcb + 4375);
            v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
            *(_DWORD *)(v13 + 20) &= v14;
            if ( v15 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_34;
    }
LABEL_8:
    __fastfail(3u);
  }
  sub_1403119F0((__int64)&LockHandle, v10);
  sub_14039D600(a1, &v31, &v30, &v29);
  v17 = (_QWORD *)(a2 + 56);
  v18 = *(_QWORD *)(a2 + 56);
  v19 = *(_QWORD **)(a2 + 64);
  if ( *(_QWORD *)(v18 + 8) != a2 + 56 )
    goto LABEL_8;
  if ( (_QWORD *)*v19 != v17 )
    goto LABEL_8;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  *v17 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_BYTE *)(a2 + 18) = 0;
  v20 = *(_QWORD *)a2;
  v21 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v21 != a2 )
    goto LABEL_8;
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v9 = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
  sub_14035B8F4(&v31, 0LL, 2 * (unsigned int)(v30 != 0) + 1, v22);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v15 )
          sub_140418E4C((__int64)v24);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( *(_BYTE *)(a2 + 16) )
    sub_14039CE24(a1, *(unsigned __int8 *)(a2 + 16), v6);
  result = ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 32), 0x746C6644u);
LABEL_34:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
