/*
 * XREFs of sub_140201AC4 @ 0x140201AC4
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140248390 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140201AC4(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  char v8; // bl
  struct _KTHREAD *v9; // rsi
  unsigned int v10; // ecx
  char *v11; // rbx
  __int64 v12; // r8
  int v14; // r8d
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v22; // ecx
  char *v23; // rbx
  __int64 v24; // r8
  int v25; // r8d
  unsigned __int64 v26; // rsi
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  struct _KTHREAD *v31; // rsi
  unsigned int v32; // ecx
  char *v33; // rbx
  __int64 v34; // r8
  int v35; // r8d
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  __int64 v39; // r9
  int v40; // eax
  struct _KTHREAD *v41; // rsi
  unsigned int v42; // ecx
  char *v43; // rbx
  __int64 v44; // r8
  int v45; // r8d
  unsigned __int64 v46; // rsi
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  __int64 v49; // r9
  int v50; // eax
  unsigned int v51; // ecx
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  __int64 v54; // r9
  int v55; // eax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49B08, 0LL);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( a1 && a1[5] != a2[5] )
  {
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
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C49B08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C49B08);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C49B08 - qword_140C50630 >= 0x8000000000LL )
      v22 = -1;
    else
      v22 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v23 = (char *)CurrentThread + 1696;
    v24 = 0LL;
    while ( (*(_QWORD *)v23 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C49B08 & 0x7FFFFFFFFFFFFFFCLL)
         || !v23[18]
         || (*(_DWORD *)v23 & 1) != 0
         || *((_DWORD *)v23 + 2) != v22 )
    {
      v24 = (unsigned int)(v24 + 1);
      v23 += 96;
      if ( (unsigned int)v24 >= 6 )
        goto LABEL_49;
    }
    v23[18] = 0;
    if ( v23 )
    {
      if ( *(__int64 *)v23 < 0 )
      {
        *v23 |= 2u;
        _enable();
        sub_14034EE30(v23, 0x7FFFFFFFFFFFFFFCLL, v24);
        _disable();
      }
      v25 = *((_DWORD *)v23 + 22);
      *((_DWORD *)v23 + 22) = 0;
      v23[17] = 0;
      *(_QWORD *)v23 = 0LL;
      *((_BYTE *)CurrentThread + 792) |= 1 << v23[16];
      _enable();
      if ( v25 )
        sub_14022B568((ULONG_PTR)CurrentThread);
      return 3221225712LL;
    }
LABEL_49:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C49B08, v22, 0LL);
    _enable();
    return 3221225712LL;
  }
  v4 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v4 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v26 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = *((_QWORD *)v28 + 4375);
          v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v20 )
            sub_140418E4C(v28);
        }
      }
    }
    __writecr8(v26);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C49B08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C49B08);
    v31 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C49B08 - qword_140C50630 >= 0x8000000000LL )
      v32 = -1;
    else
      v32 = sub_140287F30(*((_QWORD *)v31 + 23));
    _disable();
    v33 = (char *)v31 + 1696;
    v34 = 0LL;
    while ( (*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C49B08 & 0x7FFFFFFFFFFFFFFCLL)
         || !v33[18]
         || (*(_DWORD *)v33 & 1) != 0
         || *((_DWORD *)v33 + 2) != v32 )
    {
      v34 = (unsigned int)(v34 + 1);
      v33 += 96;
      if ( (unsigned int)v34 >= 6 )
        goto LABEL_71;
    }
    v33[18] = 0;
    if ( v33 )
    {
LABEL_75:
      if ( *(__int64 *)v33 < 0 )
      {
        *v33 |= 2u;
        _enable();
        sub_14034EE30(v33, 0x7FFFFFFFFFFFFFFCLL, v34);
        _disable();
      }
      v35 = *((_DWORD *)v33 + 22);
      *((_DWORD *)v33 + 22) = 0;
      v33[17] = 0;
      *(_QWORD *)v33 = 0LL;
      *((_BYTE *)v31 + 792) |= 1 << v33[16];
      _enable();
      if ( v35 )
        sub_14022B568((ULONG_PTR)v31);
      return 0LL;
    }
LABEL_71:
    if ( (*((_DWORD *)v31 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&qword_140C49B08, v32, 0LL);
    goto LABEL_129;
  }
  if ( (*(_DWORD *)(v4 + 152) & 0x100000) == 0 )
  {
    v5 = (_QWORD *)(v4 + 96);
    v6 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !a1 || v6 == a1 )
    {
      sub_140276A48(v5, a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v7 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v52 = KeGetCurrentIrql();
          if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
          {
            v53 = KeGetCurrentPrcb();
            v54 = *((_QWORD *)v53 + 4375);
            v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v20 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
            *(_DWORD *)(v54 + 20) &= v55;
            if ( v20 )
              sub_140418E4C(v53);
          }
        }
      }
      __writecr8(v7);
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C49B08, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock(&qword_140C49B08);
      v9 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C49B08 - qword_140C50630 >= 0x8000000000LL )
        v10 = -1;
      else
        v10 = sub_140287F30(*((_QWORD *)v9 + 23));
      _disable();
      v11 = (char *)v9 + 1696;
      v12 = 0LL;
      while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C49B08 & 0x7FFFFFFFFFFFFFFCLL)
           || !v11[18]
           || (*(_DWORD *)v11 & 1) != 0
           || *((_DWORD *)v11 + 2) != v10 )
      {
        v12 = (unsigned int)(v12 + 1);
        v11 += 96;
        if ( (unsigned int)v12 >= 6 )
          goto LABEL_15;
      }
      v11[18] = 0;
      if ( !v11 )
      {
LABEL_15:
        if ( (*((_DWORD *)v9 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_140C49B08, v10, 0LL);
        _enable();
        goto LABEL_17;
      }
      if ( *(__int64 *)v11 < 0 )
      {
        *v11 |= 2u;
        _enable();
        sub_14034EE30(v11, 0x7FFFFFFFFFFFFFFCLL, v12);
        _disable();
      }
      v14 = *((_DWORD *)v11 + 22);
      *((_DWORD *)v11 + 22) = 0;
      v11[17] = 0;
      *(_QWORD *)v11 = 0LL;
      *((_BYTE *)v9 + 792) |= 1 << v11[16];
      _enable();
      if ( v14 )
        sub_14022B568((ULONG_PTR)v9);
LABEL_17:
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      ObDereferenceObjectDeferDeleteWithTag(v6, 0x746C6644u);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v46 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && LockHandle.OldIrql <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = *((_QWORD *)v48 + 4375);
          v50 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
          *(_DWORD *)(v49 + 20) &= v50;
          if ( v20 )
            sub_140418E4C(v48);
        }
      }
    }
    __writecr8(v46);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C49B08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C49B08);
    v31 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C49B08 - qword_140C50630 >= 0x8000000000LL )
      v51 = -1;
    else
      v51 = sub_140287F30(*((_QWORD *)v31 + 23));
    _disable();
    v33 = (char *)v31 + 1696;
    v34 = 0LL;
    while ( (*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C49B08 & 0x7FFFFFFFFFFFFFFCLL)
         || !v33[18]
         || (*(_DWORD *)v33 & 1) != 0
         || *((_DWORD *)v33 + 2) != v51 )
    {
      v34 = (unsigned int)(v34 + 1);
      v33 += 96;
      if ( (unsigned int)v34 >= 6 )
        goto LABEL_127;
    }
    v33[18] = 0;
    if ( v33 )
      goto LABEL_75;
LABEL_127:
    if ( (*((_DWORD *)v31 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&qword_140C49B08, v51, 0LL);
LABEL_129:
    _enable();
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v36 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && LockHandle.OldIrql <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = *((_QWORD *)v38 + 4375);
        v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
        *(_DWORD *)(v39 + 20) &= v40;
        if ( v20 )
          sub_140418E4C(v38);
      }
    }
  }
  __writecr8(v36);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C49B08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C49B08);
  v41 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C49B08 - qword_140C50630 >= 0x8000000000LL )
    v42 = -1;
  else
    v42 = sub_140287F30(*((_QWORD *)v41 + 23));
  _disable();
  v43 = (char *)v41 + 1696;
  v44 = 0LL;
  while ( (*(_QWORD *)v43 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C49B08 & 0x7FFFFFFFFFFFFFFCLL)
       || !v43[18]
       || (*(_DWORD *)v43 & 1) != 0
       || *((_DWORD *)v43 + 2) != v42 )
  {
    v44 = (unsigned int)(v44 + 1);
    v43 += 96;
    if ( (unsigned int)v44 >= 6 )
      goto LABEL_102;
  }
  v43[18] = 0;
  if ( v43 )
  {
    if ( *(__int64 *)v43 < 0 )
    {
      *v43 |= 2u;
      _enable();
      sub_14034EE30(v43, 0x7FFFFFFFFFFFFFFCLL, v44);
      _disable();
    }
    v45 = *((_DWORD *)v43 + 22);
    *((_DWORD *)v43 + 22) = 0;
    v43[17] = 0;
    *(_QWORD *)v43 = 0LL;
    *((_BYTE *)v41 + 792) |= 1 << v43[16];
    _enable();
    if ( v45 )
      sub_14022B568((ULONG_PTR)v41);
    return 3221225659LL;
  }
LABEL_102:
  if ( (*((_DWORD *)v41 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v41, (ULONG_PTR)&qword_140C49B08, v42, 0LL);
  _enable();
  return 3221225659LL;
}
