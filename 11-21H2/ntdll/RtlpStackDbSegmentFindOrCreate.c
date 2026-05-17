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
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // r9
  int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // r15
  __int64 v30; // rbx
  char *v31; // rax
  char v32; // cl
  unsigned __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // edi
  __int64 v36; // r10
  __int64 v37; // r15
  _QWORD *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v44; // [rsp+60h] [rbp+40h]
  __int64 v45; // [rsp+60h] [rbp+40h]
  __int64 v46; // [rsp+60h] [rbp+40h]
  __int64 v47; // [rsp+68h] [rbp+48h]
  void (__fastcall *v48)(__int64, __int64); // [rsp+70h] [rbp+50h]

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
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 40));
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
    v44 = v18 & v6;
    v17 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v44)
           + 37
           * (BYTE5(v44)
            + 37
            * (BYTE4(v44)
             + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v44)) & (unsigned int)(v20 - 1));
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
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
          return v16;
        }
        goto LABEL_21;
      }
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
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
    RtlAcquireSRWLockExclusive(a1 + 40, v23, v24, v25);
LABEL_31:
    v26 = v6 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_34;
    v27 = *(_DWORD *)(a1 + 4) >> 5;
    if ( v27 )
    {
      v16 = *(_QWORD *)(a1 + 8)
          + 8LL
          * ((37
            * (BYTE6(v26)
             + 37
             * (BYTE5(v26)
              + 37
              * (BYTE4(v26)
               + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
            + HIBYTE(v26)) & (unsigned int)(v27 - 1));
LABEL_34:
      while ( 1 )
      {
        v16 = *(_QWORD *)v16;
        if ( (v16 & 1) != 0 )
          break;
        if ( v26 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
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
    v28 = *(_DWORD *)(a1 + 4);
    v29 = *(_QWORD *)(a1 + 64);
    v30 = 2 * (v28 >> 5);
    v47 = v29;
    v48 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
    if ( *(_DWORD *)a1 >= (unsigned int)v30 )
    {
      if ( (unsigned int)v30 < 4 )
        v30 = 4LL;
      v31 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v30, v29);
      if ( v31 )
      {
        if ( (((_DWORD)v30 - 1) & (unsigned int)v30) != 0 )
        {
          v32 = -1;
          do
          {
            ++v32;
            LODWORD(v30) = (unsigned int)v30 >> 1;
          }
          while ( (_DWORD)v30 );
          v30 = (unsigned int)(1 << v32);
        }
        if ( (unsigned int)v30 > 0x4000000 )
          v30 = 0x4000000LL;
        v33 = (unsigned int)v30;
        if ( v31 > &v31[8 * v30] )
          v33 = 0LL;
        if ( v33 )
          memset64(v31, a1 | 1, v33);
        v34 = *(_DWORD *)(a1 + 4);
        v35 = 0;
        v36 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (v34 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v37 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v38 = *(_QWORD **)(v37 + 8LL * v35);
              if ( ((unsigned __int8)v38 & 1) != 0 )
                break;
              *(_QWORD *)(v37 + 8LL * v35) = *v38;
              v45 = v36 & v38[1];
              v39 = (37
                   * (BYTE6(v45)
                    + 37
                    * (BYTE5(v45)
                     + 37
                     * (BYTE4(v45)
                      + 37
                      * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
                   + HIBYTE(v45)) & (unsigned int)(v30 - 1);
              *v38 = *(_QWORD *)&v31[8 * v39];
              *(_QWORD *)&v31[8 * v39] = v38;
            }
            v34 = *(_DWORD *)(a1 + 4);
            ++v35;
          }
          while ( v35 < v34 >> 5 );
          v29 = v47;
        }
        v40 = *(_QWORD *)(a1 + 8);
        v28 = (32 * v30) | v34 & 0x1F;
        *(_QWORD *)(a1 + 8) = v31;
        *(_DWORD *)(a1 + 4) = v28;
        if ( v40 )
        {
          v48(v40, v29);
          v28 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v28 = *(_DWORD *)(a1 + 4);
        if ( v28 < 0x20 )
        {
          v16 = 0LL;
LABEL_63:
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
          if ( v22 )
            (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v22, *(_QWORD *)(a1 + 64));
          return v16;
        }
      }
    }
    v16 = (__int64)v22;
    v46 = v22[1] & (-1LL << (v28 & 0x1F));
    v41 = *(_QWORD *)(a1 + 8);
    v42 = (37
         * (BYTE6(v46)
          + 37
          * (BYTE5(v46)
           + 37
           * (BYTE4(v46)
            + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
         + HIBYTE(v46)) & ((v28 >> 5) - 1);
    *v22 = *(_QWORD *)(v41 + 8 * v42);
    *(_QWORD *)(v41 + 8 * v42) = v22;
    v22 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_63;
  }
  return v16;
}
