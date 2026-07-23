/*
 * XREFs of ExDisownFastResource @ 0x14039C100
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_14039C41C @ 0x14039C41C (sub_14039C41C.c)
 *     sub_14039C474 @ 0x14039C474 (sub_14039C474.c)
 *     sub_14039CEC8 @ 0x14039CEC8 (sub_14039CEC8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  char v2; // r12
  KSPIN_LOCK *CurrentThread; // r13
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v8; // rcx
  ULONG_PTR v9; // r9
  unsigned __int8 v10; // r15
  __int64 v11; // r8
  KSPIN_LOCK *v12; // r14
  _QWORD *v13; // r15
  volatile __int64 *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  ULONG_PTR *v21; // rax
  LONG_PTR result; // rax
  __int64 v23; // r9
  _QWORD *v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r14
  ULONG_PTR *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v45; // r8
  int v46; // eax
  bool v47; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v50; // [rsp+90h] [rbp+30h]

  *(_QWORD *)&v49.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
  v6 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v8 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (*((_DWORD *)v8 + 29) & 0x400) == 0 && !*((_DWORD *)v8 + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v9 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v9 != v8 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v9, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  v10 = KeGetCurrentIrql();
  v50 = v10;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v10 <= 0xFu )
  {
    v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v23 + 20) |= (-1 << (v10 + 1)) & 4;
  }
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v49.LockQueue.Lock = CurrentThread + 209;
  v49.LockQueue.Next = 0LL;
  sub_1403119F0((__int64)&v49, (volatile __int64 *)CurrentThread + 209);
  v12 = (KSPIN_LOCK *)CurrentThread[210];
  if ( v12 != CurrentThread + 210 )
  {
    while ( v12[3] != BugCheckParameter2 )
    {
      v12 = (KSPIN_LOCK *)*v12;
      if ( v12 == CurrentThread + 210 )
        goto LABEL_32;
    }
    if ( v12 )
    {
      if ( *(_BYTE *)(a2 + 18) )
      {
        v13 = (_QWORD *)(a2 + 40);
        v14 = (volatile __int64 *)(BugCheckParameter2 + 96);
        LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(BugCheckParameter2 + 96);
        if ( (_QWORD *)*v13 == v13 )
        {
          LockHandle.LockQueue.Next = 0LL;
          sub_1403119F0((__int64)&LockHandle, v14);
          --*(_DWORD *)(BugCheckParameter2 + 64);
          v15 = (_QWORD *)(a2 + 56);
          v16 = *(_QWORD *)(a2 + 56);
          v17 = *(_QWORD **)(a2 + 64);
          if ( *(_QWORD *)(v16 + 8) == a2 + 56 && (_QWORD *)*v17 == v15 )
          {
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
            *v15 = 0LL;
            *(_QWORD *)(a2 + 64) = 0LL;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            *(_BYTE *)(a2 + 18) = 0;
            v18 = *(_QWORD *)a2;
            v19 = *(_QWORD **)(a2 + 8);
            if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v19 == a2 )
            {
              *v19 = v18;
              v20 = v12 + 5;
              *(_QWORD *)(v18 + 8) = v19;
              *(_QWORD *)a2 = 0LL;
              *(_QWORD *)(a2 + 8) = 0LL;
              *v13 = 0LL;
              *(_QWORD *)(a2 + 48) = 0LL;
              v6 = *(unsigned __int8 *)(a2 + 16);
              *(_BYTE *)(a2 + 16) = 0;
              v21 = (ULONG_PTR *)v20[1];
              if ( (_QWORD *)*v21 == v20 )
              {
LABEL_21:
                *(_QWORD *)a2 = v20;
                *(_QWORD *)(a2 + 8) = v21;
                *v21 = a2;
                v20[1] = a2;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
                v10 = v50;
                goto LABEL_22;
              }
            }
          }
        }
        else
        {
          LockHandle.LockQueue.Next = 0LL;
          sub_1403119F0((__int64)&LockHandle, v14);
          LOBYTE(v33) = 1;
          sub_14039CEC8(BugCheckParameter2, a2, v33);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v34 = *(_QWORD *)a2;
          v35 = *(_QWORD **)(a2 + 8);
          if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v35 == a2 )
          {
            *v35 = v34;
            v20 = v12 + 5;
            *(_QWORD *)(v34 + 8) = v35;
            *(_QWORD *)a2 = 0LL;
            *(_QWORD *)(a2 + 8) = 0LL;
            v21 = (ULONG_PTR *)v20[1];
            if ( (_QWORD *)*v21 == v20 )
              goto LABEL_21;
          }
        }
LABEL_38:
        __fastfail(3u);
      }
      v29 = *(_QWORD *)a2;
      v30 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_38;
      if ( *v30 != a2 )
        goto LABEL_38;
      *v30 = v29;
      v31 = v12 + 5;
      *(_QWORD *)(v29 + 8) = v30;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v32 = (ULONG_PTR *)v31[1];
      if ( (_QWORD *)*v32 != v31 )
        goto LABEL_38;
      *(_QWORD *)a2 = v31;
      *(_QWORD *)(a2 + 8) = v32;
      *v32 = a2;
      v31[1] = a2;
LABEL_64:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
      goto LABEL_22;
    }
  }
LABEL_32:
  if ( !*(_BYTE *)(a2 + 18) )
  {
    v36 = *(_QWORD *)a2;
    v37 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
      goto LABEL_38;
    if ( *v37 != a2 )
      goto LABEL_38;
    *v37 = v36;
    *(_QWORD *)(v36 + 8) = v37;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(BugCheckParameter2 + 96);
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
    ++*(_DWORD *)(BugCheckParameter2 + 64);
    v38 = *(_QWORD **)(BugCheckParameter2 + 56);
    v39 = (_QWORD *)(a2 + 56);
    if ( *v38 != BugCheckParameter2 + 48 )
      goto LABEL_38;
    *v39 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v38;
    *v38 = v39;
    *(_QWORD *)(BugCheckParameter2 + 56) = v39;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v2 = 1;
    goto LABEL_63;
  }
  v24 = (_QWORD *)(a2 + 40);
  if ( (_QWORD *)*v24 != v24 )
  {
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Next = 0LL;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
    sub_14039CEC8(BugCheckParameter2, a2, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v41 = *(_QWORD *)a2;
    v2 = 1;
    v42 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v42 != a2 )
      goto LABEL_38;
    *v42 = v41;
    *(_QWORD *)(v41 + 8) = v42;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_63:
    sub_14039C474(CurrentThread, v40, 1LL, a2);
    goto LABEL_64;
  }
  v25 = *(unsigned __int8 *)(a2 + 16);
  *(_BYTE *)(a2 + 18) = 0;
  v26 = *(_QWORD *)a2;
  v27 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v27 != a2 )
    goto LABEL_38;
  *v27 = v26;
  *(_QWORD *)(v26 + 8) = v27;
  LOBYTE(v11) = 1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v24 = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  sub_14039C474(CurrentThread, v26, v11, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
  v2 = 1;
  if ( (_BYTE)v25 )
    sub_14039C41C(v28, v25);
LABEL_22:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v43 = KeGetCurrentIrql();
      if ( v43 <= 0xFu && v10 <= 0xFu && v43 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v45 = *((_QWORD *)CurrentPrcb + 4375);
        v46 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v47 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
        *(_DWORD *)(v45 + 20) &= v46;
        if ( v47 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = v10;
  __writecr8(v10);
  if ( v2 )
    result = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  if ( v6 )
    return sub_140353BB0(BugCheckParameter2, v6);
  return result;
}
