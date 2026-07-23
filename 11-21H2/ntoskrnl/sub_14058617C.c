/*
 * XREFs of sub_14058617C @ 0x14058617C
 * Callers:
 *     sub_14096A988 @ 0x14096A988 (sub_14096A988.c)
 *     sub_140AF6988 @ 0x140AF6988 (sub_140AF6988.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 *     sub_14058938C @ 0x14058938C (sub_14058938C.c)
 */

__int64 __fastcall sub_14058617C(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // r13
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  __int64 v9; // r11
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // r15
  ULONG64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 *v20; // rdi
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // rdx
  bool v23; // zf
  bool i; // zf
  unsigned __int64 v25; // rbx
  ULONG_PTR v26; // r13
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  unsigned __int64 v31; // r15
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // edi
  ULONG_PTR v37; // r15
  ULONG_PTR v38; // rdx
  __int64 v39; // rsi
  bool v40; // zf
  ULONG_PTR v41; // r13
  __int64 v42; // rcx
  __int64 v43; // r15
  _QWORD *v44; // r12
  unsigned __int8 v45; // al
  KIRQL v46; // r15
  struct _KPRCB *v47; // r10
  __int64 v48; // r9
  int v49; // eax
  unsigned __int64 v50; // [rsp+20h] [rbp-78h]
  __int64 v51; // [rsp+20h] [rbp-78h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  ULONG_PTR v53; // [rsp+30h] [rbp-68h]
  ULONG_PTR v54; // [rsp+30h] [rbp-68h]
  ULONG_PTR SpinLock; // [rsp+38h] [rbp-60h]
  volatile LONG *SpinLocka; // [rsp+38h] [rbp-60h]
  PEX_SPIN_LOCK SpinLockb; // [rsp+38h] [rbp-60h]
  ULONG_PTR v58; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  KIRQL v63; // [rsp+B8h] [rbp+20h]
  KIRQL v64; // [rsp+B8h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  if ( !a4 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  }
  v7 = 0;
  if ( *(_DWORD *)qword_140D06950 )
  {
    v8 = *(_QWORD *)(v6 + 32);
    do
    {
      v9 = *((_QWORD *)qword_140D06950 + 2 * v7 + 3);
      v10 = *((_QWORD *)qword_140D06950 + 2 * v7 + 2);
      if ( v9 )
      {
        if ( v8 >= v10 )
        {
          if ( v8 < v9 + v10 )
            break;
        }
        else if ( v8 + *(_QWORD *)(v6 + 40) > v10 )
        {
          break;
        }
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)qword_140D06950 );
  }
  if ( !a4 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v23 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v23 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  v11 = *(_QWORD *)(v6 + 40);
  SpinLock = *(_QWORD *)(v6 + 32);
  v12 = (SpinLock >> 18) & 0x3FFFFF;
  KeAcquireInStackQueuedSpinLock(&qword_140C52980, &LockHandle);
  v13 = (v11 >> 18) & 0x3FFFFF;
  if ( v12 >= stru_140C52958.SizeOfBitMap )
    goto LABEL_21;
  if ( v13 > 1 )
  {
    if ( stru_140C52958.SizeOfBitMap - v12 < v13 )
      goto LABEL_21;
    v20 = &stru_140C52958.Buffer[v12 >> 6];
    v21 = *v20;
    v22 = &stru_140C52958.Buffer[(v13 + v12 - 1) >> 6];
    if ( v20 != v22 )
    {
      for ( i = ((-1LL << (SpinLock >> 18)) & v21) == 0; i; i = *v20 == 0 )
      {
        if ( ++v20 == v22 )
        {
          v23 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)(v11 >> 18) + (unsigned __int8)(SpinLock >> 18) - 1)) & *v20) == 0;
          goto LABEL_37;
        }
      }
      goto LABEL_21;
    }
    v23 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)(v11 >> 18)) << (SpinLock >> 18)) & v21) == 0;
