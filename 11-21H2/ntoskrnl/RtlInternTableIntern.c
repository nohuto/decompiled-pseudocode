/*
 * XREFs of RtlInternTableIntern @ 0x140673F14
 * Callers:
 *     PopEtAppIdIntern @ 0x140673DD4 (PopEtAppIdIntern.c)
 *     PopEtStringIntern @ 0x140675BB8 (PopEtStringIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     RtlpInternEntryFind @ 0x140674264 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x1406743AC (RtlpInternEntryHash.c)
 *     RtlpInternEntryCreate @ 0x140674AA0 (RtlpInternEntryCreate.c)
 *     RtlpInternHashBucketsAllocate @ 0x1407FCCD8 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x1407FCD00 (RtlpInternHashBucketsFree.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  int v10; // ecx
  __int64 v12; // rdi
  _QWORD *v13; // r15
  unsigned int v14; // edx
  __int64 v15; // rsi
  char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  void (__fastcall *v19)(__int64, _QWORD *, __int64); // rax
  char v20; // cl
  unsigned __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // edi
  __int64 v24; // r10
  __int64 v25; // r12
  _QWORD *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+50h] [rbp+30h] BYREF

  *(_DWORD *)(a2 + 24) = 0;
  v31 = 0LL;
  v4 = RtlpInternEntryHash(a2, &v31);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1, v5);
  v6 = v31;
  v7 = RtlpInternEntryFind(a1, a2, v4, v31);
  LOBYTE(v8) = 1;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v7 )
  {
    v9(a1, v8);
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a1 + 24);
  v9(a1, v8);
  v13 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v4, v6);
  if ( !v13 )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
  if ( v12 == *(_QWORD *)(a1 + 24) || (v7 = RtlpInternEntryFind(a1, a2, v4, v6)) == 0 )
  {
    v14 = *(_DWORD *)(a1 + 4);
    v15 = 2 * (v14 >> 5);
    if ( *(_DWORD *)a1 >= (unsigned int)v15 )
    {
      if ( (unsigned int)v15 < 4 )
        v15 = 4LL;
      v16 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v15, a1);
      if ( v16 )
      {
        if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
        {
          v20 = -1;
          do
          {
            ++v20;
            LODWORD(v15) = (unsigned int)v15 >> 1;
          }
          while ( (_DWORD)v15 );
          v15 = (unsigned int)(1 << v20);
        }
        if ( (unsigned int)v15 > 0x4000000 )
          v15 = 0x4000000LL;
        v21 = (unsigned int)v15;
        if ( v16 > &v16[8 * v15] )
          v21 = 0LL;
        if ( v21 )
          memset64(v16, a1 | 1, v21);
        v22 = *(_DWORD *)(a1 + 4);
        v23 = 0;
        v24 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (v22 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v25 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v26 = *(_QWORD **)(v25 + 8LL * v23);
              if ( ((unsigned __int8)v26 & 1) != 0 )
                break;
              *(_QWORD *)(v25 + 8LL * v23) = *v26;
              v31 = v24 & v26[1];
              v27 = (37
                   * (BYTE6(v31)
                    + 37
                    * (BYTE5(v31)
                     + 37
                     * (BYTE4(v31)
                      + 37
                      * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                   + HIBYTE(v31)) & (unsigned int)(v15 - 1);
              *v26 = *(_QWORD *)&v16[8 * v27];
              *(_QWORD *)&v16[8 * v27] = v26;
            }
            v22 = *(_DWORD *)(a1 + 4);
            ++v23;
          }
          while ( v23 < v22 >> 5 );
        }
        v28 = *(_QWORD *)(a1 + 8);
        v14 = (32 * v15) | v22 & 0x1F;
        *(_QWORD *)(a1 + 8) = v16;
        *(_DWORD *)(a1 + 4) = v14;
        if ( v28 )
        {
          RtlpInternHashBucketsFree(v28, a1);
          v14 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 4);
        if ( v14 < 0x20 )
        {
          v7 = 0LL;
          goto LABEL_15;
        }
      }
    }
    v31 = v13[1] & (-1LL << (v14 & 0x1F));
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (37
         * (BYTE6(v31)
          + 37
          * (BYTE5(v31)
           + 37
           * (BYTE4(v31)
            + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
         + HIBYTE(v31)) & ((v14 >> 5) - 1);
    *v13 = *(_QWORD *)(v17 + 8 * v18);
    *(_QWORD *)(v17 + 8 * v18) = v13;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    v19 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)(a1 + 16) + 32LL);
    if ( v19 )
      v19(a1, v13, a2);
    v7 = (__int64)v13;
    v13 = 0LL;
LABEL_15:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
    if ( !v13 )
      goto LABEL_3;
    goto LABEL_37;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
LABEL_37:
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 16) + 8LL))(a1, v13);
LABEL_3:
  v10 = *(_DWORD *)(a2 + 24);
  if ( (v10 & 3) == 1 )
  {
    v29 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v30 = 0LL;
      do
      {
        v30 += 32LL;
        ++v29;
        *(_QWORD *)(v30 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v29 < *(_QWORD *)(a2 + 16) );
      v10 = *(_DWORD *)(a2 + 24);
    }
    *(_DWORD *)(a2 + 24) = v10 & 0xFFFFFFFE;
  }
  return v7;
}
