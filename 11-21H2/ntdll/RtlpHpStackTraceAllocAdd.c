/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x180115704
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180115490 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1801154C0 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r15
  unsigned int v7; // r14d
  _RTL_SRWLOCK *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // edi
  char *v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r10
  __int64 v18; // r13
  _QWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int128 v26; // [rsp+20h] [rbp-10h] BYREF
  __int64 v27; // [rsp+78h] [rbp+48h]
  __int64 v28; // [rsp+78h] [rbp+48h]

  v26 = RtlpHpEnvHandle;
  v6 = (_QWORD *)RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, &v26);
  if ( !v6 )
    return 0;
  v8 = (_RTL_SRWLOCK *)(a1 + 8);
  v6[1] = a2;
  v6[2] = a3;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  v9 = a1 + 16;
  v7 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v10 = *(_DWORD *)(a1 + 20);
  v11 = 2 * (v10 >> 5);
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v11 )
    goto LABEL_25;
  if ( (unsigned int)v11 < 4 )
    v11 = 4LL;
  v12 = 0;
  v13 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v11);
  if ( v13 )
  {
    if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
    {
      v14 = -1;
      do
      {
        ++v14;
        LODWORD(v11) = (unsigned int)v11 >> 1;
      }
      while ( (_DWORD)v11 );
      v11 = (unsigned int)(1 << v14);
    }
    if ( (unsigned int)v11 > 0x4000000 )
      v11 = 0x4000000LL;
    v15 = (unsigned int)v11;
    if ( v13 > &v13[8 * v11] )
      v15 = 0LL;
    if ( v15 )
    {
      memset64(v13, v9 | 1, v15);
      v12 = 0;
    }
    v16 = *(_DWORD *)(a1 + 20);
    v17 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (v16 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v18 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v19 = *(_QWORD **)(v18 + 8LL * v12);
          if ( ((unsigned __int8)v19 & 1) != 0 )
            break;
          *(_QWORD *)(v18 + 8LL * v12) = *v19;
          v27 = v17 & v19[1];
          v20 = (37
               * (BYTE6(v27)
                + 37
                * (BYTE5(v27)
                 + 37
                 * (BYTE4(v27)
                  + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
               + HIBYTE(v27)) & (unsigned int)(v11 - 1);
          *v19 = *(_QWORD *)&v13[8 * v20];
          *(_QWORD *)&v13[8 * v20] = v19;
        }
        v16 = *(_DWORD *)(a1 + 20);
        ++v12;
      }
      while ( v12 < v16 >> 5 );
      v8 = (_RTL_SRWLOCK *)(a1 + 8);
    }
    v21 = *(_QWORD *)(a1 + 24);
    v10 = (32 * v11) | v16 & 0x1F;
    *(_QWORD *)(a1 + 24) = v13;
    *(_DWORD *)(a1 + 20) = v10;
    if ( v21 )
    {
      RtlpHpStackDbFreeRoutine(v21);
      v10 = *(_DWORD *)(a1 + 20);
    }
    goto LABEL_25;
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( v10 >= 0x20 )
  {
LABEL_25:
    v22 = (v10 >> 5) - 1;
    v28 = v6[1] & (-1LL << (v10 & 0x1F));
    v23 = *(_QWORD *)(a1 + 24);
    v24 = (37
         * (BYTE6(v28)
          + 37
          * (BYTE5(v28)
           + 37
           * (BYTE4(v28)
            + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
         + HIBYTE(v28)) & (unsigned int)v22;
    *v6 = *(_QWORD *)(v23 + 8 * v24);
    *(_QWORD *)(v23 + 8 * v24) = v6;
    ++*(_DWORD *)v9;
    v6 = 0LL;
    goto LABEL_26;
  }
  v7 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v8);
  if ( v6 )
  {
    v26 = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v6, &v26);
  }
  return v7;
}
