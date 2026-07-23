/*
 * XREFs of sub_140221790 @ 0x140221790
 * Callers:
 *     sub_140214A58 @ 0x140214A58 (sub_140214A58.c)
 *     sub_1402166FC @ 0x1402166FC (sub_1402166FC.c)
 *     sub_140216A4C @ 0x140216A4C (sub_140216A4C.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_1406423A4 @ 0x1406423A4 (sub_1406423A4.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

int __fastcall sub_140221790(int a1, __int64 a2, char a3)
{
  KIRQL CurrentIrql; // r10
  __int64 v7; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _DWORD *v11; // r9
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  char *v16; // rcx
  volatile signed __int64 *v17; // r8
  int v18; // r9d
  volatile signed __int64 *v19; // rax
  signed __int64 v20; // rdx
  struct _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rbx
  signed __int64 v29; // r9
  unsigned __int64 v30; // r10
  signed __int64 v31; // r11
  bool v32; // zf
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  struct _KPRCB *v37; // r9
  __int64 v38; // r8
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  int v42; // edx
  __int64 v43; // r8
  unsigned __int64 v44; // rbp
  volatile signed __int64 *v45; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C11778;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v26 + 20) |= ((_DWORD)v7 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v9 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v27 = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 24) = v27 + 1;
      if ( v27 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&LockHandle, &qword_140C11778);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&qword_140C11778, (__int64)&LockHandle) )
  {
    sub_140311C70(&LockHandle);
  }
  if ( (a3 & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
    v11 = *(_DWORD **)(v10 + 808);
    v12 = *(_QWORD *)(v10 + 816);
  }
  else
  {
    v12 = qword_140C157B0;
    v11 = qword_140C157A8;
  }
  v13 = 0;
  if ( !v12 )
  {
LABEL_57:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v24 = (unsigned int)dword_140D06B08;
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( (unsigned __int8)v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v24 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = *((_QWORD *)v40 + 4375);
          v24 = ~(unsigned __int16)(v7 << (LockHandle.OldIrql + 1));
          v32 = ((unsigned int)v24 & *(_DWORD *)(v41 + 20)) == 0;
          *(_DWORD *)(v41 + 20) &= v24;
          if ( v32 )
            v24 = sub_140418E4C(v40);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (a3 & 0x20) != 0 )
    {
      v42 = qword_140C11768;
      v24 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
      v43 = *(_QWORD *)(v24 + 896);
    }
    else
    {
      LODWORD(v24) = HIDWORD(KeGetPcr()[1].LockArray);
      v42 = qword_140C157C8;
      v43 = (__int64)*(&qword_140C117A0 + v24);
    }
    v44 = -a2;
    v45 = (volatile signed __int64 *)(v43 + 80LL * (unsigned int)(v42 - 1));
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64(v45 + 6);
      _InterlockedExchangeAdd64(v45 + 4, v44);
    }
    else
    {
      _InterlockedIncrement64(v45 + 3);
      _InterlockedExchangeAdd64(v45 + 1, v44);
    }
    return v24;
  }
  v14 = 0LL;
  while ( 1 )
  {
    v15 = v11[20 * v14];
    if ( v15 == a1 )
      break;
    if ( v15 )
    {
      v14 = ++v13;
      if ( v13 < v12 )
        continue;
    }
    goto LABEL_57;
  }
  v16 = (char *)&v11[20 * v13];
  if ( (a3 & 1) != 0 )
  {
    v17 = (volatile signed __int64 *)(v16 + 32);
    v18 = 0;
    v19 = (volatile signed __int64 *)(v16 + 48);
  }
  else
  {
    v17 = (volatile signed __int64 *)(v16 + 8);
    v18 = 1;
    v19 = (volatile signed __int64 *)(v16 + 24);
  }
  _InterlockedIncrement64(v19);
  v20 = _InterlockedExchangeAdd64(v17, -a2);
  if ( *((_QWORD *)v16 + 9) )
  {
    v28 = v18;
    if ( (v16[8 * v18 + 56] & 1) == 0 )
    {
      v29 = *(_QWORD *)&v16[8 * v18 + 56];
      v30 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v30 == 64 )
        v30 = 128LL;
      v31 = v30 + v20;
      if ( v20 < v29 )
      {
        while ( v31 < v29 )
        {
          v33 = _InterlockedCompareExchange64((volatile signed __int64 *)&v16[8 * v28 + 56], v31, v29);
          v32 = v29 == v33;
          v29 = v33;
          if ( v32 )
          {
            v34 = v31 - v33;
            v35 = *((_QWORD *)v16 + 9) + 24 * v28;
            if ( v33 - v31 >= 0 )
              v34 = v33 - v31;
            if ( *(_QWORD *)(v35 + 16) || *(_QWORD *)(v35 + 24) )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 32), -v34);
            break;
          }
          v31 = v30 + *v17;
          if ( *v17 >= v33 )
            break;
        }
      }
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_20;
      Next = (struct _KSPIN_LOCK_QUEUE *volatile)sub_140282C20(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_20:
  v22 = KeGetCurrentPrcb();
  v23 = *((_QWORD *)v22 + 4375);
  if ( v23 )
  {
    if ( *((_BYTE *)v22 + 32) <= 1u )
    {
      v36 = *(_DWORD *)(v23 + 24) - 1;
      *(_DWORD *)(v23 + 24) = v36;
      if ( !v36 )
        sub_140418E4C(v22);
    }
  }
  LODWORD(v24) = dword_140D06B08;
  v25 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      LODWORD(v24) = KeGetCurrentIrql();
      if ( (unsigned __int8)v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v24 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = *((_QWORD *)v37 + 4375);
        LODWORD(v24) = ~(unsigned __int16)(v7 << (LockHandle.OldIrql + 1));
        v32 = ((unsigned int)v24 & *(_DWORD *)(v38 + 20)) == 0;
        *(_DWORD *)(v38 + 20) &= v24;
        if ( v32 )
          LODWORD(v24) = sub_140418E4C(v37);
      }
    }
  }
  __writecr8(v25);
  return v24;
}
