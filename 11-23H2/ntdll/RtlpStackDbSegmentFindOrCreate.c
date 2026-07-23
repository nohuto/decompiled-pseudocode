/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x18012E188
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x18012DF20 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x18012E0E8 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18012E14C (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned __int8 *v4; // r8
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rdi
  _QWORD *v21; // r12
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // r9
  int v25; // r8d
  __int64 v26; // r15
  unsigned int v27; // eax
  __int64 v28; // rbx
  char *v29; // rax
  char *v30; // r8
  char v31; // cl
  unsigned __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // r10
  __int64 v35; // r15
  _QWORD *v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v42; // [rsp+20h] [rbp-10h]
  __int64 v43; // [rsp+70h] [rbp+40h]
  __int64 v44; // [rsp+70h] [rbp+40h]
  __int64 v45; // [rsp+78h] [rbp+48h]
  void (__fastcall *v46)(__int64, __int64); // [rsp+80h] [rbp+50h]

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v6 = 314159LL;
  v7 = 8 * v2;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v7 -= 8LL * (unsigned int)v2;
    do
    {
      v8 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v9 = v4[7];
      v4 += 8;
      v6 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v7 < 1 || v7 > 7 )
    goto LABEL_20;
  v10 = v7 - 1;
  if ( !v10 )
    goto LABEL_19;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_18:
    v6 = *v4++ + 37 * v6;
LABEL_19:
    v6 = *v4 + 37 * v6;
    goto LABEL_20;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_17:
    v6 = *v4++ + 37 * v6;
    goto LABEL_18;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_16:
    v6 = *v4++ + 37 * v6;
    goto LABEL_17;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_15:
    v6 = *v4++ + 37 * v6;
    goto LABEL_16;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_14:
    v6 = *v4++ + 37 * v6;
    goto LABEL_15;
  }
  if ( v15 == 1 )
  {
    v6 = *v4++ + 37 * v6;
    goto LABEL_14;
  }
LABEL_20:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
LABEL_21:
  v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v18 = v17 & v6;
  if ( v16 )
    goto LABEL_24;
  v19 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v19 )
  {
    v43 = v17 & v6;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v43)
           + 37
           * (BYTE5(v43)
            + 37
            * (BYTE4(v43)
             + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v43)) & (unsigned int)(v19 - 1));
LABEL_24:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
      {
        if ( !v16 )
          break;
        if ( RtlpStackDbSegmentComparitor(v16, a2) )
        {
          v20 = v16 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
          return v20;
        }
        goto LABEL_21;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v21 = (_QWORD *)(a1 + 64);
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  if ( !v22 )
    return 0LL;
  *(_OWORD *)v22 = 0LL;
  *(_QWORD *)(v22 + 16) = 0LL;
  *(_DWORD *)(v22 + 16) = 1;
  *(_BYTE *)(v22 + 19) = *(_BYTE *)a2;
  *(_QWORD *)(v22 + 8) = v6;
  memmove((void *)(v22 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v23 = 0LL;
LABEL_32:
  v24 = v6 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
  if ( v23 )
    goto LABEL_35;
  v25 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v25 )
  {
    v23 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v24)
           + 37
           * (BYTE5(v24)
            + 37
            * (BYTE4(v24)
             + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
          + HIBYTE(v24)) & (unsigned int)(v25 - 1));
LABEL_35:
    while ( 1 )
    {
      v23 = *(_QWORD *)v23;
      if ( (v23 & 1) != 0 )
        break;
      if ( v24 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v23 + 8)) )
      {
        if ( !v23 )
          break;
        if ( RtlpStackDbSegmentComparitor(v23, a2) )
        {
          v20 = v23 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v23 + 16)) != 0);
          goto LABEL_63;
        }
        goto LABEL_32;
      }
    }
  }
  v26 = *v21;
  v46 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
  v27 = *(_DWORD *)(a1 + 4);
  v28 = 2 * (v27 >> 5);
  v45 = *v21;
  if ( *(_DWORD *)a1 < (unsigned int)v28 )
    goto LABEL_62;
  if ( (unsigned int)v28 < 4 )
    v28 = 4LL;
  v29 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v28, v26);
  v30 = v29;
  if ( v29 )
  {
    if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
    {
      v31 = -1;
      do
      {
        ++v31;
        LODWORD(v28) = (unsigned int)v28 >> 1;
      }
      while ( (_DWORD)v28 );
      v28 = (unsigned int)(1 << v31);
    }
    if ( (unsigned int)v28 > 0x4000000 )
      v28 = 0x4000000LL;
    v32 = (unsigned int)v28;
    if ( v29 > &v29[8 * v28] )
      v32 = 0LL;
    if ( v32 )
      memset64(v29, a1 | 1, v32);
    v33 = 0;
    v34 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v35 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v36 = *(_QWORD **)(v35 + 8LL * v33);
          if ( ((unsigned __int8)v36 & 1) != 0 )
            break;
          *(_QWORD *)(v35 + 8LL * v33) = *v36;
          v44 = v34 & v36[1];
          v37 = (37
               * (BYTE6(v44)
                + 37
                * (BYTE5(v44)
                 + 37
                 * (BYTE4(v44)
                  + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
               + HIBYTE(v44)) & (unsigned int)(v28 - 1);
          *v36 = *(_QWORD *)&v29[8 * v37];
          *(_QWORD *)&v29[8 * v37] = v36;
        }
        ++v33;
      }
      while ( v33 < *(_DWORD *)(a1 + 4) >> 5 );
      v26 = v45;
    }
    v38 = *(_QWORD *)(a1 + 8);
    v27 = (32 * v28) | *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v30;
    *(_DWORD *)(a1 + 4) = v27;
    if ( v38 )
    {
      v46(v38, v26);
      v27 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_62;
  }
  v27 = *(_DWORD *)(a1 + 4);
  if ( v27 >= 0x20 )
  {
LABEL_62:
    v42 = *(_QWORD *)(v22 + 8) & (-1LL << (v27 & 0x1F));
    v20 = v22;
    v39 = *(_QWORD *)(a1 + 8);
    v40 = (37
         * (BYTE6(v42)
          + 37
          * (BYTE5(v42)
           + 37
           * (BYTE4(v42)
            + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
         + HIBYTE(v42)) & ((v27 >> 5) - 1);
    *(_QWORD *)v22 = *(_QWORD *)(v39 + 8 * v40);
    *(_QWORD *)(v39 + 8 * v40) = v22;
    v22 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_63;
  }
  v20 = 0LL;
LABEL_63:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v22 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v22, *v21);
  return v20;
}
