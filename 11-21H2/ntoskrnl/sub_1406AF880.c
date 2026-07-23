/*
 * XREFs of sub_1406AF880 @ 0x1406AF880
 * Callers:
 *     sub_1406ADBC8 @ 0x1406ADBC8 (sub_1406ADBC8.c)
 * Callees:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406AF880(__int64 a1, __int64 a2, signed __int64 *a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // esi
  void *v11; // r15
  struct _KTHREAD *v12; // rax
  char v13; // dl
  __int64 v14; // xmm0_8
  unsigned int v15; // ebp
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // r9d
  unsigned int v19; // esi
  char *v20; // r15
  char *v21; // rdx
  int v22; // r12d
  __int64 v23; // r8
  struct _KTHREAD *v24; // rax
  unsigned int v26; // ecx
  _QWORD *v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 i; // rax
  __int64 v31; // r9
  signed __int32 v32[8]; // [rsp+0h] [rbp-88h] BYREF
  int v33; // [rsp+20h] [rbp-68h]
  __int64 Pool2; // [rsp+28h] [rbp-60h]
  volatile signed __int64 *v35; // [rsp+30h] [rbp-58h]
  PVOID P[2]; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+48h] [rbp-40h]
  int v38; // [rsp+90h] [rbp+8h]
  __int64 v39; // [rsp+90h] [rbp+8h]
  char v40; // [rsp+98h] [rbp+10h]
  char *v41; // [rsp+98h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v8 = (volatile signed __int64 *)(a1 + 128);
  v35 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 12) << *(_DWORD *)(a2 + 8);
  if ( v10 )
  {
    Pool2 = ExAllocatePool2(256LL, v10, 1212376656LL);
    v11 = (void *)Pool2;
    if ( Pool2 )
    {
      v12 = KeGetCurrentThread();
      --*((_WORD *)v12 + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)a3, 0LL);
      v13 = -1;
      v14 = *(_QWORD *)(a2 + 16);
      *(_OWORD *)P = *(_OWORD *)a2;
      v37 = v14;
      v40 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)P, 8));
      v15 = 1 << v40;
      v16 = -1;
      v17 = 1 << v40;
      if ( 1 << v40 )
      {
        do
        {
          ++v16;
          v17 >>= 1;
        }
        while ( v17 );
      }
      v18 = v16 + 1;
      if ( ((v15 - 1) & v15) == 0 )
        v18 = v16;
      v33 = v18;
      v19 = v10 >> v18;
      if ( ((v19 - 1) & v19) != 0 )
      {
        for ( ; v19; v19 >>= 1 )
          ++v13;
        v19 = 1 << v13;
      }
      v38 = 0;
      memset(v11, 0, (unsigned __int64)v19 << v18);
      v20 = (char *)P[0];
      v21 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << v40);
      v41 = v21;
      if ( P[0] < v21 )
      {
        v22 = 0;
        do
        {
          v23 = *(_QWORD *)v20;
          if ( *(_QWORD *)v20 )
          {
            if ( a5 && (v26 = 0, a4) )
            {
              while ( *(_QWORD *)(a5 + 8LL * v26) != v23 )
              {
                if ( ++v26 >= a4 )
                  goto LABEL_25;
              }
            }
            else
            {
LABEL_25:
              if ( v19 )
              {
                v28 = v19 - 1;
                v29 = 0LL;
                v39 = *(_QWORD *)v20;
                for ( i = 37
                        * (BYTE6(v39)
                         + 37
                         * (BYTE5(v39)
                          + 37
                          * (BYTE4(v39)
                           + 37
                           * (BYTE3(v39) + 37
                                         * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                        + (unsigned int)HIBYTE(v39); ; i = v19 - 1 )
                {
                  v31 = i & v28;
                  v27 = (_QWORD *)(Pool2 + (v31 << v33));
                  if ( !*v27 || *v27 == v23 )
                    break;
                  if ( !v29 )
                  {
                    v29 = 2654435761LL * v23 + 1;
                    if ( ((-79 * (_BYTE)v23) & 1) != 0 )
                      v29 = 2654435761LL * v23;
                  }
                  v28 = v29 + v31;
                }
              }
              else
              {
                v27 = 0LL;
              }
              memmove(v27, v20, v15);
              v21 = v41;
              ++v22;
            }
          }
          v20 += v15;
        }
        while ( v20 < v21 );
        v38 = v22;
        v8 = v35;
      }
      *(_QWORD *)a2 = Pool2;
      *(_DWORD *)(a2 + 16) = v38;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a3);
      sub_1402AFC00((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      v24 = KeGetCurrentThread();
      --*((_WORD *)v24 + 242);
      _InterlockedOr(v32, 0);
      if ( (*a3 & 1) != 0 )
        sub_14024BA7C((ULONG_PTR)a3);
      sub_1402F9540((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P[0], 0);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  sub_1402AFC00((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v9;
}
