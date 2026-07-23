/*
 * XREFs of sub_1409B3D44 @ 0x1409B3D44
 * Callers:
 *     sub_140979D48 @ 0x140979D48 (sub_140979D48.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_1409317A0 @ 0x1409317A0 (sub_1409317A0.c)
 *     sub_1409B497C @ 0x1409B497C (sub_1409B497C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409B3D44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _MDL *a6,
        ULONG a7,
        _QWORD *a8)
{
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // rsi
  char *PoolWithQuotaTag; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  int v20; // edi
  signed __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  __int64 v23; // r15
  int v24; // esi
  __int64 v25; // rsi
  char *v26; // r8
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // edi
  __int64 v31; // r10
  __int64 v32; // r13
  _QWORD *v33; // r9
  __int64 v34; // rdx
  void *v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+50h] [rbp-38h]
  __int64 v41; // [rsp+50h] [rbp-38h]

  v10 = a2;
  if ( !a5 && !*(_QWORD *)(a1 + 2248) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v13 = (volatile signed __int64 *)(a1 + 2264);
    ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
    if ( !*(_QWORD *)(a1 + 2248) )
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x20uLL, 0x48457350u);
      if ( PoolWithQuotaTag )
      {
        v15 = (unsigned __int64)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x48457350u);
        *(_QWORD *)(a1 + 2248) = v15;
        if ( v15 )
        {
          *(_DWORD *)v15 = 0;
          *(_QWORD *)(v15 + 8) = PoolWithQuotaTag;
          *(_DWORD *)(v15 + 4) = 128;
          v16 = v15 | 1;
          if ( (PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0) != 0 )
            memset64(PoolWithQuotaTag, v16, PoolWithQuotaTag + 32 >= PoolWithQuotaTag ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
        }
      }
      v10 = a2;
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    sub_1402AFC00((ULONG_PTR)v13);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( !*(_QWORD *)(a1 + 2248) )
      return 3221225626LL;
  }
  v17 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x88uLL, 0x65567350u);
  v18 = v17;
  if ( !v17 )
    return 3221225626LL;
  memset(v17, 0, 0x88uLL);
  v20 = sub_1409317A0((__int64)v18, a1, v10, a3, a4, a6, a7, a5, (_QWORD *)v18 + 3);
  if ( v20 >= 0 )
  {
    v18[76] = a5;
    *((_QWORD *)v18 + 2) = 1LL;
    *((_QWORD *)v18 + 4) = a3;
    *((_QWORD *)v18 + 14) = 0LL;
    *((_QWORD *)v18 + 13) = 0LL;
    *((_QWORD *)v18 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)(v18 + 80), NotificationEvent, 0);
    if ( !a5 )
    {
      if ( !*((_QWORD *)v18 + 1) )
      {
        do
        {
          v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2256), 1uLL);
          *((_QWORD *)v18 + 1) = v21 + 1;
        }
        while ( v21 == -1 );
      }
      v22 = KeGetCurrentThread();
      --*((_WORD *)v22 + 242);
      ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
      v23 = *(_QWORD *)(a1 + 2248);
      v24 = *(_DWORD *)(v23 + 4) >> 5;
      if ( *(_DWORD *)v23 >= (unsigned int)(4 * v24) )
      {
        v25 = (unsigned int)(2 * v24);
        if ( (unsigned int)v25 < 4 )
          v25 = 4LL;
        v26 = (char *)sub_1409B497C(8LL * (unsigned int)v25);
        if ( v26 )
        {
          if ( (((_DWORD)v25 - 1) & (unsigned int)v25) != 0 )
          {
            v27 = -1;
            do
            {
              ++v27;
              LODWORD(v25) = (unsigned int)v25 >> 1;
            }
            while ( (_DWORD)v25 );
            v25 = (unsigned int)(1 << v27);
          }
          if ( (unsigned int)v25 > 0x4000000 )
            v25 = 0x4000000LL;
          v28 = (unsigned int)v25;
          if ( v26 > &v26[8 * v25] )
            v28 = 0LL;
          if ( v28 )
            memset64(v26, v23 | 1, v28);
          v29 = *(_DWORD *)(v23 + 4);
          v30 = 0;
          v31 = -1LL << (*(_BYTE *)(v23 + 4) & 0x1F);
          if ( (v29 & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v32 = *(_QWORD *)(v23 + 8);
              while ( 1 )
              {
                v33 = *(_QWORD **)(v32 + 8LL * v30);
                if ( ((unsigned __int8)v33 & 1) != 0 )
                  break;
                *(_QWORD *)(v32 + 8LL * v30) = *v33;
                v40 = v31 & v33[1];
                v34 = (37
                     * (BYTE6(v40)
                      + 37
                      * (BYTE5(v40)
                       + 37
                       * (BYTE4(v40)
                        + 37
                        * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                     + HIBYTE(v40)) & (unsigned int)(v25 - 1);
                *v33 = *(_QWORD *)&v26[8 * v34];
                *(_QWORD *)&v26[8 * v34] = v33;
              }
              v29 = *(_DWORD *)(v23 + 4);
              ++v30;
            }
            while ( v30 < v29 >> 5 );
          }
          v35 = *(void **)(v23 + 8);
          *(_QWORD *)(v23 + 8) = v26;
          *(_DWORD *)(v23 + 4) = (32 * v25) | v29 & 0x1F;
          if ( v35 )
            sub_1406D9550(v35);
        }
      }
      v36 = *(_QWORD *)(a1 + 2248);
      v37 = *(_DWORD *)(v36 + 4);
      v41 = *((_QWORD *)v18 + 1) & (-1LL << (v37 & 0x1F));
      v38 = *(_QWORD *)(v36 + 8);
      v39 = (37
           * (BYTE6(v41)
            + 37
            * (BYTE5(v41)
             + 37
             * (BYTE4(v41)
              + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
           + HIBYTE(v41)) & ((v37 >> 5) - 1);
      *(_QWORD *)v18 = *(_QWORD *)(v38 + 8 * v39);
      *(_QWORD *)(v38 + 8 * v39) = v18;
      ++*(_DWORD *)v36;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 2264);
      sub_1402AFC00(a1 + 2264);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
    *a8 = v18;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v18, 0);
    return (unsigned int)v20;
  }
}
