/*
 * XREFs of RtlpHpVsChunkSplit @ 0x1800380B0
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x1800374D0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800719D4 (RtlpHpVsContextGrowInPlace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038A70 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1800677A4 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180069EA0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180069FDC (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006D96C (RtlpHpVsSubsegmentCommitPages.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180122B38 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        PRTL_SRWLOCK SRWLock,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  __int64 v7; // r12
  unsigned int v9; // r13d
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  unsigned int v16; // esi
  unsigned int v17; // r12d
  int v18; // r9d
  int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 i; // r9
  __int64 v26; // r10
  unsigned int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // r12
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  __int64 v32; // r12
  unsigned __int16 v33; // r10
  unsigned int v34; // r8d
  __int64 v35; // rcx
  unsigned int v36; // r10d
  unsigned int v37; // r9d
  unsigned __int64 v38; // rdx
  unsigned __int64 Value; // rdx
  BOOLEAN v40; // al
  unsigned __int64 v42; // rax
  unsigned int v43; // edx
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rcx
  int v50; // eax
  unsigned __int64 v51; // r8
  __int64 v52; // r12
  __int64 v53; // rax
  int v54; // [rsp+30h] [rbp-58h]
  unsigned __int64 v55; // [rsp+38h] [rbp-50h]
  unsigned __int64 v56; // [rsp+40h] [rbp-48h]
  unsigned __int64 v57; // [rsp+48h] [rbp-40h]
  unsigned int v58; // [rsp+90h] [rbp+8h]
  int v59; // [rsp+94h] [rbp+Ch]
  unsigned __int64 v60; // [rsp+98h] [rbp+10h]
  unsigned int v61; // [rsp+98h] [rbp+10h]
  int v62; // [rsp+98h] [rbp+10h]
  __int64 v63; // [rsp+A0h] [rbp+18h]
  unsigned int v64; // [rsp+A8h] [rbp+20h]
  unsigned int v65; // [rsp+A8h] [rbp+20h]
  int v66; // [rsp+A8h] [rbp+20h]

  v7 = a4;
  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0;
  v64 = a3 - a2;
  v12 = (a3 - a2 + 4127) & 0xFFFFF000;
  v14 = ((a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16)) - a2) & 0xFFFFF000) - v12;
  if ( v12 >= (((_DWORD)a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a3 ^ (unsigned int)a3) >> 16)) - (_DWORD)a2) & 0xFFFFF000) )
    v14 = 0;
  v13 = 16 * (((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3 ^ (unsigned int)a3) >> 16);
  SRWLock[7].Value -= (unsigned int)((v13 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12)
                    + (v14 >> 12)
                    - (unsigned int)((unsigned __int64)(v13 + 4095) >> 12)
                    - (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)a3 ^ a3);
  v15 = v9 - v7;
  if ( v15 && (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
  {
    v49 = (((a3 + 16 * v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16 * v7)) >> 4;
    v50 = 16 * v49;
    if ( (unsigned int)(16 * v49) >= 0x20 )
    {
      if ( (v50 & 0xFFFFFFC0) == 0 && v50 != 32 )
      {
        LODWORD(v7) = v7 + 1;
        --v15;
      }
    }
    else
    {
      LODWORD(v7) = v49 + v7;
      v15 -= v49;
    }
  }
  v16 = v7 + v15;
  if ( 16 * v15 >= 0x20 )
    v16 = v7;
  v17 = 0;
  if ( 16 * v15 >= 0x20 )
    v17 = v15;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ ((v59 & 0xFF00FFFF | 0x10000) >> 16);
  v18 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v64 >> 12) ^ a3);
  v19 = 16 * v16 + 32;
  *(_DWORD *)(a3 + 8) = v18;
  if ( !v17 )
    v19 = 16 * v16;
  v20 = (-1LL << (v64 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v19 + v64 - 1) >> 12)));
  v21 = (*(_QWORD *)(a2 + 16) ^ v20) & v20;
  v60 = v21;
  if ( v21 )
  {
    *(_DWORD *)(a3 + 8) = v18 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      v21 = v60;
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    _BitScanForward64(&v46, v21);
    v55 = ((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    _BitScanReverse64(&v47, v21);
    v56 = v46;
    LODWORD(v63) = v47;
    v66 = v47 - v46 + 1;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    if ( ((int (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)SRWLock ^ RtlpHpHeapGlobals ^ SRWLock[19].Value))(
           SRWLock[16].Value ^ (unsigned __int64)SRWLock,
           a2 + (unsigned int)((_DWORD)v56 << 12),
           (unsigned int)(v66 << 12)) < 0 )
    {
      v17 += v16;
      v16 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 16) |= ((1LL << v66) - 1) << v56;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)&SRWLock[6],
        (0x101010101010101LL * ((v55 + (v55 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
    if ( (a5 & 1) == 0 )
    {
      *(_OWORD *)a6 = 0LL;
      *(_QWORD *)(a6 + 16) = 0LL;
      *(_QWORD *)(a6 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ v16 ^ WORD1(a3);
  if ( v17 )
  {
    v22 = 16LL * v16 + a3;
    if ( v16 )
      LOWORD(v23) = v16;
    else
      v23 = (RtlpHpHeapGlobals ^ *(_QWORD *)v22 ^ v22) >> 32;
    *(_QWORD *)v22 = RtlpHpHeapGlobals ^ v22 ^ ((v17 << 16) | (((unsigned __int16)v23 | 0x10000LL) << 32));
    *(_DWORD *)(v22 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v22 ^ ((unsigned int)(v22 - a2) >> 12));
    v24 = v22 + 16LL * v17;
    if ( v24 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v24 + 4) = WORD2(v24) ^ WORD2(RtlpHpHeapGlobals) ^ v17;
    for ( i = 0LL; ; i = v65 )
    {
      v26 = a2 + 48;
      v58 = i;
      HIDWORD(v63) &= 0xFF00FFFF;
      v27 = (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v22 ^ v22) >> 32);
      v28 = ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v22 ^ (unsigned int)v22) >> 16;
      v63 ^= RtlpHpHeapGlobals ^ v22;
      v61 = v28;
      v65 = v28;
      *(_BYTE *)(v22 + 6) = BYTE6(v63);
      if ( v27 )
      {
        v57 = v22 - 16LL * v27;
        v29 = RtlpHpHeapGlobals ^ *(_QWORD *)v57 ^ v57;
        if ( (v29 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(SRWLock, a2, v22 - 16LL * v27);
          v26 = a2 + 48;
          v22 = v57;
          i = v58;
          v28 = WORD1(v29) + v65;
          v65 = v28;
        }
      }
      v30 = *(unsigned __int16 *)(a2 + 32);
      v31 = v22 + 16LL * v28;
      if ( v31 < v26 + 16 * v30 )
      {
        v32 = RtlpHpHeapGlobals ^ *(_QWORD *)v31 ^ v31;
        if ( (v32 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(SRWLock, a2, v31);
          v26 = a2 + 48;
          v30 = *(unsigned __int16 *)(a2 + 32);
          i = v58;
          v28 = WORD1(v32) + v65;
          v65 = v28;
        }
      }
      if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
      {
        v51 = v22 + 16LL * v28;
        if ( v51 < v26 + 16 * (unsigned __int64)(unsigned __int16)v30 )
        {
          v52 = RtlpHpHeapGlobals ^ *(_QWORD *)v51 ^ v51;
          if ( (v52 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(SRWLock, a2, v51);
            v26 = a2 + 48;
            i = v58;
            v28 = WORD1(v52) + v65;
            v65 = v28;
          }
        }
      }
      if ( v61 != v28 )
      {
        v30 = (v28 << 16) | (unsigned __int16)v54;
        v48 = v22 + 16LL * v28;
        v54 = RtlpHpHeapGlobals ^ v22 ^ ((v28 << 16) | (unsigned __int16)v54);
        *(_WORD *)(v22 + 2) = HIWORD(v54);
        if ( v48 < v26 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
        {
          v30 = (unsigned int)(unsigned __int16)(v28 ^ WORD2(v55)) ^ HIDWORD(v55);
          HIDWORD(v55) ^= (unsigned __int16)(v28 ^ WORD2(v55));
          v55 ^= RtlpHpHeapGlobals ^ v48;
          *(_WORD *)(v48 + 4) = WORD2(v55);
        }
      }
      if ( v28 == *(unsigned __int16 *)(a2 + 32) )
      {
        RtlpHpVsSubsegmentCleanup(SRWLock, a2);
        return v16;
      }
      if ( v28 <= (unsigned int)i )
        break;
      v33 = WORD1(RtlpHpHeapGlobals);
      v30 = (unsigned int)v22;
      i = ((_DWORD)v22 - (_DWORD)a2 + 4127) & 0xFFFFF000;
      v34 = (v22 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v22) ^ *(unsigned __int16 *)(v22 + 2)) - a2) & 0xFFFFF000;
      if ( (unsigned int)i >= v34 )
        goto LABEL_29;
      v43 = v34 - i;
      i = (unsigned int)i >> 12;
      v30 = (unsigned __int8)i;
      v44 = *(_QWORD *)(a2 + 16) & (-1LL << i) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                          - (unsigned __int8)((unsigned __int64)(v34 - 1) >> 12)));
      if ( v43 < 0x1000 )
        goto LABEL_29;
      if ( !v44 )
        goto LABEL_29;
      v30 = (0x101010101010101LL
           * ((((v44 - ((v44 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v44 - ((v44 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v44 - ((v44 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v44 - ((v44 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v62 = v30;
      if ( *(__int16 *)(a2 + 34) < 0 )
        goto LABEL_29;
      if ( (*(_BYTE *)&SRWLock[22].0 & 2) == 0 )
      {
        v45 = SRWLock[6].Value >> 7;
        if ( v45 <= 8 )
          v45 = 8LL;
        if ( SRWLock[7].Value + (unsigned int)v30 <= v45 )
          goto LABEL_29;
      }
      HIDWORD(v56) = HIDWORD(v56) & 0xFF00FFFF | 0x10000;
      v56 ^= RtlpHpHeapGlobals ^ v22;
      *(_BYTE *)(v22 + 6) = BYTE6(v56);
      *(_DWORD *)(v22 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v22 ^ ((unsigned int)(v22 - a2) >> 12)) | 0x200;
      if ( (a5 & 1) != 0 )
      {
        RtlpHpVsSubsegmentCommitPages((_DWORD)SRWLock, a2, v44, v30, 0);
      }
      else
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
        *(_QWORD *)(a6 + 8) = 0LL;
        RtlpHpVsSubsegmentCommitPages((_DWORD)SRWLock, a2, v44, v62, 0);
        *(_OWORD *)a6 = 0LL;
        *(_QWORD *)(a6 + 16) = 0LL;
        *(_QWORD *)(a6 + 8) = SRWLock;
        RtlAcquireSRWLockExclusive(SRWLock);
      }
      *(_DWORD *)(v22 + 8) &= ~0x200u;
    }
    v33 = WORD1(RtlpHpHeapGlobals);
LABEL_29:
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v22 + 32) & 0xFFF) != 0 )
    {
      v53 = RtlpHpVsChunkAlignSplit(v30, a2, v22, i);
      if ( v53 )
        RtlpHpVsFreeChunkInsert(SRWLock, a2, v53);
      v33 = WORD1(RtlpHpHeapGlobals);
    }
    v35 = 16 * (v33 ^ ((*(_DWORD *)v22 ^ (unsigned int)v22) >> 16));
    v36 = (v22 - a2 + 4127) & 0xFFFFF000;
    v37 = (v22 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)v22 ^ (unsigned int)v22) >> 16)) - a2) & 0xFFFFF000;
    if ( v36 < v37 )
    {
      v11 = v37 - v36;
      v38 = *(_QWORD *)(a2 + 16) & (-1LL << (v36 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v37 - 1) >> 12)));
    }
    else
    {
      v38 = 0LL;
    }
    SRWLock[7].Value += (unsigned int)((0x101010101010101LL
                                      * ((((v38 - ((v38 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v38 - ((v38 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                        + ((((v38 - ((v38 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v38 - ((v38 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v22 = RtlpHpHeapGlobals ^ v22 ^ (((v35 + (v22 & 0xFFF) + 4095) >> 12)
                                             - ((unsigned __int64)(v35 + 4095) >> 12)
                                             + (v11 >> 12)
                                             - ((0x101010101010101LL
                                               * ((((v38 - ((v38 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                 + (((v38 - ((v38 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                 + ((((v38 - ((v38 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                   + (((v38 - ((v38 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    Value = SRWLock[2].Value;
    if ( (SRWLock[3].Value & 1) != 0 )
    {
      if ( !Value )
      {
LABEL_34:
        v40 = 0;
        goto LABEL_35;
      }
      Value ^= (unsigned __int64)&SRWLock[2];
    }
    v40 = 0;
    if ( Value )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v22 ^ (unsigned int)v22) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(Value - 8) ^ ((_DWORD)Value - 8)) )
        {
          v42 = *(_QWORD *)(Value + 8);
          if ( (SRWLock[3].Value & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_49;
            v42 ^= Value;
          }
          if ( !v42 )
          {
LABEL_49:
            v40 = 1;
            break;
          }
        }
        else
        {
          v42 = *(_QWORD *)Value;
          if ( (SRWLock[3].Value & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_34;
            v42 ^= Value;
          }
          if ( !v42 )
            goto LABEL_34;
        }
        Value = v42;
      }
    }
LABEL_35:
    RtlRbInsertNodeEx((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)Value, v40, (PRTL_BALANCED_NODE)(v22 + 8));
  }
  return v16;
}
