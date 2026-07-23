/*
 * XREFs of sub_140343010 @ 0x140343010
 * Callers:
 *     sub_140239810 @ 0x140239810 (sub_140239810.c)
 *     sub_14025C860 @ 0x14025C860 (sub_14025C860.c)
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_14033B6F0 @ 0x14033B6F0 (sub_14033B6F0.c)
 * Callees:
 *     sub_140229B04 @ 0x140229B04 (sub_140229B04.c)
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_14024E928 @ 0x14024E928 (sub_14024E928.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14030F6D0 @ 0x14030F6D0 (sub_14030F6D0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140343770 @ 0x140343770 (sub_140343770.c)
 *     sub_1403438F0 @ 0x1403438F0 (sub_1403438F0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

__int64 __fastcall sub_140343010(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // zf
  __int64 v8; // r9
  int v9; // r12d
  bool v10; // cc
  volatile __int64 *v11; // r8
  int v12; // r13d
  int v13; // esi
  int v14; // r15d
  int v15; // r14d
  KIRQL CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned __int16 v20; // ax
  __int16 v21; // dx
  __int16 v22; // ax
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rdi
  __int64 Next; // rax
  struct _KPRCB *v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 OldIrql; // rsi
  __int64 v30; // r9
  volatile __int64 *v31; // r8
  KIRQL v32; // r10
  struct _KPRCB *v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  __int64 v36; // rax
  struct _KPRCB *v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  __int64 v40; // rdi
  unsigned int v41; // r13d
  unsigned int i; // r14d
  int v43; // eax
  __int64 v44; // rsi
  int v45; // edx
  int v46; // eax
  KIRQL v47; // r10
  __int16 v48; // ax
  __int64 v49; // rax
  unsigned __int8 v50; // r14
  struct _KDPC *v51; // rsi
  __int64 v52; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  __int64 v56; // r9
  int v57; // eax
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // rdx
  int v64; // eax
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r11
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  struct _KPRCB *v71; // r9
  __int64 v72; // r8
  int v73; // [rsp+20h] [rbp-38h]
  int v74; // [rsp+24h] [rbp-34h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF
  void *retaddr; // [rsp+78h] [rbp+20h]
  KIRQL v77; // [rsp+80h] [rbp+28h]
  int v78; // [rsp+98h] [rbp+40h]

  result = 0LL;
  v4 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
    return result;
  v9 = sub_140343770(a3);
  v10 = v9 <= 2;
  if ( v9 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() )
      goto LABEL_4;
    v10 = v9 <= 2;
  }
  if ( v10 )
LABEL_4:
    v9 = 2;
  v11 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 96);
  v12 = a2 & 0xFF00;
  v13 = a2 & 4;
  v14 = a2 & 2;
  v74 = v12;
  v73 = v13;
  v15 = 0;
  v78 = 0;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    v11 = (volatile __int64 *)(a1 + 96);
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v18 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v53 = *(_DWORD *)(v18 + 24);
      *(_DWORD *)(v18 + 24) = v53 + 1;
      if ( v53 == -1 )
      {
        sub_140418E4C(CurrentPrcb);
        v11 = (volatile __int64 *)(a1 + 96);
      }
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&LockHandle, v11);
  }
  else
  {
    v19 = (_QWORD *)_InterlockedExchange64(v11, (__int64)&LockHandle);
    if ( v19 )
      sub_140311C70((__int64)&LockHandle, v19, (__int64)v11, v8);
  }
  if ( v13 )
    *(_WORD *)(a1 + 26) |= 4u;
  v20 = *(_WORD *)(a1 + 26);
  v21 = HIBYTE(v20);
  if ( v14 )
  {
    v22 = v20 | 2;
    *(_WORD *)(a1 + 26) = v22;
    LOBYTE(v21) = HIBYTE(v22);
  }
  if ( v12 )
  {
    v23 = *(char *)(a3 + 195);
    if ( v23 > (unsigned __int8)v21 )
    {
      if ( (unsigned __int8)v23 >= 0xFu )
        LOBYTE(v23) = 15;
      *(_BYTE *)(a1 + 27) = v23;
    }
  }
  v24 = *(_DWORD *)(a1 + 56);
  v25 = *(_QWORD *)(a1 + 48);
  if ( (v24 & 2) != 0 )
  {
    v25 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v25 & 3) != 0 )
  {
    goto LABEL_53;
  }
  if ( v25 )
  {
    if ( v13
      && (v24 & 1) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v25 + 544) + 1124LL) & 0x100000) != 0 || (*(_DWORD *)(v25 + 1376) & 0xE00u) < 0x400) )
    {
      v15 = 4;
      v78 = 4;
      sub_1402ACD80(v25, 0, 0, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    if ( v14 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v15 |= 2u;
      v78 = v15;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v25 + 1444)) == 1 && *(_BYTE *)(v25 + 793) )
      {
        v50 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v50 <= 0xFu )
        {
          v52 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v52 + 20) |= (-1 << (v50 + 1)) & 4;
        }
        v51 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (unsigned int)sub_14024E928(v25, &v51[557].DpcData, (_QWORD *)(v25 + 808)) )
          sub_140229D30(v51);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v54 = KeGetCurrentIrql();
            if ( v54 <= 0xFu && v50 <= 0xFu && v54 >= 2u )
            {
              v55 = KeGetCurrentPrcb();
              v56 = *((_QWORD *)v55 + 4375);
              v57 = ~(unsigned __int16)(-1LL << (v50 + 1));
              v4 = (v57 & *(_DWORD *)(v56 + 20)) == 0;
              *(_DWORD *)(v56 + 20) &= v57;
              if ( v4 )
                sub_140418E4C(v55);
            }
          }
        }
        __writecr8(v50);
        v15 = v78;
      }
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    if ( v12 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v25 + 195) )
    {
      v15 |= 0xFF00u;
      v78 = v15;
    }
    if ( v15 )
    {
      if ( dword_140D05010 )
        sub_1405C5EC8(v25 - 48);
      sub_14030F6D0((volatile signed __int64 *)(v25 - 48));
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
            goto LABEL_40;
          Next = sub_140282C20((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_40:
      v27 = KeGetCurrentPrcb();
      v28 = *((_QWORD *)v27 + 4375);
      if ( v28 )
      {
        if ( *((_BYTE *)v27 + 32) <= 1u )
        {
          v58 = *(_DWORD *)(v28 + 24) - 1;
          *(_DWORD *)(v28 + 24) = v58;
          if ( !v58 )
            sub_140418E4C(v27);
        }
      }
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v59 = KeGetCurrentIrql();
          if ( v59 <= 0xFu && LockHandle.OldIrql <= 0xFu && v59 >= 2u )
          {
            v60 = KeGetCurrentPrcb();
            v61 = *((_QWORD *)v60 + 4375);
            v62 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
            *(_DWORD *)(v61 + 20) &= v62;
            if ( v4 )
              sub_140418E4C(v60);
          }
        }
      }
      __writecr8(OldIrql);
      if ( (v15 & 4) != 0 )
      {
        ++dword_140C4EF54;
        sub_140280754((KSPIN_LOCK *)v25, v9, 0);
      }
      if ( (v15 & 2) != 0 && *(_DWORD *)(v25 + 1448) && sub_1403614FC(qword_140C474D8) )
      {
        sub_14042A5E0(v25, v63);
        sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C474D8 + 64));
      }
      if ( (v15 & 0xFF00) != 0 )
      {
        __incgsdword(0x8AE8u);
        sub_1403438F0(v25, *(unsigned __int8 *)(a1 + 27));
      }
      v78 = 0;
      ObDereferenceObjectDeferDelete((PVOID)v25);
      v31 = (volatile __int64 *)(a1 + 96);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 96);
      v32 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v32 <= 0xFu )
      {
        v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v30 + 20) |= (-1 << (v32 + 1)) & 4;
        v31 = (volatile __int64 *)(a1 + 96);
      }
      LockHandle.OldIrql = v32;
      v33 = KeGetCurrentPrcb();
      v34 = *((_QWORD *)v33 + 4375);
      if ( v34 )
      {
        if ( *((_BYTE *)v33 + 32) <= 1u )
        {
          v64 = *(_DWORD *)(v34 + 24);
          *(_DWORD *)(v34 + 24) = v64 + 1;
          if ( v64 == -1 )
          {
            sub_140418E4C(v33);
            v31 = (volatile __int64 *)(a1 + 96);
          }
        }
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_14045A10C(&LockHandle, v31);
      }
      else
      {
        v35 = (_QWORD *)_InterlockedExchange64(v31, (__int64)&LockHandle);
        if ( v35 )
          sub_140311C70((__int64)&LockHandle, v35, (__int64)v31, v30);
      }
    }
  }
LABEL_53:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v40 = *(_QWORD *)(a1 + 16);
    if ( v40 )
    {
      v41 = *(_DWORD *)(v40 + 8);
      for ( i = 1; i < v41; ++i )
      {
        v43 = *(_DWORD *)(v40 + 24);
        v40 += 16LL;
        v44 = *(_QWORD *)v40;
        if ( (v43 & 2) != 0 )
        {
          v44 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v44 & 3) != 0 )
        {
          continue;
        }
        if ( v44 )
        {
          LOBYTE(v45) = v43;
          if ( v73 && (v43 & 1) == 0 && (unsigned int)sub_140343770(v44) < 2 )
          {
            v78 |= 4u;
            sub_1402ACD80(v44, 0, 0, 0LL);
            *(_DWORD *)(v40 + 8) |= 1u;
            v45 = *(_DWORD *)(v40 + 8);
          }
          if ( v14 && (v45 & 4) == 0 )
          {
            v78 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v44 + 1444)) == 1 )
              sub_140229B04(v44, 0);
            *(_DWORD *)(v40 + 8) |= 4u;
          }
          if ( v74 )
          {
            v46 = v78;
            if ( *(unsigned __int8 *)(a1 + 27) > *(char *)(v44 + 195) )
            {
              v46 = v78 | 0xFF00;
              v78 |= 0xFF00u;
            }
          }
          else
          {
            v46 = v78;
          }
          if ( v46 )
          {
            ObfReferenceObjectWithTag((PVOID)v44, 0x746C6644u);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v47 = LockHandle.OldIrql;
            v77 = LockHandle.OldIrql;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v65 = KeGetCurrentIrql();
                if ( v65 <= 0xFu && LockHandle.OldIrql <= 0xFu && v65 >= 2u )
                {
                  v66 = KeGetCurrentPrcb();
                  v67 = *((_QWORD *)v66 + 4375);
                  v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v4 = (v68 & *(_DWORD *)(v67 + 20)) == 0;
                  *(_DWORD *)(v67 + 20) &= v68;
                  if ( v4 )
                  {
                    sub_140418E4C(v66);
                    v47 = v77;
                  }
                }
              }
            }
            __writecr8(v47);
            v48 = v78;
            if ( (v78 & 4) != 0 )
            {
              ++dword_140C4EF50;
              sub_140280754((KSPIN_LOCK *)v44, v9, 0);
              v48 = v78;
            }
            if ( (v48 & 2) != 0 && *(_DWORD *)(v44 + 1448) )
            {
              if ( sub_1403614FC(qword_140C474D8) )
              {
                sub_14042A5E0(v44, v69);
                sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C474D8 + 64));
              }
              v48 = v78;
            }
            if ( (v48 & 0xFF00) != 0 )
            {
              __incgsdword(0x8AECu);
              sub_1403438F0(v44, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDelete((PVOID)v44);
            v78 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
            v49 = *(_QWORD *)(a1 + 16);
            if ( !v49 || *(_DWORD *)(v49 + 8) != v41 )
              break;
          }
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
    v36 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_57;
      v36 = sub_140282C20((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v36 + 8), 1uLL);
  }
LABEL_57:
  v37 = KeGetCurrentPrcb();
  v38 = *((_QWORD *)v37 + 4375);
  if ( v38 )
  {
    if ( *((_BYTE *)v37 + 32) <= 1u )
    {
      v70 = *(_DWORD *)(v38 + 24) - 1;
      *(_DWORD *)(v38 + 24) = v70;
      if ( !v70 )
        sub_140418E4C(v37);
    }
  }
  result = (unsigned int)dword_140D06B08;
  v39 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v71 = KeGetCurrentPrcb();
        v72 = *((_QWORD *)v71 + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = ((unsigned int)result & *(_DWORD *)(v72 + 20)) == 0;
        *(_DWORD *)(v72 + 20) &= result;
        if ( v4 )
          result = sub_140418E4C(v71);
      }
    }
  }
  __writecr8(v39);
  return result;
}
