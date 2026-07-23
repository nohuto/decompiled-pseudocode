/*
 * XREFs of sub_1405D5E24 @ 0x1405D5E24
 * Callers:
 *     sub_1405CC1E0 @ 0x1405CC1E0 (sub_1405CC1E0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_1403B92D0 @ 0x1403B92D0 (sub_1403B92D0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 */

char __fastcall sub_1405D5E24(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r12
  struct _KTHREAD *v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // ecx
  __int64 v6; // rdi
  unsigned int v7; // edx
  int v8; // r8d
  struct _KTHREAD *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  int v12; // r8d
  struct _KTHREAD *v14; // rsi
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  __int64 v17; // rdi
  unsigned int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rsi
  KIRQL v23; // al
  int v24; // r12d
  unsigned __int64 v25; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  struct _KTHREAD *v31; // rdi
  unsigned int v32; // ecx
  __int64 v33; // rbx
  int v34; // r8d

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C20B30, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C20A30, 0LL);
  if ( qword_140D05108 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C20A30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C20A30);
    v3 = KeGetCurrentThread();
    v4 = -1;
    if ( (unsigned __int64)&qword_140C20A30 - qword_140C50630 >= 0x8000000000LL )
      v5 = -1;
    else
      v5 = sub_140287F30(*((_QWORD *)v3 + 23));
    _disable();
    v6 = (__int64)v3 + 1696;
    v7 = 0;
    while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C20A30 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v6 + 18)
         || (*(_DWORD *)v6 & 1) != 0
         || *(_DWORD *)(v6 + 8) != v5 )
    {
      ++v7;
      v6 += 96LL;
      if ( v7 >= 6 )
        goto LABEL_13;
    }
    *(_BYTE *)(v6 + 18) = 0;
    if ( !v6 )
    {
LABEL_13:
      if ( (*((_DWORD *)v3 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&qword_140C20A30, v5, 0LL);
      _enable();
      goto LABEL_21;
    }
    if ( *(__int64 *)v6 < 0 )
    {
      *(_BYTE *)v6 |= 2u;
      _enable();
      sub_14034EE30(v6);
      _disable();
    }
    v8 = *(_DWORD *)(v6 + 88);
    *(_DWORD *)(v6 + 88) = 0;
    *(_BYTE *)(v6 + 17) = 0;
    *(_QWORD *)v6 = 0LL;
    *((_BYTE *)v3 + 792) |= 1 << *(_BYTE *)(v6 + 16);
    _enable();
    if ( v8 )
      sub_14022B568((ULONG_PTR)v3, (__int64)&qword_140C20A30, v8);
LABEL_21:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C20B30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C20B30);
    v9 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C20B30 - qword_140C50630 < 0x8000000000LL )
      v4 = sub_140287F30(*((_QWORD *)v9 + 23));
    _disable();
    v10 = (__int64)v9 + 1696;
    v11 = 0;
    while ( (*(_QWORD *)v10 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C20B30 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v10 + 18)
         || (*(_DWORD *)v10 & 1) != 0
         || *(_DWORD *)(v10 + 8) != v4 )
    {
      ++v11;
      v10 += 96LL;
      if ( v11 >= 6 )
        goto LABEL_31;
    }
    *(_BYTE *)(v10 + 18) = 0;
    if ( !v10 )
    {
LABEL_31:
      if ( (*((_DWORD *)v9 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_140C20B30, v4, 0LL);
      _enable();
      return sub_1402F9540((__int64)KeGetCurrentThread());
    }
    if ( *(__int64 *)v10 < 0 )
    {
      *(_BYTE *)v10 |= 2u;
      _enable();
      sub_14034EE30(v10);
      _disable();
    }
    v12 = *(_DWORD *)(v10 + 88);
    *(_DWORD *)(v10 + 88) = 0;
    *(_BYTE *)(v10 + 17) = 0;
    *(_QWORD *)v10 = 0LL;
    *((_BYTE *)v9 + 792) |= 1 << *(_BYTE *)(v10 + 16);
    _enable();
    if ( v12 )
      sub_14022B568((ULONG_PTR)v9, (__int64)&qword_140C20B30, v12);
    return sub_1402F9540((__int64)KeGetCurrentThread());
  }
  else
  {
    qword_140D05108 = qword_140D068A8 + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C20A30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C20A30);
    v14 = KeGetCurrentThread();
    v15 = -1;
    if ( (unsigned __int64)&qword_140C20A30 - qword_140C50630 >= 0x8000000000LL )
      v16 = -1;
    else
      v16 = sub_140287F30(*((_QWORD *)v14 + 23));
    _disable();
    v17 = (__int64)v14 + 1696;
    v18 = 0;
    while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C20A30 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v17 + 18)
         || (*(_DWORD *)v17 & 1) != 0
         || *(_DWORD *)(v17 + 8) != v16 )
    {
      ++v18;
      v17 += 96LL;
      if ( v18 >= 6 )
        goto LABEL_51;
    }
    *(_BYTE *)(v17 + 18) = 0;
    if ( !v17 )
    {
LABEL_51:
      if ( (*((_DWORD *)v14 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&qword_140C20A30, v16, 0LL);
      _enable();
      goto LABEL_59;
    }
    if ( *(__int64 *)v17 < 0 )
    {
      *(_BYTE *)v17 |= 2u;
      _enable();
      sub_14034EE30(v17);
      _disable();
    }
    v19 = *(_DWORD *)(v17 + 88);
    *(_DWORD *)(v17 + 88) = 0;
    *(_BYTE *)(v17 + 17) = 0;
    *(_QWORD *)v17 = 0LL;
    *((_BYTE *)v14 + 792) |= 1 << *(_BYTE *)(v17 + 16);
    _enable();
    if ( v19 )
      sub_14022B568((ULONG_PTR)v14, (__int64)&qword_140C20A30, v19);
LABEL_59:
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C20A30, 0LL);
    if ( (_DWORD)v2 )
    {
      v20 = 0LL;
      v21 = v2;
      do
      {
        v20 += 448LL;
        *(_DWORD *)(v20 + qword_140D05108 - 64) = 1073741825;
        --v21;
      }
      while ( v21 );
    }
    v22 = qword_140C20A40;
    if ( (__int64 *)qword_140C20A40 != &qword_140C20A40 )
    {
      do
      {
        v23 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v22 + 64));
        v24 = *(_DWORD *)(v22 + 172);
        v25 = v23;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v22 + 64));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v28 = *((_QWORD *)CurrentPrcb + 4375);
              v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
              v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
              *(_DWORD *)(v28 + 20) &= v29;
              if ( v30 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v25);
        if ( v24 == 1 )
          sub_1405D5704(v22, a1);
        v22 = *(_QWORD *)v22;
      }
      while ( (__int64 *)v22 != &qword_140C20A40 );
      LOBYTE(v2) = a1;
      v15 = -1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C20A30, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C20A30);
    sub_1402AFC00((ULONG_PTR)&qword_140C20A30);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C20B30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C20B30);
    v31 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C20B30 - qword_140C50630 < 0x8000000000LL )
      v15 = sub_140287F30(*((_QWORD *)v31 + 23));
    _disable();
    v32 = 0;
    v33 = (__int64)v31 + 1696;
    while ( (*(_QWORD *)v33 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C20B30 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v33 + 18)
         || (*(_DWORD *)v33 & 1) != 0
         || *(_DWORD *)(v33 + 8) != v15 )
    {
      ++v32;
      v33 += 96LL;
      if ( v32 >= 6 )
        goto LABEL_86;
    }
    *(_BYTE *)(v33 + 18) = 0;
    if ( !v33 )
    {
LABEL_86:
      if ( (*((_DWORD *)v31 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, (ULONG_PTR)&qword_140C20B30, v15, 0LL);
      _enable();
      goto LABEL_94;
    }
    if ( *(__int64 *)v33 < 0 )
    {
      *(_BYTE *)v33 |= 2u;
      _enable();
      sub_14034EE30(v33);
      _disable();
    }
    v34 = *(_DWORD *)(v33 + 88);
    *(_DWORD *)(v33 + 88) = 0;
    *(_BYTE *)(v33 + 17) = 0;
    *(_QWORD *)v33 = 0LL;
    *((_BYTE *)v31 + 792) |= 1 << *(_BYTE *)(v33 + 16);
    _enable();
    if ( v34 )
      sub_14022B568((ULONG_PTR)v31, (__int64)&qword_140C20B30, v34);
LABEL_94:
    sub_1402F9540((__int64)KeGetCurrentThread());
    return sub_1403B92D0((1 << v2) - 1, 0, 0, 0LL);
  }
}
