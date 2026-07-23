/*
 * XREFs of RtlStackDbStackAdd @ 0x18012C234
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1801159D0 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x18012C974 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18012CA00 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x18012CBC8 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x18012D414 (RtlpStackDbStackComparitor.c)
 */

__int64 __fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
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
  _RTL_SRWLOCK *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r10
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // rsi
  __int64 v23; // r9
  int v24; // r8d
  __int64 v25; // r14
  unsigned int v26; // eax
  __int64 v27; // rsi
  char *v28; // r8
  char v29; // cl
  unsigned __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // r10
  __int64 v33; // r15
  _QWORD *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v40; // [rsp+20h] [rbp-30h]
  void (__fastcall *v41)(__int64, __int64); // [rsp+28h] [rbp-28h]
  __int64 v42; // [rsp+28h] [rbp-28h]
  unsigned int v43; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int8 *v44; // [rsp+40h] [rbp-10h]
  __int64 v45; // [rsp+90h] [rbp+40h]
  __int64 v46; // [rsp+90h] [rbp+40h]
  _QWORD *v47; // [rsp+A8h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v6 = a3;
  v43 = a3;
  v7 = 314159LL;
  v44 = a2;
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
  v17 = (_RTL_SRWLOCK *)(a1 + 32);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v18 = 0LL;
LABEL_24:
  v19 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v20 = v19 & v7;
  if ( v18 )
    goto LABEL_27;
  v21 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v21 )
  {
    v45 = v19 & v7;
    v18 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v45)
           + 37
           * (BYTE5(v45)
            + 37
            * (BYTE4(v45)
             + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v20 + 11623883)))))))
          + HIBYTE(v45)) & (unsigned int)(v21 - 1));
LABEL_27:
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v20 == (v19 & *(_QWORD *)(v18 + 8)) )
      {
        if ( !v18 )
          break;
        if ( (unsigned int)RtlpStackDbStackComparitor(v18, &v43) )
        {
          v3 = v18 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v18 + 16) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
          return v3;
        }
        goto LABEL_24;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v47 = (_QWORD *)RtlpStackDbEntryCreate(a1, &v43, v7);
  if ( v47 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    v22 = 0LL;
LABEL_34:
    v23 = v7 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
    if ( v22 )
      goto LABEL_37;
    v24 = *(_DWORD *)(a1 + 20) >> 5;
    if ( v24 )
    {
      v22 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((37
            * (BYTE6(v23)
             + 37
             * (BYTE5(v23)
              + 37
              * (BYTE4(v23)
               + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
            + HIBYTE(v23)) & (unsigned int)(v24 - 1));
LABEL_37:
      while ( 1 )
      {
        v22 = *(_QWORD *)v22;
        if ( (v22 & 1) != 0 )
          break;
        if ( v23 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v22 + 8)) )
        {
          if ( !v22 )
            break;
          if ( (unsigned int)RtlpStackDbStackComparitor(v22, &v43) )
          {
            v3 = v22 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v22 + 16) != 0);
            goto LABEL_66;
          }
          goto LABEL_34;
        }
      }
    }
    v25 = a1 + 16;
    v41 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
    v26 = *(_DWORD *)(a1 + 20);
    v27 = 2 * (v26 >> 5);
    v40 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v27 )
    {
      if ( (unsigned int)v27 < 4 )
        v27 = 4LL;
      v28 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v27);
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
          memset64(v28, v25 | 1, v30);
        v31 = 0;
        v32 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v33 = *(_QWORD *)(v25 + 8);
            while ( 1 )
            {
              v34 = *(_QWORD **)(v33 + 8LL * v31);
              if ( ((unsigned __int8)v34 & 1) != 0 )
                break;
              *(_QWORD *)(v33 + 8LL * v31) = *v34;
              v46 = v32 & v34[1];
              v35 = (37
                   * (BYTE6(v46)
                    + 37
                    * (BYTE5(v46)
                     + 37
                     * (BYTE4(v46)
                      + 37
                      * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
                   + HIBYTE(v46)) & (unsigned int)(v27 - 1);
              *v34 = *(_QWORD *)&v28[8 * v35];
              *(_QWORD *)&v28[8 * v35] = v34;
            }
            ++v31;
          }
          while ( v31 < *(_DWORD *)(v25 + 4) >> 5 );
        }
        v36 = *(_QWORD *)(v25 + 8);
        v26 = (32 * v27) | *(_DWORD *)(v25 + 4) & 0x1F;
        *(_QWORD *)(v25 + 8) = v28;
        *(_DWORD *)(v25 + 4) = v26;
        if ( v36 )
        {
          v41(v36, v40);
          v26 = *(_DWORD *)(v25 + 4);
        }
      }
      else
      {
        v26 = *(_DWORD *)(a1 + 20);
        if ( v26 < 0x20 )
        {
LABEL_66:
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
          RtlpStackDbEntryCleanup(a1, v47);
          return v3;
        }
      }
    }
    v3 = (__int64)v47;
    v42 = v47[1] & (-1LL << (v26 & 0x1F));
    v37 = *(_QWORD *)(v25 + 8);
    v38 = (37
         * (BYTE6(v42)
          + 37
          * (BYTE5(v42)
           + 37
           * (BYTE4(v42)
            + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
         + HIBYTE(v42)) & ((v26 >> 5) - 1);
    *v47 = *(_QWORD *)(v37 + 8 * v38);
    *(_QWORD *)(v37 + 8 * v38) = v47;
    ++*(_DWORD *)v25;
    RtlReleaseSRWLockExclusive(v17);
  }
  return v3;
}
