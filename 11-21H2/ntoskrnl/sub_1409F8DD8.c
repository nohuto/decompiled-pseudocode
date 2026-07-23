/*
 * XREFs of sub_1409F8DD8 @ 0x1409F8DD8
 * Callers:
 *     sub_1409AD704 @ 0x1409AD704 (sub_1409AD704.c)
 * Callees:
 *     sub_1402624B8 @ 0x1402624B8 (sub_1402624B8.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409F8D78 @ 0x1409F8D78 (sub_1409F8D78.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409F8DD8(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int i; // eax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rsi
  char *PoolWithTag; // rax
  char *v11; // r14
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v13; // rbp

  v2 = a2;
  if ( a2 )
  {
    if ( a2 >= 0x80 )
    {
      if ( a2 > 0x20000 )
        v2 = 0x20000;
    }
    else
    {
      v2 = 128;
    }
    for ( i = v2 - 1; (i & v2) != 0; v2 = i + 1 )
      i = v2 | (v2 - 1);
  }
  else
  {
    v2 = 4096;
  }
  v5 = 160LL * v2 + 80;
  _InterlockedExchangeAdd(&dword_140D3CB30, v2);
  v6 = sub_1402624B8();
  if ( 160 * v7 > (unsigned __int64)(5 * v6) >> 4 )
  {
    result = 3221225626LL;
LABEL_14:
    _InterlockedExchangeAdd(&dword_140D3CB30, -v2);
    return result;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 )
  {
    result = PsChargeProcessNonPagedPoolQuota(*(_QWORD *)(a1 + 16), v5);
    if ( (int)result < 0 )
      goto LABEL_14;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6474624Fu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    _InterlockedExchangeAdd(&dword_140D3CB30, -v2);
    if ( v9 )
      PsReturnProcessNonPagedPoolQuota(v9, v5);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v5);
  *((_DWORD *)v11 + 1) = v2;
  *(_DWORD *)v11 = 1;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_DWORD *)v11 + 8) = 0;
  *((_DWORD *)v11 + 4) = 1;
  KeInitializeEvent((PRKEVENT)(v11 + 40), SynchronizationEvent, 0);
  if ( v9 )
    *(_BYTE *)(a1 + 44) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v13 = *(_DWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v11;
  if ( v13 )
  {
    if ( (v13[2] & 8) == 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
LABEL_25:
    *((_DWORD *)v11 + 2) = 8;
LABEL_26:
  *(_BYTE *)(a1 + 44) |= 2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 56);
  sub_1402AFC00(a1 + 56);
  sub_1402AC800((__int64)CurrentThread);
  if ( v13 )
    sub_1409F8D78(a1, v13);
  return 0LL;
}