LABEL_37:
    if ( !v23 )
    {
LABEL_21:
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
            v17 = *((_QWORD *)CurrentPrcb + 4375);
            v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v23 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
            *(_DWORD *)(v17 + 20) &= v18;
            if ( v23 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 3221225496LL;
    }
  }
  else if ( v13 != 1 || _bittest64((const signed __int64 *)stru_140C52958.Buffer, v12) )
  {
    goto LABEL_21;
  }
  v25 = 0x802000000C00000LL;
  if ( v11 )
  {
    v26 = SpinLock;
    do
    {
      v53 = sub_1403B7A10(v26, v11);
      v50 = v53 >> 18;
      SpinLocka = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 24512LL * *((unsigned int *)sub_1402C1550(v26) + 2) + 22848);
      v63 = ExAcquireSpinLockExclusive(SpinLocka);
      RtlSetBitsEx((__int64)&stru_140C52958, v12 & 0x3FFFFF, v53 >> 18);
      if ( v53 >> 18 )
        memset64((void *)(qword_140C52968 + 8 * (v12 & 0x3FFFFF)), 0x802000000C00000uLL, v50);
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && v63 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = *((_QWORD *)v28 + 4375);
            v30 = ~(unsigned __int16)(-1LL << (v63 + 1));
            v23 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v23 )
              sub_140418E4C((__int64)v28);
          }
        }
      }
      __writecr8(v63);
      v26 += v53;
      v12 ^= ((unsigned int)v12 ^ ((_DWORD)v12 + (_DWORD)v50)) & 0x3FFFFF;
      v11 -= v53;
    }
    while ( v11 );
    v6 = a2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v31 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = *((_QWORD *)v33 + 4375);
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v23 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
        *(_DWORD *)(v34 + 20) &= v35;
        if ( v23 )
          sub_140418E4C((__int64)v33);
      }
    }
  }
  __writecr8(v31);
  if ( a3 == 3 )
  {
    v25 = ((unsigned __int64)(*(_WORD *)a1 & 0x7FF) << 49) | 0xC00000;
    v36 = 0;
  }
  else
  {
    v36 = 0;
    if ( a3 == 1 )
      v36 = 2;
  }
  v37 = *(_QWORD *)(v6 + 32);
  v38 = *(_QWORD *)(v6 + 40);
  v39 = (v12 ^ (v37 >> 18)) & 0x3FFFFF ^ v12;
  v40 = v38 == 0;
  v51 = qword_140C52968 + 8 * (v39 & 0x3FFFFF);
  while ( 1 )
  {
    SpinLockb = (PEX_SPIN_LOCK)v38;
    v54 = v37;
    if ( v40 )
      break;
    v58 = sub_1403B7A10(v37, v38);
    v41 = v58 >> 18;
    v42 = *((unsigned int *)sub_1402C1550(v37) + 2);
    if ( a3 == 3 )
    {
      v43 = *(_QWORD *)(a1 + 16) + 24512 * v42;
      v52 = v43;
      v64 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v43 + 22848));
    }
    else
    {
      v43 = 0LL;
      v64 = 17;
      v52 = 0LL;
    }
    if ( v41 )
    {
      v44 = (_QWORD *)v51;
      do
      {
        if ( a3 == 3 )
        {
          *v44 = v25;
          sub_14058938C(a1, v39, 1LL);
        }
        else
        {
          sub_1405875A0(a1, v39, v36);
        }
        ++v44;
        v39 = ((unsigned int)v39 ^ ((_DWORD)v39 + 1)) & 0x3FFFFF ^ (unsigned __int64)v39;
        --v41;
      }
      while ( v41 );
      v43 = v52;
      v51 = (__int64)v44;
    }
    if ( v43 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v43 + 22848));
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v45 = KeGetCurrentIrql(), v45 <= 0xFu) )
      {
        v46 = v64;
        if ( v64 <= 0xFu && v45 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = *((_QWORD *)v47 + 4375);
          v49 = ~(unsigned __int16)(-1LL << (v64 + 1));
          v23 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
          *(_DWORD *)(v48 + 20) &= v49;
          if ( v23 )
            sub_140418E4C((__int64)v47);
        }
      }
      else
      {
        v46 = v64;
      }
      __writecr8(v46);
    }
    v37 = v58 + v54;
    v38 = (ULONG_PTR)SpinLockb - v58;
    v40 = SpinLockb == (PEX_SPIN_LOCK)v58;
  }
  return 0LL;
}
