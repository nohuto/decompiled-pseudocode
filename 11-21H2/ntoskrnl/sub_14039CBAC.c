/*
 * XREFs of sub_14039CBAC @ 0x14039CBAC
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14039CB30 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x14063C7A0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     sub_14039CE24 @ 0x14039CE24 (sub_14039CE24.c)
 *     sub_14039CEC8 @ 0x14039CEC8 (sub_14039CEC8.c)
 *     sub_14039D2EC @ 0x14039D2EC (sub_14039D2EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG_PTR __fastcall sub_14039CBAC(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r13
  __int64 *v6; // rcx
  __int64 **v7; // rax
  LONG_PTR result; // rax
  __int64 v9; // r9
  _QWORD *v10; // r14
  volatile __int64 *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v21; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v30; // [rsp+98h] [rbp+48h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+50h] BYREF
  __int64 *v32; // [rsp+A8h] [rbp+58h] BYREF

  v32 = 0LL;
  v31 = 0LL;
  v30 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(&v28, 0, sizeof(v28));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = a2[4];
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(v5 + 1672);
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(v5 + 1672));
  if ( !*((_BYTE *)a2 + 18) )
  {
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v7 == a2 )
    {
LABEL_5:
      *v7 = v6;
      v6[1] = (__int64)v7;
      *a2 = 0LL;
      a2[1] = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v23 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_7;
    }
LABEL_22:
    __fastfail(3u);
  }
  v10 = a2 + 5;
  v28.LockQueue.Next = 0LL;
  v11 = (volatile __int64 *)(a1 + 96);
  v28.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 96);
  if ( (_QWORD *)*v10 != v10 )
  {
    sub_1403119F0((__int64)&v28, v11);
    LOBYTE(v18) = 1;
    sub_14039CEC8(a1, a2, v18);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v7 == a2 )
      goto LABEL_5;
    goto LABEL_22;
  }
  sub_1403119F0((__int64)&v28, v11);
  sub_14039D2EC(a1, &v32, &v31, &v30, v28.LockQueue.Next, v28.LockQueue.Lock, *(_QWORD *)&v28.OldIrql);
  v12 = a2 + 7;
  v13 = a2[7];
  v14 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v13 + 8) != a2 + 7 )
    goto LABEL_22;
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_22;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
  *((_BYTE *)a2 + 18) = 0;
  v15 = (__int64 *)*a2;
  v16 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v16 != a2 )
    goto LABEL_22;
  *v16 = v15;
  v15[1] = (__int64)v16;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v10 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  sub_14035B8F4(&v32, 0LL, 2 * (unsigned int)(v31 != 0) + 1, v17);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v27;
        if ( v23 )
          sub_140418E4C(v25);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( *((_BYTE *)a2 + 16) )
    sub_14039CE24(a1, *((unsigned __int8 *)a2 + 16), v5);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_7:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
