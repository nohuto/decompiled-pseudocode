/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x180128020
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x180127DBC (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x180127F80 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x180127FE4 (RtlpStackDbSegmentComparitor.c)
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
  __int64 v17; // r14
  __int64 v18; // r10
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // rax
  _QWORD *v22; // r14
  __int64 v23; // r9
  int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // r15
  __int64 v27; // rbx
  char *v28; // rax
  char v29; // cl
  unsigned __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // edi
  __int64 v33; // r10
  __int64 v34; // r15
  _QWORD *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v41; // [rsp+60h] [rbp+40h]
  __int64 v42; // [rsp+60h] [rbp+40h]
  __int64 v43; // [rsp+60h] [rbp+40h]
  __int64 v44; // [rsp+68h] [rbp+48h]
  void (__fastcall *v45)(__int64, __int64); // [rsp+70h] [rbp+50h]

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
  v17 = 0LL;
LABEL_21:
  v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v19 = v18 & v6;
  if ( v17 )
    goto LABEL_24;
  v20 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v20 )
  {
    v41 = v18 & v6;
    v17 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v41)
           + 37
           * (BYTE5(v41)
            + 37
            * (BYTE4(v41)
             + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v41)) & (unsigned int)(v20 - 1));
LABEL_24:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        if ( RtlpStackDbSegmentComparitor(v17, a2) )
        {
          v16 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v17 + 16)) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
          return v16;
        }
        goto LABEL_21;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  v22 = (_QWORD *)v21;
  if ( v21 )
  {
    *(_OWORD *)v21 = 0LL;
    *(_QWORD *)(v21 + 16) = 0LL;
    *(_DWORD *)(v21 + 16) &= 0xFF000001;
    *(_DWORD *)(v21 + 16) |= 1u;
    *(_BYTE *)(v21 + 19) = *(_BYTE *)a2;
    *(_QWORD *)(v21 + 8) = v6;
    memmove((void *)(v21 + 24), *((const void **)a2 + 1), 8LL * *a2);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
LABEL_31:
    v23 = v6 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_34;
    v24 = *(_DWORD *)(a1 + 4) >> 5;
    if ( v24 )
    {
      v16 = *(_QWORD *)(a1 + 8)
          + 8LL
          * ((37
            * (BYTE6(v23)
             + 37
             * (BYTE5(v23)
              + 37
              * (BYTE4(v23)
               + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
            + HIBYTE(v23)) & (unsigned int)(v24 - 1));
LABEL_34:
      while ( 1 )
      {
        v16 = *(_QWORD *)v16;
        if ( (v16 & 1) != 0 )
          break;
        if ( v23 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        {
          if ( !v16 )
            break;
          if ( RtlpStackDbSegmentComparitor(v16, a2) )
          {
            if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) )
              v16 = 0LL;
            goto LABEL_63;
          }
          goto LABEL_31;
        }
      }
    }
    v25 = *(_DWORD *)(a1 + 4);
    v26 = *(_QWORD *)(a1 + 64);
    v27 = 2 * (v25 >> 5);
    v44 = v26;
    v45 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
    if ( *(_DWORD *)a1 >= (unsigned int)v27 )
    {
      if ( (unsigned int)v27 < 4 )
        v27 = 4LL;
      v28 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v27, v26);
      if ( v28 )
      {
        if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
        {
          v29 = -1;
          do
          {
            ++v29;
            LODWORD(v27) = (unsigned int)v27 >> 1;
          }
          while ( (_DWORD)v27 );
          v27 = (unsigned int)(1 << v29);
        }
        if ( (unsigned int)v27 > 0x4000000 )
          v27 = 0x4000000LL;
        v30 = (unsigned int)v27;
        if ( v28 > &v28[8 * v27] )
          v30 = 0LL;
        if ( v30 )
          memset64(v28, a1 | 1, v30);
        v31 = *(_DWORD *)(a1 + 4);
        v32 = 0;
        v33 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (v31 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v34 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v35 = *(_QWORD **)(v34 + 8LL * v32);
              if ( ((unsigned __int8)v35 & 1) != 0 )
                break;
              *(_QWORD *)(v34 + 8LL * v32) = *v35;
              v42 = v33 & v35[1];
              v36 = (37
                   * (BYTE6(v42)
                    + 37
                    * (BYTE5(v42)
                     + 37
                     * (BYTE4(v42)
                      + 37
                      * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                   + HIBYTE(v42)) & (unsigned int)(v27 - 1);
              *v35 = *(_QWORD *)&v28[8 * v36];
              *(_QWORD *)&v28[8 * v36] = v35;
            }
            v31 = *(_DWORD *)(a1 + 4);
            ++v32;
          }
          while ( v32 < v31 >> 5 );
          v26 = v44;
        }
        v37 = *(_QWORD *)(a1 + 8);
        v25 = (32 * v27) | v31 & 0x1F;
        *(_QWORD *)(a1 + 8) = v28;
        *(_DWORD *)(a1 + 4) = v25;
        if ( v37 )
        {
          v45(v37, v26);
          v25 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v25 = *(_DWORD *)(a1 + 4);
        if ( v25 < 0x20 )
        {
          v16 = 0LL;
LABEL_63:
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
          if ( v22 )
            (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v22, *(_QWORD *)(a1 + 64));
          return v16;
        }
      }
    }
    v16 = (__int64)v22;
    v43 = v22[1] & (-1LL << (v25 & 0x1F));
    v38 = *(_QWORD *)(a1 + 8);
    v39 = (37
         * (BYTE6(v43)
          + 37
          * (BYTE5(v43)
           + 37
           * (BYTE4(v43)
            + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
         + HIBYTE(v43)) & ((v25 >> 5) - 1);
    *v22 = *(_QWORD *)(v38 + 8 * v39);
    *(_QWORD *)(v38 + 8 * v39) = v22;
    v22 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_63;
  }
  return v16;
}
