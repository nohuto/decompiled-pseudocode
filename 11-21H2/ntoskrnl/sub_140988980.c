/*
 * XREFs of sub_140988980 @ 0x140988980
 * Callers:
 *     sub_1407D9124 @ 0x1407D9124 (sub_1407D9124.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140988980(__int64 a1, __m128i *a2, ULONG_PTR a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r12
  unsigned int v8; // esi
  struct _KTHREAD *v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // esi
  char v13; // dl
  unsigned int v14; // r14d
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // r9d
  unsigned int v18; // esi
  __int64 *v19; // r15
  unsigned __int64 v20; // rax
  int v21; // r12d
  __int64 v22; // r8
  char *v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 i; // rax
  __int64 v27; // r9
  struct _KTHREAD *v28; // rax
  char *Pool2; // [rsp+20h] [rbp-58h]
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  volatile signed __int64 *v32; // [rsp+30h] [rbp-48h]
  __m128i v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-30h]
  __m128i Src; // [rsp+50h] [rbp-28h]
  char v36; // [rsp+C0h] [rbp+48h]
  __int64 v37; // [rsp+C0h] [rbp+48h]
  char v38; // [rsp+C8h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = (volatile signed __int64 *)(a1 + 128);
  v32 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v8 = a2->m128i_u32[3];
  if ( 2 * a2[1].m128i_i32[0] >= v8 )
  {
    v11 = 2 * v8;
    if ( v11 < 8 )
      v11 = 8;
    v12 = v11 << a2->m128i_i32[2];
    v10 = 0;
    Pool2 = (char *)ExAllocatePool2(256LL, v12, 1212376656LL);
    if ( Pool2 )
    {
      v13 = -1;
      Src = *a2;
      HIDWORD(v34) = 0;
      v36 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
      v14 = 1 << v36;
      v15 = -1;
      v16 = 1 << v36;
      if ( 1 << v36 )
      {
        do
        {
          ++v15;
          v16 >>= 1;
        }
        while ( v16 );
      }
      v17 = v15 + 1;
      if ( ((v14 - 1) & v14) == 0 )
        v17 = v15;
      v38 = v17;
      v18 = v12 >> v17;
      if ( ((v18 - 1) & v18) != 0 )
      {
        for ( ; v18; v18 >>= 1 )
          ++v13;
        v18 = 1 << v13;
      }
      LODWORD(v34) = 0;
      v33.m128i_i64[1] = __PAIR64__(v18, v17);
      v33.m128i_i64[0] = (__int64)Pool2;
      memset(Pool2, 0, (unsigned __int64)v18 << v17);
      v19 = (__int64 *)Src.m128i_i64[0];
      v20 = Src.m128i_i64[0] + ((unsigned __int64)Src.m128i_u32[3] << v36);
      v31 = v20;
      if ( Src.m128i_i64[0] < v20 )
      {
        v21 = 0;
        do
        {
          v22 = *v19;
          if ( *v19 )
          {
            if ( v18 )
            {
              v24 = v18 - 1;
              v25 = 0LL;
              v37 = *v19;
              for ( i = 37
                      * (BYTE6(v37)
                       + 37
                       * (BYTE5(v37)
                        + 37
                        * (BYTE4(v37)
                         + 37
                         * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                      + (unsigned int)HIBYTE(v37); ; i = v18 - 1 )
              {
                v27 = i & v24;
                v23 = &Pool2[v27 << v38];
                if ( !*(_QWORD *)v23 || *(_QWORD *)v23 == v22 )
                  break;
                if ( !v25 )
                {
                  v25 = 2654435761LL * v22 + 1;
                  if ( ((-79 * (_BYTE)v22) & 1) != 0 )
                    v25 = 2654435761LL * v22;
                }
                v24 = v25 + v27;
              }
            }
            else
            {
              v23 = 0LL;
            }
            memmove(v23, v19, v14);
            v20 = v31;
            LODWORD(v34) = ++v21;
          }
          v19 = (__int64 *)((char *)v19 + v14);
        }
        while ( (unsigned __int64)v19 < v20 );
        v7 = v32;
      }
      v28 = KeGetCurrentThread();
      --*((_WORD *)v28 + 242);
      ExAcquirePushLockExclusiveEx(a3, 0LL);
      *a2 = v33;
      a2[1].m128i_i64[0] = v34;
      if ( Src.m128i_i64[0] )
      {
        *(_QWORD *)Src.m128i_i64[0] = *a4;
        *a4 = Src.m128i_i64[0];
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v9 = KeGetCurrentThread();
    v10 = 0;
    --*((_WORD *)v9 + 242);
    ExAcquirePushLockExclusiveEx(a3, 0LL);
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v10;
}
