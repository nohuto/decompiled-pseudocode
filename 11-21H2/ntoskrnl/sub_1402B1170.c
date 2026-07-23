/*
 * XREFs of sub_1402B1170 @ 0x1402B1170
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140220460 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140224140 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402FB7E0 @ 0x1402FB7E0 (sub_1402FB7E0.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 * Callees:
 *     sub_14021CA10 @ 0x14021CA10 (sub_14021CA10.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_14021CD50 @ 0x14021CD50 (sub_14021CD50.c)
 *     sub_14022B410 @ 0x14022B410 (sub_14022B410.c)
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
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

__int64 __fastcall sub_1402B1170(__int64 a1, char a2)
{
  __int64 CurrentThread; // r12
  bool v5; // r15
  volatile __int64 *v6; // rdi
  int v7; // r14d
  KIRQL CurrentIrql; // r10
  __int64 v9; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // si
  int v13; // eax
  __int64 Next; // rax
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 OldIrql; // rdi
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 *v21; // rax
  __int64 *v22; // rcx
  int v23; // edx
  int v24; // eax
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned int v29; // edi
  unsigned int v30; // edi
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  unsigned int v35; // edi
  unsigned int v36; // edi
  __int64 v37; // rax
  struct _KPRCB *v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  int v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rdi
  _QWORD *v44; // rcx
  unsigned __int64 v45; // rbx
  int v46; // eax
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  __int64 v50; // r8
  int v51; // eax
  bool v52; // zf
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  __int64 v56; // r8
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  __int64 v60; // r8
  int v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  __int64 v64; // r8
  int v65; // eax
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r9
  __int64 v69; // r8
  int v70; // eax
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  __int64 v74; // r8
  int v75; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v77; // [rsp+48h] [rbp-38h] BYREF
  __int128 v78; // [rsp+58h] [rbp-28h]
  __int128 v79; // [rsp+68h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(xmmword_140D06900) & 0x20000) != 0;
  __incgsdword(0x8A8Cu);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v19 + 20) |= ((_DWORD)v9 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v11 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v46 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 24) = v46 + 1;
      if ( v46 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&LockHandle, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)&LockHandle) )
  {
    sub_140311C70(&LockHandle);
  }
  do
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v12 = 1;
      v13 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v13 | 8;
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      {
        sub_14056E6FC(&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_10;
          Next = sub_140282C20((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_10:
      v15 = KeGetCurrentPrcb();
      v16 = *((_QWORD *)v15 + 4375);
      if ( v16 )
      {
        if ( *((_BYTE *)v15 + 32) <= 1u )
        {
          v71 = *(_DWORD *)(v16 + 24) - 1;
          *(_DWORD *)(v16 + 24) = v71;
          if ( !v71 )
            sub_140418E4C(v15);
        }
      }
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v72 = KeGetCurrentIrql();
          if ( v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
          {
            v73 = KeGetCurrentPrcb();
            v74 = *((_QWORD *)v73 + 4375);
            v75 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
            v52 = (v75 & *(_DWORD *)(v74 + 20)) == 0;
            *(_DWORD *)(v74 + 20) &= v75;
            if ( v52 )
              sub_140418E4C(v73);
          }
        }
      }
      __writecr8(OldIrql);
      __incgsdword(0x8A94u);
      __incgsdword(0x8A64u);
      if ( v5 )
        sub_1406325F8(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
      return v12;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      if ( *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v29 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v29;
        v30 = v29 >> 3;
        if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        {
          sub_14056E6FC(&LockHandle, retaddr);
          goto LABEL_37;
        }
        _m_prefetchw(&LockHandle);
        v31 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_37:
            v32 = KeGetCurrentPrcb();
            v33 = *((_QWORD *)v32 + 4375);
            if ( v33 )
            {
              if ( *((_BYTE *)v32 + 32) <= 1u )
              {
                v47 = *(_DWORD *)(v33 + 24) - 1;
                *(_DWORD *)(v33 + 24) = v47;
                if ( !v47 )
                  sub_140418E4C(v32);
              }
            }
            v34 = LockHandle.OldIrql;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v48 = KeGetCurrentIrql();
                if ( v48 <= 0xFu && LockHandle.OldIrql <= 0xFu && v48 >= 2u )
                {
                  v49 = KeGetCurrentPrcb();
                  v50 = *((_QWORD *)v49 + 4375);
                  v51 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
                  v52 = (v51 & *(_DWORD *)(v50 + 20)) == 0;
                  *(_DWORD *)(v50 + 20) &= v51;
                  if ( v52 )
                    sub_140418E4C(v49);
                }
              }
            }
            __writecr8(v34);
            __incgsdword(0x8A90u);
            __incgsdword(0x8A64u);
            if ( v5 )
              sub_1406325F8(65585LL, a1, v30, *(unsigned int *)(a1 + 68));
            return 1;
          }
          v31 = sub_140282C20((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
        goto LABEL_37;
      }
      v21 = sub_14021CA10(a1);
    }
    else
    {
      v20 = sub_14022B410(CurrentThread);
      v21 = sub_14021CD50(a1, CurrentThread, (__int64)&LockHandle, 1, *(_DWORD *)(a1 + 76) != 0, v20);
    }
    v22 = v21;
  }
  while ( !v21 );
  if ( *v21 == CurrentThread )
  {
    v35 = *((_DWORD *)v21 + 2) + 8;
    *((_DWORD *)v21 + 2) = v35;
    v36 = v35 >> 3;
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14056E6FC(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v37 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_44;
        v37 = sub_140282C20((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v37 + 8), 1uLL);
    }
LABEL_44:
    v38 = KeGetCurrentPrcb();
    v39 = *((_QWORD *)v38 + 4375);
    if ( v39 )
    {
      if ( *((_BYTE *)v38 + 32) <= 1u )
      {
        v53 = *(_DWORD *)(v39 + 24) - 1;
        *(_DWORD *)(v39 + 24) = v53;
        if ( !v53 )
          sub_140418E4C(v38);
      }
    }
    v40 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v54 = KeGetCurrentIrql();
        if ( v54 <= 0xFu && LockHandle.OldIrql <= 0xFu && v54 >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v56 = *((_QWORD *)v55 + 4375);
          v57 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v52 = (v57 & *(_DWORD *)(v56 + 20)) == 0;
          *(_DWORD *)(v56 + 20) &= v57;
          if ( v52 )
            sub_140418E4C(v55);
        }
      }
    }
    __writecr8(v40);
    __incgsdword(0x8A98u);
    __incgsdword(0x8A64u);
    if ( !v5 )
      return 1;
    sub_1406325F8(65617LL, a1, v36, *(unsigned int *)(a1 + 68));
    return 1;
  }
  v23 = *(_DWORD *)(a1 + 64);
  if ( !v23 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v23 + 1;
    v24 = v21[1] & 7;
    *v22 = CurrentThread;
    *((_DWORD *)v22 + 2) = v24 | 8;
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14056E6FC(&LockHandle, retaddr);
      goto LABEL_28;
    }
    _m_prefetchw(&LockHandle);
    v25 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_28:
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        if ( v27 )
        {
          if ( *((_BYTE *)v26 + 32) <= 1u )
          {
            v66 = *(_DWORD *)(v27 + 24) - 1;
            *(_DWORD *)(v27 + 24) = v66;
            if ( !v66 )
              sub_140418E4C(v26);
          }
        }
        v28 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && LockHandle.OldIrql <= 0xFu && v67 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = *((_QWORD *)v68 + 4375);
              v70 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
              v52 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
              *(_DWORD *)(v69 + 20) &= v70;
              if ( v52 )
                sub_140418E4C(v68);
            }
          }
        }
        __writecr8(v28);
        goto LABEL_31;
      }
      v25 = sub_140282C20((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
    goto LABEL_28;
  }
  if ( a2 )
  {
    v41 = *((_DWORD *)v21 + 2);
    *v22 = CurrentThread;
    *((_DWORD *)v22 + 2) = v41 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v79 + 1) = &v79;
    *(_QWORD *)&v79 = &v79;
    v42 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)&v77 + 1) = 0LL;
    *((_QWORD *)&v78 + 1) = 393217LL;
    *(_QWORD *)&v78 = CurrentThread;
    if ( v42 )
    {
      v44 = *(_QWORD **)(v42 + 8);
      if ( *v44 != v42 )
        __fastfail(3u);
      *((_QWORD *)&v77 + 1) = *(_QWORD *)(v42 + 8);
      *(_QWORD *)&v77 = v42;
      *v44 = &v77;
      *(_QWORD *)(v42 + 8) = &v77;
    }
    else
    {
      *((_QWORD *)&v77 + 1) = &v77;
      *(_QWORD *)&v77 = &v77;
    }
    *(_QWORD *)(a1 + 32) = &v77;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v43 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v62 = KeGetCurrentIrql();
        if ( v62 <= 0xFu && LockHandle.OldIrql <= 0xFu && v62 >= 2u )
        {
          v63 = KeGetCurrentPrcb();
          v64 = *((_QWORD *)v63 + 4375);
          v65 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v52 = (v65 & *(_DWORD *)(v64 + 20)) == 0;
          *(_DWORD *)(v64 + 20) &= v65;
          if ( v52 )
            sub_140418E4C(v63);
        }
      }
    }
    __writecr8(v43);
    __incgsdword(0x8A9Cu);
    if ( v5 )
      sub_140632AC8(65604LL, a1, 0LL);
    sub_14033B6F0(a1);
    sub_140231990((struct _LIST_ENTRY *)a1, (__int64)&v77, 0x10244u, (__int64)sub_14025C860);
    if ( (CurrentThread & 3) == 0 )
      v7 = *(unsigned __int8 *)(CurrentThread + 1120);
    sub_14021CA70(a1, CurrentThread, v7);
LABEL_31:
    __incgsdword(0x8A94u);
    __incgsdword(0x8A64u);
    if ( !v5 )
      return 1;
    sub_1406325F8(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return 1;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v45 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v58 = KeGetCurrentIrql();
        if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = *((_QWORD *)v59 + 4375);
          v61 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v52 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
          *(_DWORD *)(v60 + 20) &= v61;
          if ( v52 )
            sub_140418E4C(v59);
        }
      }
    }
    __writecr8(v45);
    __incgsdword(0x8AA0u);
    return 0;
  }
}
