/*
 * XREFs of sub_1402F8420 @ 0x1402F8420
 * Callers:
 *     sub_140255720 @ 0x140255720 (sub_140255720.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     sub_1403C6970 @ 0x1403C6970 (sub_1403C6970.c)
 * Callees:
 *     sub_140240E44 @ 0x140240E44 (sub_140240E44.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402D5484 @ 0x1402D5484 (sub_1402D5484.c)
 *     sub_1402D56F4 @ 0x1402D56F4 (sub_1402D56F4.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1406DFEB4 @ 0x1406DFEB4 (sub_1406DFEB4.c)
 */

__int64 __fastcall sub_1402F8420(char *Object, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
  PKLOCK_QUEUE_HANDLE v4; // rbx
  unsigned int v6; // r14d
  volatile __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 Next; // rax
  struct _KPRCB *v13; // rcx
  __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int *v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int64 v22; // rbp
  int v23; // ebp
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // ecx
  char v28; // bp
  unsigned __int64 v29; // rbx
  int v30; // eax
  struct _KPRCB *v31; // r9
  __int64 v32; // r8
  bool v33; // zf
  int v34; // ecx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r9
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  int v41; // eax
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // r8
  __int128 v45; // [rsp+20h] [rbp-38h] BYREF
  __int64 v46; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = LockHandle;
  v45 = 0LL;
  v46 = 0LL;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v4 = (PKLOCK_QUEUE_HANDLE)&v45;
    *((_QWORD *)&v45 + 1) = v7;
    *(_QWORD *)&v45 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LOBYTE(v46) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v30 = *(_DWORD *)(v10 + 24);
        *(_DWORD *)(v10 + 24) = v30 + 1;
        if ( v30 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A10C(&v45, v7);
    }
    else if ( _InterlockedExchange64(v7, (__int64)&v45) )
    {
      sub_140311C70(&v45);
    }
  }
  if ( a3 )
  {
    v26 = *((_DWORD *)Object + 102);
    if ( (((unsigned __int8)v26 | (unsigned __int8)((v26 | (v26 >> 6)) >> 2)) & 0x30) == 0 && (v26 & 0x100) == 0 )
      goto LABEL_46;
  }
  if ( *((_DWORD *)Object + 100)
    || *((_DWORD *)Object + 96) >= *((_DWORD *)Object + 95)
    || (v11 = *((_QWORD *)Object + 2), *(_DWORD *)(v11 + 28))
    || (v18 = *(_QWORD *)(v11 + 8), !*(_DWORD *)(v18 + 4)) && !*(_DWORD *)(v11 + 24) )
  {
    *((_DWORD *)Object + 102) &= 0xFFFFCE0F;
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14056E6FC(v4, retaddr);
      goto LABEL_14;
    }
    _m_prefetchw(v4);
    Next = (__int64)v4->LockQueue.Next;
    if ( !v4->LockQueue.Next )
    {
      if ( v4 == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)v4->LockQueue.Lock,
                                        0LL,
                                        (signed __int64)v4) )
      {
LABEL_14:
        v13 = KeGetCurrentPrcb();
        v14 = *((_QWORD *)v13 + 4375);
        if ( v14 )
        {
          if ( *((_BYTE *)v13 + 32) <= 1u )
          {
            v43 = *(_DWORD *)(v14 + 24) - 1;
            *(_DWORD *)(v14 + 24) = v43;
            if ( !v43 )
              sub_140418E4C(v13);
          }
        }
        result = (unsigned int)dword_140D06B08;
        OldIrql = v4->OldIrql;
        if ( !dword_140D06B08 )
          goto LABEL_16;
        if ( (dword_140D06B08 & 1) == 0 )
          goto LABEL_16;
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result > 0xFu )
          goto LABEL_16;
        if ( (unsigned __int8)OldIrql > 0xFu )
          goto LABEL_16;
        if ( (unsigned __int8)result < 2u )
          goto LABEL_16;
        v31 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v44 = *((_QWORD *)v31 + 4375);
        v33 = ((unsigned int)result & *(_DWORD *)(v44 + 20)) == 0;
        *(_DWORD *)(v44 + 20) &= result;
        if ( !v33 )
          goto LABEL_16;
LABEL_104:
        result = sub_140418E4C(v31);
