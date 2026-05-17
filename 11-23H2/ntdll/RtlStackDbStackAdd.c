/*
 * XREFs of RtlStackDbStackAdd @ 0x18012D728
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x180116E80 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x18012DE68 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18012DEF4 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x18012E0BC (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x18012E908 (RtlpStackDbStackComparitor.c)
 */

__int64 __fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // r10
  __int64 v7; // rdi
  signed __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  volatile signed __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rsi
  char *v22; // r8
  char v23; // cl
  unsigned __int64 v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // r10
  __int64 v27; // r15
  _QWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v34; // [rsp+20h] [rbp-30h]
  void (__fastcall *v35)(__int64, __int64); // [rsp+28h] [rbp-28h]
  __int64 v36; // [rsp+28h] [rbp-28h]
  unsigned int v37; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-10h]
  __int64 v39; // [rsp+90h] [rbp+40h]
  __int64 v40; // [rsp+90h] [rbp+40h]
  _QWORD *v41; // [rsp+A8h] [rbp+58h]

  v3 = 0LL;
  v4 = (unsigned __int8 *)a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v6 = a3;
  v37 = a3;
  v7 = 314159LL;
  v38 = a2;
  v8 = 8LL * a3;
  if ( (unsigned __int64)v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v6;
    do
    {
      a2 = v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7)))));
      v9 = v4[6] + 37 * a2;
      v10 = v4[7];
      v4 += 8;
      v7 = v10 + 37 * v9;
      --v6;
    }
    while ( v6 );
  }
  if ( v8 >= 1 && v8 <= 7 )
  {
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_22:
      v7 = *v4 + 37 * v7;
      goto LABEL_23;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_21:
      v7 = *v4++ + 37 * v7;
      goto LABEL_22;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_20:
      v7 = *v4++ + 37 * v7;
      goto LABEL_21;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_19:
      v7 = *v4++ + 37 * v7;
      goto LABEL_20;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_18:
      v7 = *v4++ + 37 * v7;
      goto LABEL_19;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_17:
      v7 = *v4++ + 37 * v7;
      goto LABEL_18;
    }
    if ( (_DWORD)v8 == 1 )
    {
      v7 = *v4++ + 37 * v7;
      goto LABEL_17;
    }
  }
LABEL_23:
  v11 = (volatile signed __int64 *)(a1 + 32);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32), a2, v8, (unsigned __int64)v4);
  v12 = 0LL;
LABEL_24:
  v13 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v14 = v13 & v7;
  if ( v12 )
    goto LABEL_27;
  v15 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v15 )
  {
    v39 = v13 & v7;
    v12 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v39)
           + 37
           * (BYTE5(v39)
            + 37
            * (BYTE4(v39)
             + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v14 + 11623883)))))))
          + HIBYTE(v39)) & (unsigned int)(v15 - 1));
LABEL_27:
    while ( 1 )
    {
      v12 = *(_QWORD *)v12;
      if ( (v12 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v12 + 8)) )
      {
        if ( !v12 )
          break;
        if ( (unsigned int)RtlpStackDbStackComparitor(v12, &v37) )
        {
          v3 = v12 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v12 + 16) != 0);
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
          return v3;
        }
        goto LABEL_24;
      }
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  v41 = (_QWORD *)RtlpStackDbEntryCreate(a1, &v37, v7);
  if ( v41 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
    v16 = 0LL;
LABEL_34:
    v17 = v7 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
    if ( v16 )
      goto LABEL_37;
    v18 = *(_DWORD *)(a1 + 20) >> 5;
    if ( v18 )
    {
      v16 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((37
            * (BYTE6(v17)
             + 37
             * (BYTE5(v17)
              + 37
              * (BYTE4(v17)
               + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
            + HIBYTE(v17)) & (unsigned int)(v18 - 1));
LABEL_37:
      while ( 1 )
      {
        v16 = *(_QWORD *)v16;
        if ( (v16 & 1) != 0 )
          break;
        if ( v17 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        {
          if ( !v16 )
            break;
          if ( (unsigned int)RtlpStackDbStackComparitor(v16, &v37) )
          {
            v3 = v16 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v16 + 16) != 0);
            goto LABEL_66;
          }
          goto LABEL_34;
        }
      }
    }
    v19 = a1 + 16;
    v35 = *(void (__fastcall **)(__int64, __int64))(a1 + 56);
    v20 = *(_DWORD *)(a1 + 20);
    v21 = 2 * (v20 >> 5);
    v34 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v21 )
    {
      if ( (unsigned int)v21 < 4 )
        v21 = 4LL;
      v22 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v21);
      if ( v22 )
      {
        if ( (((_DWORD)v21 - 1) & (unsigned int)v21) != 0 )
        {
          v23 = -1;
          do
          {
            ++v23;
            LODWORD(v21) = (unsigned int)v21 >> 1;
          }
          while ( (_DWORD)v21 );
          v21 = (unsigned int)(1 << v23);
        }
        if ( (unsigned int)v21 > 0x4000000 )
          v21 = 0x4000000LL;
        v24 = (unsigned int)v21;
        if ( v22 > &v22[8 * v21] )
          v24 = 0LL;
        if ( v24 )
          memset64(v22, v19 | 1, v24);
        v25 = 0;
        v26 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v27 = *(_QWORD *)(v19 + 8);
            while ( 1 )
            {
              v28 = *(_QWORD **)(v27 + 8LL * v25);
              if ( ((unsigned __int8)v28 & 1) != 0 )
                break;
              *(_QWORD *)(v27 + 8LL * v25) = *v28;
              v40 = v26 & v28[1];
              v29 = (37
                   * (BYTE6(v40)
                    + 37
                    * (BYTE5(v40)
                     + 37
                     * (BYTE4(v40)
                      + 37
                      * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                   + HIBYTE(v40)) & (unsigned int)(v21 - 1);
              *v28 = *(_QWORD *)&v22[8 * v29];
              *(_QWORD *)&v22[8 * v29] = v28;
            }
            ++v25;
          }
          while ( v25 < *(_DWORD *)(v19 + 4) >> 5 );
        }
        v30 = *(_QWORD *)(v19 + 8);
        v20 = (32 * v21) | *(_DWORD *)(v19 + 4) & 0x1F;
        *(_QWORD *)(v19 + 8) = v22;
        *(_DWORD *)(v19 + 4) = v20;
        if ( v30 )
        {
          v35(v30, v34);
          v20 = *(_DWORD *)(v19 + 4);
        }
      }
      else
      {
        v20 = *(_DWORD *)(a1 + 20);
        if ( v20 < 0x20 )
        {
LABEL_66:
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
          RtlpStackDbEntryCleanup(a1, v41);
          return v3;
        }
      }
    }
    v3 = (__int64)v41;
    v36 = v41[1] & (-1LL << (v20 & 0x1F));
    v31 = *(_QWORD *)(v19 + 8);
    v32 = (37
         * (BYTE6(v36)
          + 37
          * (BYTE5(v36)
           + 37
           * (BYTE4(v36)
            + 37 * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v36 + 11623883)))))))
         + HIBYTE(v36)) & ((v20 >> 5) - 1);
    *v41 = *(_QWORD *)(v31 + 8 * v32);
    *(_QWORD *)(v31 + 8 * v32) = v41;
    ++*(_DWORD *)v19;
    RtlReleaseSRWLockExclusive(v11);
  }
  return v3;
}
