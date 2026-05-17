/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x18012E15C
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x18012DEF4 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x18012E0BC (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18012E120 (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned int *v3; // r15
  unsigned __int8 *v4; // r8
  __int64 v6; // rdi
  signed __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rdi
  _QWORD *v15; // r12
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rbx
  char *v23; // rax
  char *v24; // r8
  char v25; // cl
  unsigned __int64 v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // r10
  __int64 v29; // r15
  _QWORD *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v36; // [rsp+20h] [rbp-10h]
  __int64 v37; // [rsp+70h] [rbp+40h]
  __int64 v38; // [rsp+70h] [rbp+40h]
  __int64 v39; // [rsp+78h] [rbp+48h]
  void (__fastcall *v40)(__int64, __int64); // [rsp+80h] [rbp+50h]

  v2 = *(unsigned int *)a2;
  v3 = (unsigned int *)a2;
  v4 = *(unsigned __int8 **)(a2 + 8);
  v6 = 314159LL;
  v7 = 8 * v2;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v7 -= 8LL * (unsigned int)v2;
    do
    {
      a2 = v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6)))));
      v8 = v4[6] + 37 * a2;
      v9 = v4[7];
      v4 += 8;
      v6 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v7 < 1 || v7 > 7 )
    goto LABEL_20;
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
    goto LABEL_19;
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_18:
    v6 = *v4++ + 37 * v6;
LABEL_19:
    v6 = *v4 + 37 * v6;
    goto LABEL_20;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_17:
    v6 = *v4++ + 37 * v6;
    goto LABEL_18;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_16:
    v6 = *v4++ + 37 * v6;
    goto LABEL_17;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_15:
    v6 = *v4++ + 37 * v6;
    goto LABEL_16;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v6 = *v4++ + 37 * v6;
    goto LABEL_15;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v6 = *v4++ + 37 * v6;
    goto LABEL_14;
  }
LABEL_20:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 40), a2, (unsigned __int64)v4, v7);
  v10 = 0LL;
LABEL_21:
  v11 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v12 = v11 & v6;
  if ( v10 )
    goto LABEL_24;
  v13 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v13 )
  {
    v37 = v11 & v6;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v37)
           + 37
           * (BYTE5(v37)
            + 37
            * (BYTE4(v37)
             + 37 * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v12 + 11623883)))))))
          + HIBYTE(v37)) & (unsigned int)(v13 - 1));
LABEL_24:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v10 + 8)) )
      {
        if ( !v10 )
          break;
        if ( RtlpStackDbSegmentComparitor(v10, v3) )
        {
          v14 = v10 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) != 0);
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
          return v14;
        }
        goto LABEL_21;
      }
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
  v15 = (_QWORD *)(a1 + 64);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *v3 + 24, *(_QWORD *)(a1 + 64));
  if ( !v16 )
    return 0LL;
  *(_OWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_DWORD *)(v16 + 16) = 1;
  *(_BYTE *)(v16 + 19) = *(_BYTE *)v3;
  *(_QWORD *)(v16 + 8) = v6;
  memmove((void *)(v16 + 24), *((const void **)v3 + 1), 8LL * *v3);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  v17 = 0LL;
LABEL_32:
  v18 = v6 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
  if ( v17 )
    goto LABEL_35;
  v19 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v19 )
  {
    v17 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v18)
           + 37
           * (BYTE5(v18)
            + 37
            * (BYTE4(v18)
             + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v18)) & (unsigned int)(v19 - 1));
LABEL_35:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v18 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        if ( RtlpStackDbSegmentComparitor(v17, v3) )
        {
          v14 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v17 + 16)) != 0);
          goto LABEL_63;
        }
        goto LABEL_32;
      }
    }
  }
  v20 = *v15;
  v40 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
  v21 = *(_DWORD *)(a1 + 4);
  v22 = 2 * (v21 >> 5);
  v39 = *v15;
  if ( *(_DWORD *)a1 < (unsigned int)v22 )
    goto LABEL_62;
  if ( (unsigned int)v22 < 4 )
    v22 = 4LL;
  v23 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v22, v20);
  v24 = v23;
  if ( v23 )
  {
    if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
    {
      v25 = -1;
      do
      {
        ++v25;
        LODWORD(v22) = (unsigned int)v22 >> 1;
      }
      while ( (_DWORD)v22 );
      v22 = (unsigned int)(1 << v25);
    }
    if ( (unsigned int)v22 > 0x4000000 )
      v22 = 0x4000000LL;
    v26 = (unsigned int)v22;
    if ( v23 > &v23[8 * v22] )
      v26 = 0LL;
    if ( v26 )
      memset64(v23, a1 | 1, v26);
    v27 = 0;
    v28 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v29 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v30 = *(_QWORD **)(v29 + 8LL * v27);
          if ( ((unsigned __int8)v30 & 1) != 0 )
            break;
          *(_QWORD *)(v29 + 8LL * v27) = *v30;
          v38 = v28 & v30[1];
          v31 = (37
               * (BYTE6(v38)
                + 37
                * (BYTE5(v38)
                 + 37
                 * (BYTE4(v38)
                  + 37 * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
               + HIBYTE(v38)) & (unsigned int)(v22 - 1);
          *v30 = *(_QWORD *)&v23[8 * v31];
          *(_QWORD *)&v23[8 * v31] = v30;
        }
        ++v27;
      }
      while ( v27 < *(_DWORD *)(a1 + 4) >> 5 );
      v20 = v39;
    }
    v32 = *(_QWORD *)(a1 + 8);
    v21 = (32 * v22) | *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v24;
    *(_DWORD *)(a1 + 4) = v21;
    if ( v32 )
    {
      v40(v32, v20);
      v21 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_62;
  }
  v21 = *(_DWORD *)(a1 + 4);
  if ( v21 >= 0x20 )
  {
LABEL_62:
    v36 = *(_QWORD *)(v16 + 8) & (-1LL << (v21 & 0x1F));
    v14 = v16;
    v33 = *(_QWORD *)(a1 + 8);
    v34 = (37
         * (BYTE6(v36)
          + 37
          * (BYTE5(v36)
           + 37
           * (BYTE4(v36)
            + 37 * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v36 + 11623883)))))))
         + HIBYTE(v36)) & ((v21 >> 5) - 1);
    *(_QWORD *)v16 = *(_QWORD *)(v33 + 8 * v34);
    *(_QWORD *)(v33 + 8 * v34) = v16;
    v16 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_63;
  }
  v14 = 0LL;
LABEL_63:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  if ( v16 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v16, *v15);
  return v14;
}