LABEL_16:
        __writecr8(OldIrql);
        return result;
      }
      Next = sub_140282C20((__int64 *)v4);
    }
    v4->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_14;
  }
  v19 = (unsigned int *)(Object + 408);
  if ( !a3 || (*v19 & 0xC0) != 0x80 )
  {
    if ( *(_DWORD *)(v18 + 40) >= (unsigned int)dword_140D06884 )
    {
      v25 = *v19;
      if ( (*v19 & 0xC0) == 0 )
      {
        v6 = 3;
        v24 = v25 & 0xFFFFFF3F | 0x40;
        *v19 = v24;
        goto LABEL_54;
      }
      if ( (v25 & 0xC0) == 0x40 && a3 )
      {
        v24 = v25 & 0xFFFFFF3F | 0x80;
        *v19 = v24;
        goto LABEL_54;
      }
      goto LABEL_46;
    }
    if ( !a3 )
      goto LABEL_26;
  }
  if ( (*((_DWORD *)Object + 102) & 0x30) != 0x20 )
  {
LABEL_26:
    if ( sub_140240E44((__int64)Object) )
    {
      v19 = (unsigned int *)(Object + 408);
      v27 = *((_DWORD *)Object + 102);
      if ( (v27 & 0x30) == 0 )
      {
        v6 = 3;
        v24 = v27 & 0xFFFFFFCF | 0x10;
        *v19 = v24;
        goto LABEL_54;
      }
      if ( (v27 & 0x30) == 0x10 && a3 )
      {
        v24 = v27 & 0xFFFFFFCF | 0x20;
        *v19 = v24;
        goto LABEL_54;
      }
LABEL_46:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
      result = (unsigned int)dword_140D06B08;
      OldIrql = v4->OldIrql;
      if ( !dword_140D06B08 )
        goto LABEL_16;
      if ( (dword_140D06B08 & 1) == 0 )
        goto LABEL_16;
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result > 0xFu )
        goto LABEL_16;
      if ( (unsigned __int8)OldIrql > 0xFu )
        goto LABEL_16;
      if ( (unsigned __int8)result < 2u )
        goto LABEL_16;
      v31 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
      v32 = *((_QWORD *)v31 + 4375);
      v33 = ((unsigned int)result & *(_DWORD *)(v32 + 20)) == 0;
      *(_DWORD *)(v32 + 20) &= result;
      if ( !v33 )
        goto LABEL_16;
      goto LABEL_104;
    }
    if ( !a3 )
      goto LABEL_27;
  }
  if ( (*((_DWORD *)Object + 102) & 0x3000) != 0x2000 )
  {
LABEL_27:
    v20 = *((_DWORD *)Object + 99);
    if ( v20 && *((_DWORD *)Object + 96) > v20 )
    {
      v19 = (unsigned int *)(Object + 408);
      v34 = *((_DWORD *)Object + 102);
      if ( (v34 & 0x3000) == 0 )
      {
        v6 = 3;
        v24 = v34 & 0xFFFFCFFF | 0x1000;
        *v19 = v24;
        goto LABEL_54;
      }
      if ( (*((_DWORD *)Object + 102) & 0x3000) == 0x1000 && a3 )
      {
        v24 = v34 & 0xFFFFCFFF | 0x2000;
        *v19 = v24;
        goto LABEL_54;
      }
      goto LABEL_46;
    }
  }
  v19 = (unsigned int *)(Object + 408);
  v21 = *((_DWORD *)Object + 102);
  if ( (v21 & 0x200) != 0 )
  {
    sub_1402D56F4((__int64 *)Object);
    v21 = *v19;
  }
  ++*((_DWORD *)Object + 100);
  *v19 = v21 & 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
  v22 = v4->OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = *((_QWORD *)v36 + 4375);
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
        v33 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
        *(_DWORD *)(v37 + 20) &= v38;
        if ( v33 )
          sub_140418E4C(v36);
      }
    }
  }
  __writecr8(v22);
  result = sub_1402D5484((__int64)Object);
  v23 = result;
  if ( (int)result < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v4);
    --*((_DWORD *)Object + 100);
    if ( v23 != -1073741558 && v23 != -1073741814 && v23 != -1073741582 && v23 != -1073741823 )
    {
      *v19 |= 0x100u;
      v6 = 1;
      v24 = *v19;
LABEL_54:
      v28 = 0;
      if ( (v24 & 8) == 0 )
      {
        v28 = 1;
        *v19 = v24 | 8;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
      v29 = v4->OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
            v42 = *((_QWORD *)v40 + 4375);
            v33 = (v41 & *(_DWORD *)(v42 + 20)) == 0;
            *(_DWORD *)(v42 + 20) &= v41;
            if ( v33 )
              sub_140418E4C(v40);
          }
        }
      }
      __writecr8(v29);
      if ( v28 )
      {
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        ExpInterlockedPushEntrySList(&stru_140CF5F40, (PSLIST_ENTRY)Object);
      }
      return sub_1406DFEB4(v6);
    }
    goto LABEL_46;
  }
  return result;
}
