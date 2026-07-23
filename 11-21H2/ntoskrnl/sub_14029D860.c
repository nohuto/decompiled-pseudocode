/*
 * XREFs of sub_14029D860 @ 0x14029D860
 * Callers:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     sub_14028A258 @ 0x14028A258 (sub_14028A258.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 * Callees:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_1402767FC @ 0x1402767FC (sub_1402767FC.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14029DFF0 @ 0x14029DFF0 (sub_14029DFF0.c)
 *     sub_14029E120 @ 0x14029E120 (sub_14029E120.c)
 *     sub_14029E3DC @ 0x14029E3DC (sub_14029E3DC.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

__int64 __fastcall sub_14029D860(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // r9
  __int64 v5; // rax
  int v7; // r13d
  int v8; // r8d
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // r12
  signed __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rsi
  int i; // esi
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int8 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  _BYTE *v27; // r11
  volatile __int64 *v28; // rdi
  KIRQL v29; // r10
  struct _KPRCB *v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // rdx
  int v33; // edi
  __int64 v34; // rcx
  _DWORD *v35; // r8
  int v36; // eax
  __int64 v37; // rax
  __int64 Next; // rax
  struct _KPRCB *v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // rsi
  __int64 v42; // rcx
  bool v43; // zf
  ULONG_PTR v44; // rbx
  unsigned __int64 v45; // rdi
  unsigned __int32 v46; // eax
  __int64 v47; // r9
  struct _KTHREAD *v48; // r10
  __int64 v49; // rcx
  PSLIST_ENTRY v50; // rdi
  _SLIST_ENTRY *v51; // rax
  __int64 **v52; // rdx
  __int64 *v53; // rcx
  __int64 v54; // rax
  __int64 *v55; // rcx
  __int64 **v56; // rdx
  int v57; // eax
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  __int64 v61; // r9
  int v62; // eax
  int v63; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v67; // r9
  int v68; // eax
  unsigned __int64 v69; // rdi
  struct _KPRCB *v70; // r10
  __int64 v71; // r9
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // [rsp+38h] [rbp-11h]
  PSLIST_ENTRY ListEntry; // [rsp+40h] [rbp-9h] BYREF
  __int64 v78; // [rsp+48h] [rbp-1h]
  __int64 v79; // [rsp+50h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = a3;
  v5 = *a2;
  ListEntry = 0LL;
  v79 = a3;
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( ((v5 ^ (v5 + a3 - 1LL)) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xCDCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v8 = *(_DWORD *)(a1 + 152);
  result = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  *(_DWORD *)(a1 + 548) = result;
  v10 = v8 & 0x40000000;
  if ( v10 && v4 + *a2 <= *(_QWORD *)(a1 + 48) )
    return result;
  v11 = *a2 >> 12;
  v12 = (v4 + *a2 - 1) >> 12;
  if ( *(_QWORD *)(a1 + 32) / 4096LL <= v12 )
    KeBugCheckEx(0x34u, 0xD05uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v13 = *(_QWORD *)(a1 + 528);
  v76 = v13;
  if ( byte_140C54C58 == 1 )
    v14 = *(_QWORD *)(a1 + 592);
  else
    v14 = 0LL;
  v78 = v14;
  if ( v10 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
LABEL_54:
    v42 = *a2 + v79;
    if ( v42 > *(_QWORD *)(a1 + 48) )
    {
      v43 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
      *(_QWORD *)(a1 + 48) = v42;
      if ( !v43 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 704), &LockHandle);
        v63 = *(_DWORD *)(a1 + 152);
        if ( (v63 & 0x400) == 0 )
          *(_DWORD *)(a1 + 152) = v63 | 0x400;
        sub_1402767FC(a1);
        sub_140276758((_BYTE *)v13, v14, 0LL, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v67 = *((_QWORD *)CurrentPrcb + 4375);
              v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v43 = (v68 & *(_DWORD *)(v67 + 20)) == 0;
              *(_DWORD *)(v67 + 20) &= v68;
              if ( v43 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
      }
    }
    goto LABEL_56;
  }
LABEL_7:
  for ( i = 0; ; i = 1 )
  {
    if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
    {
      ++dword_140CE2354;
      result = (__int64)ExpInterlockedPopEntrySList(&stru_140CE2340);
      if ( !result )
      {
        ++dword_140CE2358;
        result = sub_14042A5E0((unsigned int)dword_140CE2364, (unsigned int)dword_140CE236C);
        if ( !result )
        {
          ++dword_140C49BE0;
          goto LABEL_125;
        }
      }
      ListEntry = (PSLIST_ENTRY)result;
    }
    CurrentThread = KeGetCurrentThread();
    v17 = (volatile signed __int32 *)(a1 + 280);
    v18 = 0LL;
    _disable();
    v19 = *((unsigned __int8 *)CurrentThread + 792);
    if ( *((_BYTE *)CurrentThread + 792) || (v19 = sub_14029F6A8(a1 + 280, CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v20, v19);
      *((_BYTE *)CurrentThread + 792) = v19 & ~(1 << v20);
      _enable();
      v18 = (__int64)CurrentThread + 96 * v20 + 1696;
      if ( (unsigned __int64)v17 - qword_140C50630 < 0x8000000000LL )
        v21 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v21 = -1;
      *(_DWORD *)(v18 + 8) = v21;
      *(_QWORD *)v18 = (unsigned __int64)v17 & 0x7FFFFFFFFFFFFFFCLL;
    }
    v22 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v17, 0) )
      sub_14029EF4C(a1 + 280, v18);
    if ( v18 )
      *(_BYTE *)(v18 + 18) = 1;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = v22;
    v23 = *(_QWORD *)(a1 + 160);
    if ( !v23 )
      break;
LABEL_20:
    if ( v11 == v12 && v11 == *(_QWORD *)(v23 + 40) )
      goto LABEL_53;
    if ( (unsigned __int64)v12 >= 0x300 && *(_WORD *)v23 != 761 )
    {
      v50 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v23 + 80) )
      {
        v51 = *(_SLIST_ENTRY **)(v23 + 88);
        *v50 = *v51;
        v50[1] = v51[1];
        v50[2] = v51[2];
        v50[3] = v51[3];
        v50[4] = v51[4];
        v50[5] = v51[5];
        memset(*(void **)(v23 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v23 + 88) = v50;
      v52 = *(__int64 ***)(v23 + 24);
      v53 = (__int64 *)(v23 + 96);
      ListEntry = 0LL;
      v54 = v23 + 16;
      if ( *v52 != (__int64 *)(v23 + 16) )
        goto LABEL_90;
      *v53 = v54;
      *(_QWORD *)(v23 + 104) = v52;
      *v52 = v53;
      *(_QWORD *)(v23 + 24) = v53;
      v55 = (__int64 *)(v23 + 144);
      *(_QWORD *)(v23 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v23 + 120) = -1;
      v56 = *(__int64 ***)(v23 + 24);
      if ( *v56 != (__int64 *)v54 )
LABEL_90:
        __fastfail(3u);
      *v55 = v54;
      *(_QWORD *)(v23 + 152) = v56;
      *v56 = v55;
      *(_QWORD *)(v23 + 24) = v55;
      *(_WORD *)v23 = 761;
      *(_QWORD *)(v23 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v23 + 168) = -1;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      goto LABEL_7;
    }
    result = sub_14029DFF0(v23, v11, &ListEntry);
    v25 = result;
    if ( !result )
      goto LABEL_124;
    v26 = *(_QWORD *)(result + 16);
    if ( v11 < v26 + *(unsigned int *)(result + 24) )
      *(_DWORD *)(result + 24) = v11 - v26;
    if ( v12 > v26 + *(unsigned int *)(result + 28) )
      *(_DWORD *)(result + 28) = v12 - v26;
    v27 = (_BYTE *)v76;
    LockHandle.LockQueue.Next = 0LL;
    v28 = (volatile __int64 *)(v76 + 704);
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(v76 + 704);
    v29 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v29 <= 0xFu )
    {
      v47 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v47 + 20) |= (-1 << (v29 + 1)) & 4;
    }
    LockHandle.OldIrql = v29;
    v30 = KeGetCurrentPrcb();
    v31 = *((_QWORD *)v30 + 4375);
    if ( v31 )
    {
      if ( *((_BYTE *)v30 + 32) <= 1u )
      {
        v57 = *(_DWORD *)(v31 + 24);
        *(_DWORD *)(v31 + 24) = v57 + 1;
        if ( v57 == -1 )
        {
          sub_140418E4C(v30);
          v27 = (_BYTE *)v76;
        }
      }
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A10C(&LockHandle, v28);
      goto LABEL_81;
    }
    if ( _InterlockedExchange64(v28, (__int64)&LockHandle) )
    {
      sub_140311C70(&LockHandle);
LABEL_81:
      v27 = (_BYTE *)v76;
    }
    if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
    {
      sub_140276758(v27, v78, 0LL, 0);
      sub_1402767FC(a1);
      *(_QWORD *)(v23 + 32) = v11;
    }
    v32 = (_DWORD *)(*(_QWORD *)(v25 + 40) + 4 * ((unsigned __int64)(unsigned int)(v11 - *(_DWORD *)(v25 + 16)) >> 5));
    v33 = 1 << (v11 & 0x1F);
    if ( v11 <= v12 )
    {
      v34 = v12 - v11 + 1;
      v11 = v12 + 1;
      do
      {
        v35 = v32;
        if ( (*v32 & v33) == 0 )
        {
          *v32 |= v33;
          ++v7;
        }
        v36 = 2 * v33;
        v33 = 1;
        if ( v36 )
          v33 = v36;
        ++v32;
        if ( v36 )
          v32 = v35;
        --v34;
      }
      while ( v34 );
    }
    if ( byte_140C54C58 == 1 )
      v37 = *(_QWORD *)(a1 + 592);
    else
      v37 = 0LL;
    sub_14029E120(a1, v23, v25, v7, *(_QWORD *)(a1 + 528), v37);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14056E6FC(&LockHandle, retaddr);
      goto LABEL_48;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( LockHandle.LockQueue.Next )
      goto LABEL_79;
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) != &LockHandle )
    {
      Next = sub_140282C20((__int64 *)&LockHandle);
LABEL_79:
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_48:
    v39 = KeGetCurrentPrcb();
    v40 = *((_QWORD *)v39 + 4375);
    if ( v40 )
    {
      if ( *((_BYTE *)v39 + 32) <= 1u )
      {
        v58 = *(_DWORD *)(v40 + 24) - 1;
        *(_DWORD *)(v40 + 24) = v58;
        if ( !v58 )
          sub_140418E4C(v39);
      }
    }
    v41 = LockHandle.OldIrql;
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
          v43 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
          *(_DWORD *)(v61 + 20) &= v62;
          if ( v43 )
            sub_140418E4C(v60);
        }
      }
    }
    __writecr8(v41);
    if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v7 )
    {
      v48 = a4;
      if ( !a4 )
      {
        v48 = KeGetCurrentThread();
        a4 = v48;
      }
      v49 = *(_QWORD *)(*((_QWORD *)v48 + 68) + 2232LL);
      if ( v49 )
      {
        if ( v7 << 12 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 8), (unsigned int)(v7 << 12));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 24), 1uLL);
      }
    }
    if ( v33 )
    {
      *(_QWORD *)(v23 + 40) = v12;
LABEL_53:
      v14 = v78;
      v13 = v76;
      goto LABEL_54;
    }
  }
  result = sub_14029E3DC();
  v23 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 160) = result;
    goto LABEL_20;
  }
LABEL_124:
  i = 1;
LABEL_125:
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v76 + 704), &LockHandle);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)dword_140D06B08;
    v69 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = *((_QWORD *)v70 + 4375);
          v24 = -1LL << (LockHandle.OldIrql + 1);
          result = ~(unsigned __int16)v24;
          v43 = ((unsigned int)result & *(_DWORD *)(v71 + 20)) == 0;
          *(_DWORD *)(v71 + 20) &= result;
          if ( v43 )
            result = sub_140418E4C(v70);
        }
      }
    }
    __writecr8(v69);
  }
  if ( i )
  {
LABEL_56:
    v44 = a1 + 280;
    v45 = *(unsigned __int8 *)(v44 + 48);
    *(_QWORD *)(v44 + 8) = 0LL;
    v46 = _InterlockedCompareExchange((volatile signed __int32 *)v44, 1, 0);
    if ( v46 )
      sub_140359548(v44, v46);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v72 = KeGetCurrentIrql();
        if ( v72 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v72 >= 2u )
        {
          v73 = KeGetCurrentPrcb();
          v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
          v75 = *((_QWORD *)v73 + 4375);
          v43 = (v74 & *(_DWORD *)(v75 + 20)) == 0;
          *(_DWORD *)(v75 + 20) &= v74;
          if ( v43 )
            sub_140418E4C(v73);
        }
      }
    }
    __writecr8(v45);
    result = sub_1402AFC00(v44);
  }
  if ( ListEntry )
  {
    ++dword_140CE235C;
    if ( LOWORD(stru_140CE2340.Alignment) >= (unsigned __int16)word_140CE2350 )
    {
      ++dword_140CE2360;
      return sub_14042A5E0(ListEntry, v24);
    }
    else
    {
      return (__int64)ExpInterlockedPushEntrySList(&stru_140CE2340, ListEntry);
    }
  }
  return result;
}
