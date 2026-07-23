/*
 * XREFs of RtlStackDbStackAdd @ 0x1801275E4
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x180127D30 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x180127DBC (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x180127F80 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x1801287B8 (RtlpStackDbStackComparitor.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rsi
  __int64 v18; // r10
  __int64 v19; // r9
  int v20; // r8d
  _QWORD *v21; // r13
  __int64 v22; // r9
  int v23; // r8d
  unsigned __int64 v24; // rsi
  unsigned int v25; // edx
  __int64 v26; // rbx
  char *v27; // rax
  _QWORD *v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // edi
  __int64 v33; // r10
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v40; // [rsp+20h] [rbp-20h]
  void (__fastcall *v41)(__int64, __int64, char *, _QWORD *); // [rsp+28h] [rbp-18h]
  unsigned int v42; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 *v43; // [rsp+38h] [rbp-8h]
  __int64 v44; // [rsp+80h] [rbp+40h]
  __int64 v45; // [rsp+80h] [rbp+40h]
  __int64 v46; // [rsp+80h] [rbp+40h]
  __int64 v47; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  if ( !a1 || !a3 || !a2 )
    return (_QWORD *)v3;
  v6 = a3;
  v7 = 314159LL;
  v42 = a3;
  v43 = a2;
  v8 = 8LL * a3;
  if ( (unsigned __int64)v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v6;
    do
    {
      v9 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7))))));
      v10 = v4[7];
      v4 += 8;
      v7 = v10 + 37 * v9;
      --v6;
    }
    while ( v6 );
  }
  if ( v8 >= 1 && v8 <= 7 )
  {
    v11 = v8 - 1;
    if ( !v11 )
    {
LABEL_22:
      v7 = *v4 + 37 * v7;
      goto LABEL_23;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_21:
      v7 = *v4++ + 37 * v7;
      goto LABEL_22;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
LABEL_20:
      v7 = *v4++ + 37 * v7;
      goto LABEL_21;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
LABEL_19:
      v7 = *v4++ + 37 * v7;
      goto LABEL_20;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
LABEL_18:
      v7 = *v4++ + 37 * v7;
      goto LABEL_19;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
LABEL_17:
      v7 = *v4++ + 37 * v7;
      goto LABEL_18;
    }
    if ( v16 == 1 )
    {
      v7 = *v4++ + 37 * v7;
      goto LABEL_17;
    }
  }
LABEL_23:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v17 = 0LL;
LABEL_24:
  v18 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v19 = v18 & v7;
  if ( v17 )
    goto LABEL_27;
  v20 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v20 )
  {
    v44 = v18 & v7;
    v17 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v44)
           + 37
           * (BYTE5(v44)
            + 37
            * (BYTE4(v44)
             + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v44)) & (unsigned int)(v20 - 1));
LABEL_27:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        if ( (unsigned int)RtlpStackDbStackComparitor(v17, &v42) )
        {
          v3 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v17 + 16) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
          return (_QWORD *)v3;
        }
        goto LABEL_24;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v47 = RtlpStackDbEntryCreate(a1, &v42, v7);
  v21 = (_QWORD *)v47;
  if ( v47 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
LABEL_34:
    v22 = v7 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
    if ( v3 )
      goto LABEL_37;
    v23 = *(_DWORD *)(a1 + 20) >> 5;
    if ( v23 )
    {
      v3 = *(_QWORD *)(a1 + 24)
         + 8LL
         * ((37
           * (BYTE6(v22)
            + 37
            * (BYTE5(v22)
             + 37
             * (BYTE4(v22)
              + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
           + HIBYTE(v22)) & (unsigned int)(v23 - 1));
LABEL_37:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v22 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v3 + 8)) )
        {
          if ( !v3 )
            break;
          if ( (unsigned int)RtlpStackDbStackComparitor(v3, &v42) )
          {
            if ( !(unsigned int)RtlpStackDbRefCountIncrement(v3 + 16) )
              v3 = 0LL;
            goto LABEL_69;
          }
          goto LABEL_34;
        }
      }
    }
    v24 = a1 + 16;
    v25 = *(_DWORD *)(a1 + 20);
    v26 = 2 * (v25 >> 5);
    v40 = *(_QWORD *)(a1 + 64);
    v41 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
    if ( *(_DWORD *)(a1 + 16) < (unsigned int)v26 )
      goto LABEL_65;
    if ( (unsigned int)v26 < 4 )
      v26 = 4LL;
    v27 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(8LL * (unsigned int)v26, *(_QWORD *)(a1 + 64));
    v28 = 0LL;
    if ( v27 )
    {
      if ( (((_DWORD)v26 - 1) & (unsigned int)v26) != 0 )
      {
        v29 = -1;
        do
        {
          ++v29;
          LODWORD(v26) = (unsigned int)v26 >> 1;
        }
        while ( (_DWORD)v26 );
        v26 = (unsigned int)(1 << v29);
      }
      if ( (unsigned int)v26 > 0x4000000 )
        v26 = 0x4000000LL;
      v30 = (unsigned int)v26;
      if ( v27 > &v27[8 * v26] )
        v30 = 0LL;
      if ( v30 )
        memset64(v27, v24 | 1, v30);
      v31 = *(_DWORD *)(a1 + 20);
      v32 = 0;
      v33 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
      if ( (v31 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v34 = *(_QWORD *)(a1 + 24);
          while ( 1 )
          {
            v28 = *(_QWORD **)(v34 + 8LL * v32);
            if ( ((unsigned __int8)v28 & 1) != 0 )
              break;
            *(_QWORD *)(v34 + 8LL * v32) = *v28;
            v45 = v33 & v28[1];
            v35 = (37
                 * (BYTE6(v45)
                  + 37
                  * (BYTE5(v45)
                   + 37
                   * (BYTE4(v45)
                    + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
                 + HIBYTE(v45)) & (unsigned int)(v26 - 1);
            *v28 = *(_QWORD *)&v27[8 * v35];
            *(_QWORD *)&v27[8 * v35] = v28;
          }
          v31 = *(_DWORD *)(a1 + 20);
          ++v32;
        }
        while ( v32 < v31 >> 5 );
        v21 = (_QWORD *)v47;
      }
      v36 = *(_QWORD *)(a1 + 24);
      v25 = (32 * v26) | v31 & 0x1F;
      *(_QWORD *)(a1 + 24) = v27;
      *(_DWORD *)(a1 + 20) = v25;
      if ( v36 )
      {
        v41(v36, v40, v27, v28);
        v25 = *(_DWORD *)(a1 + 20);
      }
      goto LABEL_65;
    }
    v25 = *(_DWORD *)(a1 + 20);
    if ( v25 >= 0x20 )
    {
LABEL_65:
      v46 = v21[1] & (-1LL << (v25 & 0x1F));
      v37 = *(_QWORD *)(a1 + 24);
      v38 = (37
           * (BYTE6(v46)
            + 37
            * (BYTE5(v46)
             + 37
             * (BYTE4(v46)
              + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
           + HIBYTE(v46)) & ((v25 >> 5) - 1);
      *v21 = *(_QWORD *)(v37 + 8 * v38);
      *(_QWORD *)(v37 + 8 * v38) = v21;
      ++*(_DWORD *)v24;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
      return v21;
    }
    v3 = 0LL;
LABEL_69:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    RtlpStackDbEntryCleanup(a1, v47);
  }
  return (_QWORD *)v3;
}
