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
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // r15
  unsigned int v10; // r14d
  volatile signed __int64 *v11; // r13
  unsigned __int64 v12; // rsi
  unsigned int v13; // edx
  __int64 v14; // rbx
  unsigned int v15; // edi
  char *v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r10
  __int64 v21; // r13
  _QWORD *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int128 v29; // [rsp+20h] [rbp-10h] BYREF
  __int64 v30; // [rsp+78h] [rbp+48h]
  __int64 v31; // [rsp+78h] [rbp+48h]

  v29 = RtlpHpEnvHandle;
  v9 = (_QWORD *)RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, &v29);
  if ( !v9 )
    return 0;
  v11 = (volatile signed __int64 *)(a1 + 8);
  v9[1] = a2;
  v9[2] = a3;
  RtlAcquireSRWLockExclusive(a1 + 8, v6, v7, v8);
  v12 = a1 + 16;
  v10 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v13 = *(_DWORD *)(a1 + 20);
  v14 = 2 * (v13 >> 5);
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v14 )
    goto LABEL_25;
  if ( (unsigned int)v14 < 4 )
    v14 = 4LL;
  v15 = 0;
  v16 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v14);
  if ( v16 )
  {
    if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
    {
      v17 = -1;
      do
      {
        ++v17;
        LODWORD(v14) = (unsigned int)v14 >> 1;
      }
      while ( (_DWORD)v14 );
      v14 = (unsigned int)(1 << v17);
    }
    if ( (unsigned int)v14 > 0x4000000 )
      v14 = 0x4000000LL;
    v18 = (unsigned int)v14;
    if ( v16 > &v16[8 * v14] )
      v18 = 0LL;
    if ( v18 )
    {
      memset64(v16, v12 | 1, v18);
      v15 = 0;
    }
    v19 = *(_DWORD *)(a1 + 20);
    v20 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (v19 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v21 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v22 = *(_QWORD **)(v21 + 8LL * v15);
          if ( ((unsigned __int8)v22 & 1) != 0 )
            break;
          *(_QWORD *)(v21 + 8LL * v15) = *v22;
          v30 = v20 & v22[1];
          v23 = (37
               * (BYTE6(v30)
                + 37
                * (BYTE5(v30)
                 + 37
                 * (BYTE4(v30)
                  + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
               + HIBYTE(v30)) & (unsigned int)(v14 - 1);
          *v22 = *(_QWORD *)&v16[8 * v23];
          *(_QWORD *)&v16[8 * v23] = v22;
        }
        v19 = *(_DWORD *)(a1 + 20);
        ++v15;
      }
      while ( v15 < v19 >> 5 );
      v11 = (volatile signed __int64 *)(a1 + 8);
    }
    v24 = *(_QWORD *)(a1 + 24);
    v13 = (32 * v14) | v19 & 0x1F;
    *(_QWORD *)(a1 + 24) = v16;
    *(_DWORD *)(a1 + 20) = v13;
    if ( v24 )
    {
      RtlpHpStackDbFreeRoutine(v24);
      v13 = *(_DWORD *)(a1 + 20);
    }
    goto LABEL_25;
  }
  v13 = *(_DWORD *)(a1 + 20);
  if ( v13 >= 0x20 )
  {
LABEL_25:
    v25 = (v13 >> 5) - 1;
    v31 = v9[1] & (-1LL << (v13 & 0x1F));
    v26 = *(_QWORD *)(a1 + 24);
    v27 = (37
         * (BYTE6(v31)
          + 37
          * (BYTE5(v31)
           + 37
           * (BYTE4(v31)
            + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
         + HIBYTE(v31)) & (unsigned int)v25;
    *v9 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v9;
    ++*(_DWORD *)v12;
    v9 = 0LL;
    goto LABEL_26;
  }
  v10 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v11);
  if ( v9 )
  {
    v29 = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v9, &v29);
  }
  return v10;
}
