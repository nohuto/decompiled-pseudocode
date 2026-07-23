/*
 * XREFs of sub_1407A6CE4 @ 0x1407A6CE4
 * Callers:
 *     sub_140666C64 @ 0x140666C64 (sub_140666C64.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_1407A6FD8 @ 0x1407A6FD8 (sub_1407A6FD8.c)
 *     sub_1407A7064 @ 0x1407A7064 (sub_1407A7064.c)
 *     sub_1407A7098 @ 0x1407A7098 (sub_1407A7098.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AB750 @ 0x1407AB750 (sub_1407AB750.c)
 */

__int64 __fastcall sub_1407A6CE4(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r15
  volatile signed __int32 **v5; // r14
  signed __int64 *v6; // rbx
  ULONG_PTR v7; // rcx
  volatile signed __int32 *v8; // rbp
  volatile signed __int32 *v9; // r13
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v13; // cx
  int v14; // eax
  __int16 v15; // cx
  unsigned int v16; // eax
  __int64 v17; // rdx
  signed __int32 v18[22]; // [rsp+0h] [rbp-58h] BYREF
  int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v19 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v2 + 24);
  v20 = v3;
  if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 1 )
  {
    v5 = *(volatile signed __int32 ***)(v3 + 16);
    v6 = (signed __int64 *)(v5 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
    v8 = *v5;
    v9 = *v5;
    if ( v3 == v4 )
      goto LABEL_7;
  }
  else
  {
    v5 = *(volatile signed __int32 ***)(v4 + 16);
    v6 = (signed __int64 *)(v5 - 2);
    v7 = (ULONG_PTR)(v5 - 2);
    if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 2 )
    {
      ExAcquirePushLockSharedEx(v7, 0LL);
      v8 = v5[2];
      v9 = v8;
      goto LABEL_7;
    }
    ExAcquirePushLockSharedEx(v7, 0LL);
    v8 = *v5;
  }
  v9 = v5[1];
LABEL_7:
  if ( (*(_DWORD *)(v3 + 416) & 0x20) != 0 && !_bittest((const signed __int32 *)(v3 + 256), 0xCu)
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && !_bittest((const signed __int32 *)(v4 + 256), 0xCu) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    v10 = -1073741769;
LABEL_22:
    sub_140662E08(v20, v2, 0x10000);
    return (unsigned int)v10;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *((_QWORD *)v8 + 34) )
  {
    v10 = sub_1407A7098((PVOID)v8, (PVOID)v9);
    if ( v10 < 0 )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v6);
      sub_1402AFC00((ULONG_PTR)v6);
      goto LABEL_22;
    }
    *(_QWORD *)(v2 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v4 + 352, 0LL);
      *(_DWORD *)(v4 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v4 + 352);
      sub_1402AFC00(v4 + 352);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v2 + 242) = *(_WORD *)(a1 + 52);
    *(_WORD *)(v2 + 240) = *(_WORD *)(a1 + 52) - 40;
    v13 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v2 + 244) = v13;
    *(_WORD *)(v2 + 246) = *(_WORD *)(a1 + 56);
    v14 = *(_DWORD *)(v2 + 40);
    *(_OWORD *)(v2 + 248) = *(_OWORD *)((char *)CurrentThread + 1224);
    if ( (v19 & 0x10000) != 0 )
    {
      v15 = v13 & 0xDFFF;
      v16 = v14 | 0x200;
    }
    else
    {
      v15 = v13 | 0x2000;
      v16 = v14 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v2 + 40) = v16;
    *(_WORD *)(v2 + 244) = v15;
    *(_DWORD *)(v2 + 40) |= 0x8000u;
    _InterlockedOr(v18, 0);
    sub_1407A7064(v2);
    sub_1407AB750(v2, v20);
    *(_DWORD *)(v2 + 44) = _InterlockedIncrement(v9 + 100);
    *(_QWORD *)(v2 + 120) = *((_QWORD *)v9 + 7);
    ObfDereferenceObject((PVOID)v9);
    if ( *(_QWORD *)(v2 + 16) )
      sub_1407A6FD8(v2, v17);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 88), 0LL);
    if ( (v19 & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) &= ~0x100u;
      *(_WORD *)(v2 - 30) += 2;
      *(_QWORD *)(v2 + 32) = CurrentThread;
      _InterlockedExchange64((volatile __int64 *)CurrentThread + 175, v2);
    }
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 16) = v5;
    if ( (*(_BYTE *)(v2 + 160) & 1) != 0 )
      *(_DWORD *)(a1 + 48) |= 8u;
    sub_1407AACC0(a1);
    return 0LL;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    sub_1407A7628(v2);
    return 3221225507LL;
  }
}
