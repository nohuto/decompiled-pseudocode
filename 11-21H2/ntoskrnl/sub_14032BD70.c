/*
 * XREFs of sub_14032BD70 @ 0x14032BD70
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402339A0 (ExAcquireSharedStarveExclusive.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 * Callees:
 *     sub_14021CA10 @ 0x14021CA10 (sub_14021CA10.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_14021CD50 @ 0x14021CD50 (sub_14021CD50.c)
 *     sub_14022B410 @ 0x14022B410 (sub_14022B410.c)
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
 *     sub_1402464C0 @ 0x1402464C0 (sub_1402464C0.c)
 *     sub_1402597A8 @ 0x1402597A8 (sub_1402597A8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_14033B6F0 @ 0x14033B6F0 (sub_14033B6F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1406325F8 @ 0x1406325F8 (sub_1406325F8.c)
 *     sub_140632AC8 @ 0x140632AC8 (sub_140632AC8.c)
 */

char __fastcall sub_14032BD70(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThread; // r15
  bool v7; // r14
  volatile __int64 *v8; // rbx
  int v9; // esi
  KIRQL CurrentIrql; // r10
  __int64 v11; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 Next; // rax
  struct _KPRCB *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned int v22; // eax
  int v23; // r8d
  _QWORD *v24; // rax
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rbx
  int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned __int64 v37; // rsi
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  int v42; // eax
  bool v43; // zf
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rcx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  __int64 v51; // r8
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  __int64 v55; // r8
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  __int64 v59; // r8
  int v60; // eax
  int v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  __int64 v64; // r8
  int v65; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v67[3]; // [rsp+48h] [rbp-38h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v67, 0, sizeof(v67));
  CurrentThread = (__int64)KeGetCurrentThread();
  v7 = (DWORD1(xmmword_140D06900) & 0x20000) != 0;
  __incgsdword(0x8AA4u);
  v8 = (volatile __int64 *)(a1 + 96);
  v9 = 0;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a3 = ((_DWORD)v11 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v38 = *(_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 24) = v38 + 1;
      if ( v38 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&LockHandle, v8);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64(v8, (__int64)&LockHandle);
    if ( v14 )
      sub_140311C70((__int64)&LockHandle, v14, a3, a4);
  }
  do
  {
    v15 = 1LL;
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v16 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v16 | 8;
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      {
        sub_14056E6FC(&LockHandle, retaddr);
        v15 = 1LL;
        goto LABEL_10;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_10:
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          if ( v19 )
          {
            if ( *((_BYTE *)v18 + 32) <= 1u )
            {
              v61 = *(_DWORD *)(v19 + 24) - 1;
              *(_DWORD *)(v19 + 24) = v61;
              if ( !v61 )
              {
                sub_140418E4C(v18);
                v15 = 1LL;
              }
            }
          }
          OldIrql = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v62 = KeGetCurrentIrql();
              if ( v62 <= 0xFu && LockHandle.OldIrql <= 0xFu && v62 >= 2u )
              {
                v63 = KeGetCurrentPrcb();
                v64 = *((_QWORD *)v63 + 4375);
                v65 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
                v43 = (v65 & *(_DWORD *)(v64 + 20)) == 0;
                *(_DWORD *)(v64 + 20) &= v65;
                if ( v43 )
                  sub_140418E4C(v63);
                v15 = 1LL;
              }
            }
          }
          __writecr8(OldIrql);
          __incgsdword(0x8AACu);
          __incgsdword(0x8A64u);
          if ( !v7 )
            return 1;
          goto LABEL_67;
        }
        Next = sub_140282C20((__int64 *)&LockHandle);
        v15 = 1LL;
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_10;
    }
    if ( (*(_WORD *)(a1 + 26) & 0x80) != 0 )
    {
      if ( *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v35 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v35;
        v36 = v35 >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v37 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && LockHandle.OldIrql <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = *((_QWORD *)v40 + 4375);
              v42 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
              v43 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
              *(_DWORD *)(v41 + 20) &= v42;
              if ( v43 )
                sub_140418E4C(v40);
            }
          }
        }
        __writecr8(v37);
        __incgsdword(0x8AA8u);
        __incgsdword(0x8A64u);
        if ( v7 )
        {
          v15 = v36;
          v48 = 65585LL;
          goto LABEL_68;
        }
        return 1;
      }
      v24 = sub_14021CA10(a1);
    }
    else
    {
      v22 = sub_14022B410(CurrentThread);
      v24 = sub_14021CD50(a1, CurrentThread, (__int64)&LockHandle, v23, *(_DWORD *)(a1 + 76) != 0, v22);
    }
  }
  while ( !v24 );
  if ( *v24 == CurrentThread )
  {
    v25 = *((_DWORD *)v24 + 2) + 8;
    *((_DWORD *)v24 + 2) = v25;
    v26 = v25 >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v27 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && LockHandle.OldIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = *((_QWORD *)v45 + 4375);
          v47 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v43 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
          *(_DWORD *)(v46 + 20) &= v47;
          if ( v43 )
            sub_140418E4C(v45);
        }
      }
    }
    __writecr8(v27);
    __incgsdword(0x8AB0u);
    __incgsdword(0x8A64u);
    if ( v7 )
    {
      v15 = v26;
      v48 = 65617LL;
      goto LABEL_68;
    }
    return 1;
  }
  if ( sub_1402464C0(a1) )
  {
    v30 = *(_DWORD *)(v28 + 8) & 7;
    *(_QWORD *)v28 = CurrentThread;
    *(_DWORD *)(v28 + 8) = v30 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v31 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = *((_QWORD *)v50 + 4375);
          v52 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v43 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
          *(_DWORD *)(v51 + 20) &= v52;
          if ( v43 )
            sub_140418E4C(v50);
        }
      }
    }
    __writecr8(v31);
    goto LABEL_29;
  }
  if ( a2 )
  {
    v32 = *(_DWORD *)(v28 + 8) & 7;
    *(_QWORD *)v28 = CurrentThread;
    *(_DWORD *)(v28 + 8) = v32 | 8;
    sub_1402597A8(v29, CurrentThread, (__int64)v67);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v33 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = *((_QWORD *)v58 + 4375);
          v60 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v43 = (v60 & *(_DWORD *)(v59 + 20)) == 0;
          *(_DWORD *)(v59 + 20) &= v60;
          if ( v43 )
            sub_140418E4C(v58);
        }
      }
    }
    __writecr8(v33);
    __incgsdword(0x8AB4u);
    if ( v7 )
      sub_140632AC8(65604LL, a1, 0LL);
    sub_14033B6F0(a1);
    sub_140231990((struct _LIST_ENTRY *)a1, (__int64)v67, 0x10244u, (__int64)sub_14025C860);
LABEL_29:
    if ( (CurrentThread & 3) == 0 )
      v9 = *(unsigned __int8 *)(CurrentThread + 1120);
    sub_14021CA70(a1, CurrentThread, v9);
    __incgsdword(0x8AACu);
    __incgsdword(0x8A64u);
    if ( !v7 )
      return 1;
    v15 = 1LL;
LABEL_67:
    v48 = 65601LL;
LABEL_68:
    sub_1406325F8(v48, a1, v15, *(unsigned int *)(a1 + 68));
    return 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v34 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v53 = KeGetCurrentIrql();
      if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
      {
        v54 = KeGetCurrentPrcb();
        v55 = *((_QWORD *)v54 + 4375);
        v56 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
        v43 = (v56 & *(_DWORD *)(v55 + 20)) == 0;
        *(_DWORD *)(v55 + 20) &= v56;
        if ( v43 )
          sub_140418E4C(v54);
      }
    }
  }
  __writecr8(v34);
  __incgsdword(0x8AB8u);
  return 0;
}
