/*
 * XREFs of sub_1409B4318 @ 0x1409B4318
 * Callers:
 *     sub_14097A228 @ 0x14097A228 (sub_14097A228.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     sub_140932454 @ 0x140932454 (sub_140932454.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409B4318(__int64 a1, __int64 a2, ULONG a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *PoolWithQuotaTag; // r14
  volatile signed __int64 *v11; // r15
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rbp
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rcx

  CurrentThread = KeGetCurrentThread();
  PoolWithQuotaTag = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v11 = (volatile signed __int64 *)(a1 + 48);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v12 = *(_DWORD *)(a1 + 44);
  if ( v12 )
  {
    if ( v12 == 1 )
      v13 = -1073740528;
    else
      v13 = -1073740526;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 76) )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      if ( a3 != 8 || *(_DWORD *)a2 != 8 )
      {
        v13 = -1073741820;
        goto LABEL_19;
      }
      v14 = *(unsigned int *)(a2 + 4);
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 40 * v14, 0x74457350u);
      if ( !PoolWithQuotaTag )
      {
        v13 = -1073741670;
        goto LABEL_19;
      }
    }
    v13 = sub_140932454(*(_QWORD *)(a1 + 24), a1 + 80, (struct _MDL *)a2, a3, a4, a5, (_DWORD *)(a1 + 40));
    if ( v13 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 76) )
      {
        *(_DWORD *)(a1 + 72) = v14;
        *PoolWithQuotaTag = 0LL;
        if ( (unsigned int)v14 > 1 )
        {
          v15 = PoolWithQuotaTag + 5;
          v16 = PoolWithQuotaTag;
          v17 = (unsigned int)(v14 - 1);
          do
          {
            *v15 = v16;
            v16 += 5;
            v15 += 5;
            --v17;
          }
          while ( v17 );
        }
        *(_QWORD *)(a1 + 120) = PoolWithQuotaTag;
        v18 = &PoolWithQuotaTag[5 * (unsigned int)(v14 - 1)];
        PoolWithQuotaTag = 0LL;
        *(_QWORD *)(a1 + 128) = v18;
      }
      *(_DWORD *)(a1 + 44) = 1;
      *(_QWORD *)(a1 + 64) = a1 + 56;
      v13 = 0;
      *(_QWORD *)(a1 + 56) = a1 + 56;
    }
  }
LABEL_19:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  sub_1402AFC00((ULONG_PTR)v11);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v13;
}
