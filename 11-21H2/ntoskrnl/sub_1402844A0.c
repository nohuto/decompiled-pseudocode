/*
 * XREFs of sub_1402844A0 @ 0x1402844A0
 * Callers:
 *     CcCopyWriteWontFlush @ 0x140229E10 (CcCopyWriteWontFlush.c)
 *     sub_140253510 @ 0x140253510 (sub_140253510.c)
 *     sub_140275E40 @ 0x140275E40 (sub_140275E40.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 * Callees:
 *     sub_140229F30 @ 0x140229F30 (sub_140229F30.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140284860 @ 0x140284860 (sub_140284860.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

bool __fastcall sub_1402844A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6, _BYTE *a7)
{
  char v7; // r14
  bool v8; // r10
  __int64 v9; // r13
  unsigned int v10; // r11d
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // dl
  unsigned int v14; // esi
  volatile __int64 *v15; // rdi
  KIRQL CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  char v21; // r13
  __int64 Next; // rax
  struct _KPRCB *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // edx
  bool v33; // si
  unsigned __int16 **v34; // r8
  int v35; // eax
  bool v36; // al
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // eax
  bool v42; // zf
  int v43; // eax
  unsigned __int64 v44; // rdi
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  __int64 v47; // r8
  int v48; // eax
  unsigned __int16 *v49; // r9
  unsigned int v50; // r10d
  __int64 v51; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  __int128 v53; // [rsp+48h] [rbp-20h]
  __int64 v54; // [rsp+58h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v57; // [rsp+B8h] [rbp+50h]
  __int64 v58; // [rsp+C0h] [rbp+58h]
  bool v59; // [rsp+C8h] [rbp+60h]
  unsigned int v60; // [rsp+D0h] [rbp+68h]

  v58 = a3;
  v57 = a2;
  v7 = 0;
  v8 = 0;
  v9 = a2;
  v59 = 0;
  v10 = ((a5 & 0xFFF) != 0) + (a5 >> 12);
  v11 = 0;
  v60 = v10;
  v54 = 0LL;
  v53 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    v51 = a2;
  }
  else
  {
    v9 = a1;
    v57 = a1;
    v51 = a1;
  }
  if ( a7 )
    *a7 = 0;
  v12 = 0x1000000;
  if ( a4 <= 0x1000000 )
  {
    v12 = a4;
    if ( (a4 & 0xFFF) != 0 )
      v11 = 1;
  }
  v13 = a6;
  v14 = v11 + (v12 >> 12);
  if ( (a6 & 8) == 0 )
  {
    v15 = (volatile __int64 *)(a1 + 704);
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 704);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v30 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v35 = *(_DWORD *)(v18 + 24);
        *(_DWORD *)(v18 + 24) = v35 + 1;
        if ( v35 == -1 )
        {
          sub_140418E4C(CurrentPrcb);
          v10 = v60;
        }
      }
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A10C(&LockHandle, v15);
    }
    else
    {
      if ( !_InterlockedExchange64(v15, (__int64)&LockHandle) )
      {
LABEL_13:
        a3 = v58;
        v8 = 0;
        v13 = a6;
        goto LABEL_14;
      }
      sub_140311C70(&LockHandle);
    }
    v10 = v60;
    goto LABEL_13;
  }
LABEL_14:
  v19 = v51;
  v20 = v14 + (unsigned __int64)v10;
  if ( v20 + *(_QWORD *)(v9 + 992) < *(_QWORD *)(v51 + 1016)
    || (v21 = 1, a3) && (v36 = sub_140229F30(a3, v13 | 1), v19 = v51, v8 = v36, v59 = v36) )
  {
    v21 = 0;
  }
  if ( a7
    && dword_140C54C64
    && dword_140C54C6C
    && v12
    && v12 >= dword_140C54C6C
    && v20 + *(_QWORD *)(v57 + 992) >= *(_QWORD *)(v19 + 1016) * (unsigned __int64)(unsigned int)dword_140C54C64 / 0x64 )
  {
    *a7 = 1;
  }
  if ( (a6 & 8) == 0 )
  {
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
          goto LABEL_22;
        Next = sub_140282C20((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_22:
    v23 = KeGetCurrentPrcb();
    v24 = *((_QWORD *)v23 + 4375);
    if ( v24 )
    {
      if ( *((_BYTE *)v23 + 32) <= 1u )
      {
        v37 = *(_DWORD *)(v24 + 24) - 1;
        *(_DWORD *)(v24 + 24) = v37;
        if ( !v37 )
          sub_140418E4C(v23);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = *((_QWORD *)v39 + 4375);
          v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v42 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
          *(_DWORD *)(v40 + 20) &= v41;
          if ( v42 )
            sub_140418E4C(v39);
        }
      }
    }
    __writecr8(OldIrql);
    v8 = v59;
  }
  v26 = 0LL;
  if ( !v8 && v58 )
  {
    if ( (a6 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(v58 + 24) + 4LL) & 4) == 0 && !v21 )
    {
LABEL_30:
      v27 = qword_140C59180;
      v7 = 0;
      v28 = 450LL;
      if ( (_BYTE)dword_140D051DC )
        v28 = 0x4000LL;
      if ( qword_140C59180 < v28 )
      {
        v34 = (unsigned __int16 **)&unk_140C56958;
        while ( 1 )
        {
          v49 = *v34;
          v50 = 0;
          if ( dword_140C5073C )
            break;
LABEL_100:
          if ( (__int64)++v34 > (__int64)&qword_140C56960 )
          {
            if ( qword_140C59300 < (unsigned __int64)(qword_140C593E0 + 800) )
              v7 = (unsigned int)sub_140285380(&StartContext, 80LL) != 0;
            return v7 != 0;
          }
        }
        while ( 1 )
        {
          v27 += *v49;
          if ( v27 >= v28 )
            break;
          ++v50;
          v49 += 8;
          if ( v50 >= dword_140C5073C )
            goto LABEL_100;
        }
      }
      v7 = 1;
      return v7 != 0;
    }
    if ( (a6 & 8) == 0 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
    v26 = *(_QWORD *)(v58 + 40);
    if ( v26 )
    {
      v31 = *(_QWORD *)(v26 + 8);
      if ( v31 )
      {
        v32 = *(_DWORD *)(v31 + 264);
        v33 = v32 && (v43 = *(_DWORD *)(v31 + 112)) != 0 && v14 + v43 > v32;
        if ( *(_QWORD *)(*(_QWORD *)(v31 + 504) + 32LL) <= (unsigned __int64)(unsigned int)dword_140C097B0
          && (a6 & 4) == 0 )
        {
          v21 = 0;
        }
      }
      else
      {
        v33 = 0;
      }
      v7 = sub_140284860(v26);
    }
    else
    {
      v33 = 0;
    }
    if ( (a6 & 8) == 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v44 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v45 = KeGetCurrentIrql();
          if ( v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            v47 = *((_QWORD *)v46 + 4375);
            v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v42 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
            *(_DWORD *)(v47 + 20) &= v48;
            if ( v42 )
              sub_140418E4C(v46);
          }
        }
      }
      __writecr8(v44);
    }
    if ( v33 )
      return 0;
  }
  if ( v21 )
    return 0;
  if ( !v26 )
    goto LABEL_30;
  return v7 != 0;
}
