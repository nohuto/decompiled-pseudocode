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

__int64 __fastcall RtlpHpVsChunkSplit(__int64 SRWLock, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
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
  unsigned int v18; // r9d
  int v19; // r11d
  int v20; // eax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 i; // r9
  __int64 v27; // r10
  __int64 v28; // rbx
  unsigned int v29; // r15d
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int16 v32; // dx
  unsigned int v33; // r8d
  __int64 v34; // r10
  unsigned __int64 v35; // r11
  unsigned int v36; // r9d
  unsigned int v37; // r10d
  __int16 v38; // r11
  unsigned int v39; // r8d
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  BOOLEAN v44; // al
  int v46; // r9d
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  int v53; // r15d
  unsigned __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // [rsp+30h] [rbp-58h]
  __int64 v58; // [rsp+38h] [rbp-50h]
  int v59; // [rsp+40h] [rbp-48h]
  __int64 v60; // [rsp+48h] [rbp-40h]
  __int64 v61; // [rsp+48h] [rbp-40h]
  unsigned int v62; // [rsp+48h] [rbp-40h]
  unsigned __int64 v63; // [rsp+48h] [rbp-40h]
  __int64 v64; // [rsp+48h] [rbp-40h]
  __int64 v65; // [rsp+90h] [rbp+8h]
  int v66; // [rsp+98h] [rbp+10h]
  unsigned int v67; // [rsp+A8h] [rbp+20h]
  unsigned int v68; // [rsp+A8h] [rbp+20h]
  unsigned int v69; // [rsp+A8h] [rbp+20h]

  v67 = a4;
  v7 = a4;
  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(SRWLock + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0LL;
  v12 = a3 - a2;
  v14 = (a3 - a2 + 4127) & 0xFFFFF000;
  v15 = ((a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16)) - a2) & 0xFFFFF000) - v14;
  if ( v14 >= (((_DWORD)a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16)) - (_DWORD)a2) & 0xFFFFF000) )
    v15 = 0;
  v13 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16));
  *(_QWORD *)(SRWLock + 56) -= (unsigned int)((v13 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                             + (v15 >> 12)
                             - (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)a3 ^ a3)
                             - (unsigned int)((unsigned __int64)(v13 + 4095) >> 12);
  v16 = v9 - v7;
  if ( v16 && (*(_BYTE *)(SRWLock + 176) & 1) != 0 )
  {
    v54 = (((a3 + 16 * v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16 * v7)) >> 4;
    v55 = 16 * v54;
    if ( (unsigned int)(16 * v54) >= 0x20 )
    {
      if ( (v55 & 0xFFFFFFC0) != 0 || v55 == 32 )
        goto LABEL_5;
      LODWORD(v7) = v7 + 1;
      --v16;
    }
    else
    {
      LODWORD(v7) = v54 + v7;
      v16 -= v54;
    }
    v67 = v7;
  }
LABEL_5:
  v17 = v16 + v7;
  v18 = 0;
  if ( 16 * v16 >= 0x20 )
  {
    v17 = v67;
    v18 = v16;
  }
  v68 = v18;
  HIDWORD(v65) = HIDWORD(v65) & 0xFF00FFFF | 0x10000;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v65);
  v19 = (unsigned __int8)(a3 ^ RtlpHpHeapGlobals ^ (v12 >> 12));
  v20 = 16 * v17 + 32;
  *(_DWORD *)(a3 + 8) = v19;
  if ( !v18 )
    v20 = 16 * v17;
  v21 = (-1LL << (v12 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v20 + v12 - 1) >> 12)));
  v22 = (v21 ^ *(_QWORD *)(a2 + 16)) & v21;
  if ( v22 )
  {
    *(_DWORD *)(a3 + 8) = v19 | 0x200;
    LOWORD(v66) = a5 & 1;
    if ( (a5 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    _BitScanForward64(&v51, v22);
    v63 = ((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    _BitScanReverse64(&v52, v22);
    v59 = v51;
    LODWORD(v58) = v52;
    LODWORD(v57) = v51;
    v53 = v52 - v51 + 1;
    LODWORD(v65) = v53;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    if ( ((int (__fastcall *)(__int64, __int64, _QWORD))(SRWLock ^ RtlpHpHeapGlobals ^ *(_QWORD *)(SRWLock + 152)))(
           SRWLock ^ *(_QWORD *)(SRWLock + 128),
           a2 + (unsigned int)(v59 << 12),
           (unsigned int)(v53 << 12)) < 0 )
    {
      v68 += v17;
      v17 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) |= ((1LL << v53) - 1) << v59;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(SRWLock + 48),
        (0x101010101010101LL * ((v63 + (v63 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    if ( (a5 & 1) == 0 )
    {
      *(_QWORD *)a6 = 0LL;
      *(_QWORD *)(a6 + 16) = 0LL;
      *(_QWORD *)(a6 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v18 = v68;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ v17 ^ WORD1(a3);
  if ( v18 )
  {
    v23 = 16LL * v17 + a3;
    if ( v17 )
      LOWORD(v24) = v17;
    else
      v24 = (RtlpHpHeapGlobals ^ *(_QWORD *)v23 ^ v23) >> 32;
    *(_QWORD *)v23 = RtlpHpHeapGlobals ^ v23 ^ ((v18 << 16) | (((unsigned __int16)v24 | 0x10000LL) << 32));
    *(_DWORD *)(v23 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v23 ^ ((unsigned int)(v23 - a2) >> 12));
    v25 = v23 + 16LL * v18;
    if ( v25 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      HIDWORD(v65) ^= (unsigned __int16)(v18 ^ WORD2(v65));
      *(_WORD *)(v25 + 4) = WORD2(v25) ^ WORD2(RtlpHpHeapGlobals) ^ WORD2(v65);
    }
    for ( i = 0LL; ; i = v29 )
    {
      v27 = a2 + 48;
      v69 = i;
      HIDWORD(v65) &= 0xFF00FFFF;
      v28 = RtlpHpHeapGlobals ^ v23 ^ *(_QWORD *)v23;
      v29 = ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v23 ^ *(_DWORD *)v23) >> 16;
      v65 ^= RtlpHpHeapGlobals ^ v23;
      *(_BYTE *)(v23 + 6) = BYTE6(v65);
      if ( WORD2(v28) )
      {
        v60 = RtlpHpHeapGlobals ^ (v23 - 16LL * WORD2(v28)) ^ *(_QWORD *)(v23 - 16LL * WORD2(v28));
        if ( (v60 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(SRWLock, a2, v23 - 16LL * WORD2(v28), i);
          v27 = a2 + 48;
          v23 -= 16LL * WORD2(v28);
          i = v69;
          v29 += WORD1(v60);
        }
      }
      v30 = *(unsigned __int16 *)(a2 + 32);
      v31 = v23 + 16LL * v29;
      if ( v31 < v27 + 16 * v30 )
      {
        v61 = RtlpHpHeapGlobals ^ v31 ^ *(_QWORD *)v31;
        if ( (v61 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(SRWLock, a2, v31, i);
          v27 = a2 + 48;
          v30 = *(unsigned __int16 *)(a2 + 32);
          i = v69;
          v29 += WORD1(v61);
        }
      }
      v32 = v30;
      if ( (*(_BYTE *)(SRWLock + 176) & 1) != 0 )
      {
        v31 = v23 + 16LL * v29;
        if ( v31 < v27 + 16 * (unsigned __int64)(unsigned __int16)v30 )
        {
          v64 = RtlpHpHeapGlobals ^ v31 ^ *(_QWORD *)v31;
          if ( (v64 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(SRWLock, a2, v31, i);
            v27 = a2 + 48;
            v32 = *(_WORD *)(a2 + 32);
            i = v69;
            v29 += WORD1(v64);
          }
        }
      }
      if ( WORD1(v28) != v29 )
      {
        v30 = (v29 << 16) | (unsigned __int16)v66;
        v31 = v23 + 16LL * v29;
        v66 = RtlpHpHeapGlobals ^ v23 ^ ((v29 << 16) | (unsigned __int16)v66);
        *(_WORD *)(v23 + 2) = HIWORD(v66);
        v32 = *(_WORD *)(a2 + 32);
        if ( v31 < v27 + 16 * (unsigned __int64)v32 )
        {
          v30 = (unsigned int)(unsigned __int16)(v29 ^ WORD2(v58)) ^ HIDWORD(v58);
          HIDWORD(v58) ^= (unsigned __int16)(v29 ^ WORD2(v58));
          v58 ^= RtlpHpHeapGlobals ^ v31;
          *(_WORD *)(v31 + 4) = WORD2(v58);
          v32 = *(_WORD *)(a2 + 32);
        }
      }
      if ( v29 == v32 )
      {
        RtlpHpVsSubsegmentCleanup(SRWLock, a2, v31, i);
        return v17;
      }
      if ( v29 <= (unsigned int)i )
        break;
      i = ((_DWORD)v23 - (_DWORD)a2 + 4127) & 0xFFFFF000;
      v33 = (v23 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v23) ^ *(unsigned __int16 *)(v23 + 2)) - a2) & 0xFFFFF000;
      if ( (unsigned int)i >= v33 )
        break;
      v48 = v33 - i;
      i = (unsigned int)i >> 12;
      v30 = (unsigned __int8)i;
      v49 = *(_QWORD *)(a2 + 16) & (-1LL << i) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                          - (unsigned __int8)((unsigned __int64)(v33 - 1) >> 12)));
      if ( v48 < 0x1000 )
        break;
      if ( !v49 )
        break;
      v30 = (0x101010101010101LL
           * ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v62 = v30;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_BYTE *)(SRWLock + 176) & 2) == 0 )
      {
        v50 = *(_QWORD *)(SRWLock + 48) >> 7;
        if ( v50 <= 8 )
          v50 = 8LL;
        if ( *(_QWORD *)(SRWLock + 56) + (unsigned __int64)(unsigned int)v30 <= v50 )
          break;
      }
      HIDWORD(v57) = HIDWORD(v57) & 0xFF00FFFF | 0x10000;
      v57 ^= RtlpHpHeapGlobals ^ v23;
      *(_BYTE *)(v23 + 6) = BYTE6(v57);
      *(_DWORD *)(v23 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v23 ^ ((unsigned int)(v23 - a2) >> 12)) | 0x200;
      if ( (a5 & 1) != 0 )
      {
        RtlpHpVsSubsegmentCommitPages(SRWLock, (_RTL_SRWLOCK *)a2, v49, v30, 0);
      }
      else
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
        *(_QWORD *)(a6 + 8) = 0LL;
        RtlpHpVsSubsegmentCommitPages(SRWLock, (_RTL_SRWLOCK *)a2, v49, v62, 0);
        *(_QWORD *)a6 = 0LL;
        *(_QWORD *)(a6 + 16) = 0LL;
        *(_QWORD *)(a6 + 8) = SRWLock;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      }
      *(_DWORD *)(v23 + 8) &= ~0x200u;
    }
    if ( (*(_BYTE *)(SRWLock + 176) & 1) != 0 && ((v23 + 32) & 0xFFF) != 0 )
    {
      v56 = RtlpHpVsChunkAlignSplit(v30, a2, v23, i);
      if ( v56 )
        RtlpHpVsFreeChunkInsert(SRWLock, a2, v56);
    }
    v34 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v23) ^ *(unsigned __int16 *)(v23 + 2));
    v35 = v34 + (v23 & 0xFFF) + 4095;
    v36 = (v23 - a2 + 4127) & 0xFFFFF000;
    v37 = (v23 + v34 - a2) & 0xFFFFF000;
    v38 = (v35 >> 12)
        - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v23) ^ *(unsigned __int16 *)(v23 + 2))) + 4095) >> 12);
    if ( v36 < v37 )
    {
      v39 = v37 - v36;
      v40 = *(_QWORD *)(a2 + 16) & (-1LL << (v36 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v37 - 1) >> 12)));
    }
    else
    {
      v39 = 0;
      v40 = 0LL;
    }
    v41 = ((v40 - ((v40 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v40 - ((v40 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    *(_QWORD *)(SRWLock + 56) += (unsigned int)((0x101010101010101LL * ((v41 + (v41 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v23 = RtlpHpHeapGlobals ^ v23 ^ (v38
                                             + (v39 >> 12)
                                             - ((0x101010101010101LL * ((v41 + (v41 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v42 = *(_QWORD *)(SRWLock + 24);
    v43 = *(_QWORD *)(SRWLock + 16);
    if ( (v42 & 1) != 0 )
    {
      if ( !v43 )
      {
LABEL_32:
        v44 = 0;
        goto LABEL_33;
      }
      v43 ^= SRWLock + 16;
    }
    v11 = v43;
    v46 = v42 & 1;
    v44 = 0;
    if ( v43 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v23 ^ (unsigned int)v23) >= (*(_DWORD *)(v11 - 8) ^ (unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v11 - 8)) )
        {
          v47 = *(_QWORD *)(v11 + 8);
          if ( v46 )
          {
            if ( !v47 )
              goto LABEL_47;
            v47 ^= v11;
          }
          if ( !v47 )
          {
LABEL_47:
            v44 = 1;
            break;
          }
        }
        else
        {
          v47 = *(_QWORD *)v11;
          if ( v46 )
          {
            if ( !v47 )
              goto LABEL_32;
            v47 ^= v11;
          }
          if ( !v47 )
            goto LABEL_32;
        }
        v11 = v47;
      }
    }
LABEL_33:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SRWLock + 16), (PRTL_BALANCED_NODE)v11, v44, (PRTL_BALANCED_NODE)(v23 + 8));
  }
  return v17;
}
