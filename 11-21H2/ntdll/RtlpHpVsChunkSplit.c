/*
 * XREFs of RtlpHpVsChunkSplit @ 0x180019AF0
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x180019520 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextGrowInPlace @ 0x18002F118 (RtlpHpVsContextGrowInPlace.c)
 * Callees:
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800159B8 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkRemove @ 0x18001C9FC (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180056FF0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180076138 (RtlpHpVsFreeChunkInsert.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180120C80 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _QWORD *a6)
{
  __int64 v7; // r12
  unsigned int v9; // r15d
  unsigned __int64 v11; // rdi
  unsigned int v12; // r10d
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  int v20; // r11d
  int v21; // eax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 i; // r9
  __int64 v28; // r10
  __int64 v29; // rbx
  unsigned int v30; // r15d
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned __int16 v33; // dx
  unsigned int v34; // r8d
  __int64 v35; // r10
  unsigned __int64 v36; // r11
  unsigned int v37; // r9d
  unsigned int v38; // r10d
  __int16 v39; // r11
  unsigned int v40; // r8d
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int8 v45; // al
  int v47; // r9d
  unsigned __int64 v48; // rax
  unsigned int v49; // edx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  int v57; // r15d
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // [rsp+30h] [rbp-58h]
  __int64 v65; // [rsp+38h] [rbp-50h]
  int v66; // [rsp+40h] [rbp-48h]
  __int64 v67; // [rsp+48h] [rbp-40h]
  __int64 v68; // [rsp+48h] [rbp-40h]
  unsigned int v69; // [rsp+48h] [rbp-40h]
  unsigned __int64 v70; // [rsp+48h] [rbp-40h]
  __int64 v71; // [rsp+48h] [rbp-40h]
  __int64 v72; // [rsp+90h] [rbp+8h]
  int v73; // [rsp+98h] [rbp+10h]
  unsigned int v74; // [rsp+A8h] [rbp+20h]
  int v75; // [rsp+A8h] [rbp+20h]
  unsigned int v76; // [rsp+A8h] [rbp+20h]

  v74 = a4;
  v7 = a4;
  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode(a1 + 16, a3 + 8);
  v11 = 0LL;
  v12 = a3 - a2;
  v14 = (a3 - a2 + 4127) & 0xFFFFF000;
  v15 = ((a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16)) - a2) & 0xFFFFF000) - v14;
  if ( v14 >= (((_DWORD)a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16)) - (_DWORD)a2) & 0xFFFFF000) )
    v15 = 0;
  v13 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16));
  *(_QWORD *)(a1 + 56) -= (unsigned int)((v13 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                        + (v15 >> 12)
                        - (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)a3 ^ a3)
                        - (unsigned int)((unsigned __int64)(v13 + 4095) >> 12);
  v16 = v9 - v7;
  if ( v16 && (*(_BYTE *)(a1 + 176) & 1) != 0 )
  {
    v61 = (((a3 + 16 * v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16 * v7)) >> 4;
    v62 = 16 * v61;
    if ( (unsigned int)(16 * v61) >= 0x20 )
    {
      if ( (v62 & 0xFFFFFFC0) != 0 || v62 == 32 )
        goto LABEL_5;
      LODWORD(v7) = v7 + 1;
      --v16;
    }
    else
    {
      LODWORD(v7) = v61 + v7;
      v16 -= v61;
    }
    v74 = v7;
  }
LABEL_5:
  v17 = v16 + v7;
  v18 = 0LL;
  if ( 16 * v16 >= 0x20 )
  {
    v17 = v74;
    v18 = v16;
  }
  v19 = v12 >> 12;
  v75 = v18;
  HIDWORD(v72) = HIDWORD(v72) & 0xFF00FFFF | 0x10000;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v72);
  v20 = (unsigned __int8)(a3 ^ RtlpHpHeapGlobals ^ v19);
  v21 = 16 * v17 + 32;
  *(_DWORD *)(a3 + 8) = v20;
  if ( !(_DWORD)v18 )
    v21 = 16 * v17;
  v22 = (-1LL << v19) & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v21 + v12 - 1) >> 12)));
  v23 = (v22 ^ *(_QWORD *)(a2 + 16)) & v22;
  if ( v23 )
  {
    *(_DWORD *)(a3 + 8) = v20 | 0x200;
    LOWORD(v73) = a5 & 1;
    if ( (a5 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(a6[1]);
      a6[1] = 0LL;
    }
    _BitScanForward64(&v55, v23);
    v70 = ((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    _BitScanReverse64(&v56, v23);
    v66 = v55;
    LODWORD(v65) = v56;
    LODWORD(v64) = v55;
    v57 = v56 - v55 + 1;
    LODWORD(v72) = v57;
    RtlAcquireSRWLockExclusive(a2 + 24, 0x3333333333333333uLL, v19, v18);
    if ( ((int (__fastcall *)(unsigned __int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
           a1 ^ *(_QWORD *)(a1 + 128),
           a2 + (unsigned int)(v66 << 12),
           (unsigned int)(v57 << 12)) < 0 )
    {
      v75 += v17;
      v17 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) |= ((1LL << v57) - 1) << v66;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(a1 + 48),
        (0x101010101010101LL * ((v70 + (v70 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
    }
    RtlReleaseSRWLockExclusive(a2 + 24);
    if ( (a5 & 1) == 0 )
    {
      *a6 = 0LL;
      a6[2] = 0LL;
      a6[1] = a1;
      RtlAcquireSRWLockExclusive(a1, v58, v59, v60);
    }
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    LODWORD(v18) = v75;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ v17 ^ WORD1(a3);
  if ( (_DWORD)v18 )
  {
    v24 = 16LL * v17 + a3;
    if ( v17 )
      LOWORD(v25) = v17;
    else
      v25 = (RtlpHpHeapGlobals ^ *(_QWORD *)v24 ^ v24) >> 32;
    *(_QWORD *)v24 = RtlpHpHeapGlobals ^ v24 ^ ((unsigned int)((_DWORD)v18 << 16) | (((unsigned __int16)v25 | 0x10000LL) << 32));
    *(_DWORD *)(v24 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v24 ^ ((unsigned int)(v24 - a2) >> 12));
    v26 = v24 + 16LL * (unsigned int)v18;
    if ( v26 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      HIDWORD(v72) ^= (unsigned __int16)(v18 ^ WORD2(v72));
      *(_WORD *)(v26 + 4) = WORD2(v26) ^ WORD2(RtlpHpHeapGlobals) ^ WORD2(v72);
    }
    for ( i = 0LL; ; i = v30 )
    {
      v28 = a2 + 48;
      v76 = i;
      HIDWORD(v72) &= 0xFF00FFFF;
      v29 = RtlpHpHeapGlobals ^ v24 ^ *(_QWORD *)v24;
      v30 = ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v24 ^ *(_DWORD *)v24) >> 16;
      v72 ^= RtlpHpHeapGlobals ^ v24;
      *(_BYTE *)(v24 + 6) = BYTE6(v72);
      if ( WORD2(v29) )
      {
        v67 = RtlpHpHeapGlobals ^ (v24 - 16LL * WORD2(v29)) ^ *(_QWORD *)(v24 - 16LL * WORD2(v29));
        if ( (v67 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v24 - 16LL * WORD2(v29), i);
          v28 = a2 + 48;
          v24 -= 16LL * WORD2(v29);
          i = v76;
          v30 += WORD1(v67);
        }
      }
      v31 = *(unsigned __int16 *)(a2 + 32);
      v32 = v24 + 16LL * v30;
      if ( v32 < v28 + 16 * v31 )
      {
        v68 = RtlpHpHeapGlobals ^ v32 ^ *(_QWORD *)v32;
        if ( (v68 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v32, i);
          v28 = a2 + 48;
          v31 = *(unsigned __int16 *)(a2 + 32);
          i = v76;
          v30 += WORD1(v68);
        }
      }
      v33 = v31;
      if ( (*(_BYTE *)(a1 + 176) & 1) != 0 )
      {
        v32 = v24 + 16LL * v30;
        if ( v32 < v28 + 16 * (unsigned __int64)(unsigned __int16)v31 )
        {
          v71 = RtlpHpHeapGlobals ^ v32 ^ *(_QWORD *)v32;
          if ( (v71 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(a1, a2, v32, i);
            v28 = a2 + 48;
            v33 = *(_WORD *)(a2 + 32);
            i = v76;
            v30 += WORD1(v71);
          }
        }
      }
      if ( WORD1(v29) != v30 )
      {
        v31 = (v30 << 16) | (unsigned __int16)v73;
        v32 = v24 + 16LL * v30;
        v73 = RtlpHpHeapGlobals ^ v24 ^ ((v30 << 16) | (unsigned __int16)v73);
        *(_WORD *)(v24 + 2) = HIWORD(v73);
        v33 = *(_WORD *)(a2 + 32);
        if ( v32 < v28 + 16 * (unsigned __int64)v33 )
        {
          v31 = (unsigned int)(unsigned __int16)(v30 ^ WORD2(v65)) ^ HIDWORD(v65);
          HIDWORD(v65) ^= (unsigned __int16)(v30 ^ WORD2(v65));
          v65 ^= RtlpHpHeapGlobals ^ v32;
          *(_WORD *)(v32 + 4) = WORD2(v65);
          v33 = *(_WORD *)(a2 + 32);
        }
      }
      if ( v30 == v33 )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2, v32, i);
        return v17;
      }
      if ( v30 <= (unsigned int)i )
        break;
      i = ((_DWORD)v24 - (_DWORD)a2 + 4127) & 0xFFFFF000;
      v34 = (v24 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - a2) & 0xFFFFF000;
      if ( (unsigned int)i >= v34 )
        break;
      v49 = v34 - i;
      i = (unsigned int)i >> 12;
      v31 = (unsigned __int8)i;
      v50 = *(_QWORD *)(a2 + 16) & (-1LL << i) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                          - (unsigned __int8)((unsigned __int64)(v34 - 1) >> 12)));
      if ( v49 < 0x1000 )
        break;
      if ( !v50 )
        break;
      v31 = (0x101010101010101LL
           * ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v50 - ((v50 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v50 - ((v50 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v69 = v31;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_BYTE *)(a1 + 176) & 2) == 0 )
      {
        v51 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v51 <= 8 )
          v51 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v31 <= v51 )
          break;
      }
      HIDWORD(v64) = HIDWORD(v64) & 0xFF00FFFF | 0x10000;
      v64 ^= RtlpHpHeapGlobals ^ v24;
      *(_BYTE *)(v24 + 6) = BYTE6(v64);
      *(_DWORD *)(v24 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v24 ^ ((unsigned int)(v24 - a2) >> 12)) | 0x200;
      if ( (a5 & 1) != 0 )
      {
        RtlpHpVsSubsegmentCommitPages(a1, a2, v50, v31, 0);
      }
      else
      {
        RtlReleaseSRWLockExclusive(a6[1]);
        a6[1] = 0LL;
        RtlpHpVsSubsegmentCommitPages(a1, a2, v50, v69, 0);
        *a6 = 0LL;
        a6[2] = 0LL;
        a6[1] = a1;
        RtlAcquireSRWLockExclusive(a1, v52, v53, v54);
      }
      *(_DWORD *)(v24 + 8) &= ~0x200u;
    }
    if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v24 + 32) & 0xFFF) != 0 )
    {
      v63 = RtlpHpVsChunkAlignSplit(v31, a2, v24, i);
      if ( v63 )
        RtlpHpVsFreeChunkInsert(a1, a2, v63);
    }
    v35 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2));
    v36 = v35 + (v24 & 0xFFF) + 4095;
    v37 = (v24 - a2 + 4127) & 0xFFFFF000;
    v38 = (v24 + v35 - a2) & 0xFFFFF000;
    v39 = (v36 >> 12)
        - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2))) + 4095) >> 12);
    if ( v37 < v38 )
    {
      v40 = v38 - v37;
      v41 = *(_QWORD *)(a2 + 16) & (-1LL << (v37 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v38 - 1) >> 12)));
    }
    else
    {
      v40 = 0;
      v41 = 0LL;
    }
    v42 = ((v41 - ((v41 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v41 - ((v41 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL * ((v42 + (v42 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v24 = RtlpHpHeapGlobals ^ v24 ^ (v39
                                             + (v40 >> 12)
                                             - ((0x101010101010101LL * ((v42 + (v42 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v43 = *(_QWORD *)(a1 + 24);
    v44 = *(_QWORD *)(a1 + 16);
    if ( (v43 & 1) != 0 )
    {
      if ( !v44 )
      {
LABEL_32:
        v45 = 0;
        goto LABEL_33;
      }
      v44 ^= a1 + 16;
    }
    v11 = v44;
    v47 = v43 & 1;
    v45 = 0;
    if ( v44 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v24 ^ (unsigned int)v24) >= (*(_DWORD *)(v11 - 8) ^ (unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v11 - 8)) )
        {
          v48 = *(_QWORD *)(v11 + 8);
          if ( v47 )
          {
            if ( !v48 )
              goto LABEL_47;
            v48 ^= v11;
          }
          if ( !v48 )
          {
LABEL_47:
            v45 = 1;
            break;
          }
        }
        else
        {
          v48 = *(_QWORD *)v11;
          if ( v47 )
          {
            if ( !v48 )
              goto LABEL_32;
            v48 ^= v11;
          }
          if ( !v48 )
            goto LABEL_32;
        }
        v11 = v48;
      }
    }
LABEL_33:
    RtlRbInsertNodeEx(a1 + 16, v11, v45, v24 + 8);
  }
  return v17;
}
