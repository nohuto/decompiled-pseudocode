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
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  _QWORD *v24; // r13
  __int64 v25; // r9
  int v26; // r8d
  unsigned __int64 v27; // rsi
  unsigned int v28; // edx
  __int64 v29; // rbx
  char *v30; // rax
  _QWORD *v31; // r9
  char v32; // cl
  unsigned __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // edi
  __int64 v36; // r10
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v43; // [rsp+20h] [rbp-20h]
  void (__fastcall *v44)(__int64, __int64, char *, _QWORD *); // [rsp+28h] [rbp-18h]
  unsigned int v45; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 *v46; // [rsp+38h] [rbp-8h]
  __int64 v47; // [rsp+80h] [rbp+40h]
  __int64 v48; // [rsp+80h] [rbp+40h]
  __int64 v49; // [rsp+80h] [rbp+40h]
  __int64 v50; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  if ( !a1 || !a3 || !a2 )
    return (_QWORD *)v3;
  v6 = a3;
  v7 = 314159LL;
  v45 = a3;
  v46 = a2;
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
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32));
  v17 = 0LL;
LABEL_24:
  v18 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v19 = v18 & v7;
  if ( v17 )
    goto LABEL_27;
  v20 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v20 )
  {
    v47 = v18 & v7;
    v17 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v47)
           + 37
           * (BYTE5(v47)
            + 37
            * (BYTE4(v47)
             + 37 * (BYTE3(v47) + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v47)) & (unsigned int)(v20 - 1));
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
        if ( (unsigned int)RtlpStackDbStackComparitor(v17, &v45) )
        {
          v3 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v17 + 16) != 0);
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
          return (_QWORD *)v3;
        }
        goto LABEL_24;
      }
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  v50 = RtlpStackDbEntryCreate(a1, &v45, v7);
  v24 = (_QWORD *)v50;
  if ( v50 )
  {
    RtlAcquireSRWLockExclusive(a1 + 32, v21, v22, v23);
LABEL_34:
    v25 = v7 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
    if ( v3 )
      goto LABEL_37;
    v26 = *(_DWORD *)(a1 + 20) >> 5;
    if ( v26 )
    {
      v3 = *(_QWORD *)(a1 + 24)
         + 8LL
         * ((37
           * (BYTE6(v25)
            + 37
            * (BYTE5(v25)
             + 37
             * (BYTE4(v25)
              + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
           + HIBYTE(v25)) & (unsigned int)(v26 - 1));
LABEL_37:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v25 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v3 + 8)) )
        {
          if ( !v3 )
            break;
          if ( (unsigned int)RtlpStackDbStackComparitor(v3, &v45) )
          {
            if ( !(unsigned int)RtlpStackDbRefCountIncrement(v3 + 16) )
              v3 = 0LL;
            goto LABEL_69;
          }
          goto LABEL_34;
        }
      }
    }
    v27 = a1 + 16;
    v28 = *(_DWORD *)(a1 + 20);
    v29 = 2 * (v28 >> 5);
    v43 = *(_QWORD *)(a1 + 64);
    v44 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
    if ( *(_DWORD *)(a1 + 16) < (unsigned int)v29 )
      goto LABEL_65;
    if ( (unsigned int)v29 < 4 )
      v29 = 4LL;
    v30 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(8LL * (unsigned int)v29, *(_QWORD *)(a1 + 64));
    v31 = 0LL;
    if ( v30 )
    {
      if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
      {
        v32 = -1;
        do
        {
          ++v32;
          LODWORD(v29) = (unsigned int)v29 >> 1;
        }
        while ( (_DWORD)v29 );
        v29 = (unsigned int)(1 << v32);
      }
      if ( (unsigned int)v29 > 0x4000000 )
        v29 = 0x4000000LL;
      v33 = (unsigned int)v29;
      if ( v30 > &v30[8 * v29] )
        v33 = 0LL;
      if ( v33 )
        memset64(v30, v27 | 1, v33);
      v34 = *(_DWORD *)(a1 + 20);
      v35 = 0;
      v36 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
      if ( (v34 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v37 = *(_QWORD *)(a1 + 24);
          while ( 1 )
          {
            v31 = *(_QWORD **)(v37 + 8LL * v35);
            if ( ((unsigned __int8)v31 & 1) != 0 )
              break;
            *(_QWORD *)(v37 + 8LL * v35) = *v31;
            v48 = v36 & v31[1];
            v38 = (37
                 * (BYTE6(v48)
                  + 37
                  * (BYTE5(v48)
                   + 37
                   * (BYTE4(v48)
                    + 37 * (BYTE3(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v48 + 11623883)))))))
                 + HIBYTE(v48)) & (unsigned int)(v29 - 1);
            *v31 = *(_QWORD *)&v30[8 * v38];
            *(_QWORD *)&v30[8 * v38] = v31;
          }
          v34 = *(_DWORD *)(a1 + 20);
          ++v35;
        }
        while ( v35 < v34 >> 5 );
        v24 = (_QWORD *)v50;
      }
      v39 = *(_QWORD *)(a1 + 24);
      v28 = (32 * v29) | v34 & 0x1F;
      *(_QWORD *)(a1 + 24) = v30;
      *(_DWORD *)(a1 + 20) = v28;
      if ( v39 )
      {
        v44(v39, v43, v30, v31);
        v28 = *(_DWORD *)(a1 + 20);
      }
      goto LABEL_65;
    }
    v28 = *(_DWORD *)(a1 + 20);
    if ( v28 >= 0x20 )
    {
LABEL_65:
      v49 = v24[1] & (-1LL << (v28 & 0x1F));
      v40 = *(_QWORD *)(a1 + 24);
      v41 = (37
           * (BYTE6(v49)
            + 37
            * (BYTE5(v49)
             + 37
             * (BYTE4(v49)
              + 37 * (BYTE3(v49) + 37 * (BYTE2(v49) + 37 * (BYTE1(v49) + 37 * ((unsigned __int8)v49 + 11623883)))))))
           + HIBYTE(v49)) & ((v28 >> 5) - 1);
      *v24 = *(_QWORD *)(v40 + 8 * v41);
      *(_QWORD *)(v40 + 8 * v41) = v24;
      ++*(_DWORD *)v27;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
      return v24;
    }
    v3 = 0LL;
LABEL_69:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
    RtlpStackDbEntryCleanup(a1, v50);
  }
  return (_QWORD *)v3;
}
