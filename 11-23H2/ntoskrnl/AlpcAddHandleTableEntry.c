/*
 * XREFs of AlpcAddHandleTableEntry @ 0x14071EC2C
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14071CBC8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x14076C5B8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1407D0144 (AlpcpCreateReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx
  __int64 v8; // r14
  void *Pool2; // rax
  void *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rbp

  v2 = (volatile signed __int64 *)(a1 + 8);
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD **)a1;
    while ( *v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_5;
    }
    *v7 = *a2;
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v6 + 16;
  }
  else
  {
LABEL_5:
    v8 = 2 * v5;
    if ( 2 * v5 >= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      return -1LL;
    }
    else
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 16 * v5, 1632136257LL);
      v10 = Pool2;
      v11 = -1LL;
      if ( Pool2 )
      {
        memset(Pool2, 0, 8 * v8);
        memmove(v10, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
        v12 = *(_QWORD *)(a1 + 16);
        *((_QWORD *)v10 + v12) = *a2;
        if ( *(_QWORD *)(a1 + 16) == 16LL )
          ExFreeToNPagedLookasideList(&stru_140D0BE40, *(PVOID *)a1);
        else
          ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
        *(_QWORD *)a1 = v10;
        v11 = v12 + 16;
        *(_QWORD *)(a1 + 16) = v8;
      }
      if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      return v11;
    }
  }
}
