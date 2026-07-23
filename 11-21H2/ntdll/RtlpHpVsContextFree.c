/*
 * XREFs of RtlpHpVsContextFree @ 0x180018CE0
 * Callers:
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x18002E414 (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x180014CB8 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800159B8 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsChunkComputeCost @ 0x18001B248 (RtlpHpVsChunkComputeCost.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkRemove @ 0x18001C9FC (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180056FF0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180076138 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A7DC0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180120C80 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  char v6; // si
  PRTL_SRWLOCK v8; // rdi
  int v9; // edx
  unsigned __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rax
  _QWORD *v13; // r12
  int v14; // ebx
  _RTL_SRWLOCK *v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r9
  _QWORD *v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  int v23; // ecx
  int v24; // r8d
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r12
  unsigned int v27; // r13d
  unsigned __int64 v28; // r9
  __int64 v29; // rbx
  unsigned int v30; // edi
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r15
  __int64 v35; // rsi
  int v36; // eax
  unsigned __int16 v37; // dx
  unsigned int v38; // r8d
  __int64 v39; // r9
  unsigned __int64 v40; // r11
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  __int16 v43; // r11
  unsigned int v44; // r10d
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 Value; // rdx
  BOOLEAN v48; // al
  unsigned __int64 v49; // rax
  unsigned int v51; // edx
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rsi
  int v55; // ecx
  int v56; // ecx
  unsigned __int64 v57; // r8
  int v58; // r11d
  int v59; // r9d
  int v60; // ecx
  PRTL_SRWLOCK v61; // rcx
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // r8
  int v64; // r8d
  int v65; // ecx
  __int64 v66; // rsi
  __int64 v67; // rax
  _RTL_SRWLOCK *SRWLocka; // [rsp+30h] [rbp-78h]
  __int64 v69; // [rsp+38h] [rbp-70h]
  __int64 v70; // [rsp+40h] [rbp-68h]
  int v71; // [rsp+48h] [rbp-60h]
  __int64 v72; // [rsp+50h] [rbp-58h]
  __int64 v73; // [rsp+58h] [rbp-50h]
  _QWORD *v74; // [rsp+60h] [rbp-48h]
  char v75[8]; // [rsp+68h] [rbp-40h] BYREF
  int v77; // [rsp+B8h] [rbp+10h]
  int v78; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v79; // [rsp+C8h] [rbp+20h]

  v79 = a4;
  v6 = a4;
  v8 = SRWLock;
  v9 = (int)SRWLock[22].0;
  v10 = a3 - 16;
  if ( (v9 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v10 = a3 - 32;
  if ( !a2 )
  {
    v55 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v10) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v55 & 0xFF0000) != 0 )
    {
      v56 = (unsigned __int8)(RtlpHpHeapGlobals ^ v10 ^ *(_BYTE *)(v10 + 8));
    }
    else
    {
      if ( (_WORD)v55 )
      {
        v57 = v10 - 16LL * (unsigned __int16)((v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10) >> 32);
        v58 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v57) ^ HIDWORD(*(_QWORD *)v57);
        if ( (v58 & 0xFF0000) != 0 )
        {
          v56 = (unsigned __int8)(RtlpHpHeapGlobals ^ v57 ^ *(_BYTE *)(v57 + 8));
        }
        else if ( (_WORD)v58 )
        {
          v57 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v57 ^ *(_QWORD *)v57) >> 32);
          v56 = (unsigned __int8)(v57 ^ RtlpHpHeapGlobals ^ *(_BYTE *)(v57 + 8));
        }
        else
        {
          v56 = 0;
        }
        goto LABEL_79;
      }
      v56 = 0;
    }
    v57 = v10;
LABEL_79:
    v8 = SRWLock;
    a2 = (v57 - (unsigned int)(v56 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v59 = 0;
    v60 = 18;
LABEL_101:
    RtlpLogHeapFailure(v60, (unsigned int)v8 ^ *(_DWORD *)&v8[16].0, a2, v59, 0LL, 0LL);
    return 0LL;
  }
  if ( ((v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10) & 0xFF000000000000LL) == 0 )
  {
    v59 = v10;
    LODWORD(a2) = a3;
    v60 = 8;
    goto LABEL_101;
  }
  v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v10) ^ *(unsigned __int16 *)(v10 + 2)) - 16;
  *a5 = v11;
  v12 = 0LL;
  if ( (v9 & 4) != 0 && v11 < 0x1000 )
  {
    v61 = v8 + 8;
    if ( *(_WORD *)&v8[8].0 < 0x20u )
    {
      RtlpInterlockedPushEntrySList(v61, v10 + 16);
      return 1LL;
    }
    v12 = RtlpInterlockedFlushSList(v61);
  }
  v13 = (_QWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = v12;
  v14 = v6 & 1;
  v77 = v14;
  if ( (v6 & 1) != 0 )
  {
    v15 = SRWLock;
    SRWLocka = SRWLock;
  }
  else
  {
    SRWLocka = v8;
    v15 = v8;
    RtlAcquireSRWLockExclusive(v8);
  }
  if ( v13 )
  {
    do
    {
      v16 = RtlpHpHeapGlobals;
      v17 = (unsigned __int64)(v13 - 2);
      v18 = *(v13 - 2);
      v19 = v13;
      v74 = (_QWORD *)*v13;
      v20 = (RtlpHpHeapGlobals ^ (unsigned __int64)(v13 - 2) ^ v18) >> 32;
      v21 = RtlpHpHeapGlobals ^ (unsigned __int64)(v13 - 2);
      v22 = (unsigned __int64)(v13 - 2);
      v23 = v20 & 0xFF0000;
      if ( v23 )
      {
        v24 = (unsigned __int8)(v17 ^ RtlpHpHeapGlobals ^ *((_BYTE *)v19 - 8));
        goto LABEL_11;
      }
      v62 = (v21 ^ v18) >> 32;
      if ( !(_WORD)v62 )
        goto LABEL_90;
      v22 -= 16LL * (unsigned __int16)v62;
      if ( ((RtlpHpHeapGlobals ^ v22 ^ *(_QWORD *)v22) & 0xFF000000000000LL) != 0 )
      {
        v24 = (unsigned __int8)(RtlpHpHeapGlobals ^ v22 ^ *(_BYTE *)(v22 + 8));
        goto LABEL_11;
      }
      v63 = (RtlpHpHeapGlobals ^ v22 ^ *(_QWORD *)v22) >> 32;
      if ( (_WORD)v63 )
      {
        v22 -= 16LL * (unsigned __int16)v63;
        v24 = (unsigned __int8)(RtlpHpHeapGlobals ^ v22 ^ *(_BYTE *)(v22 + 8));
      }
      else
      {
LABEL_90:
        v24 = 0;
      }
LABEL_11:
      v25 = (unsigned int)(v24 << 12);
      v26 = (v22 - (unsigned int)v25) & 0xFFFFFFFFFFFFF000uLL;
      if ( (((unsigned __int16)(*(_WORD *)(v26 + 32) ^ *(_WORD *)(v26 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
      {
        v64 = v26;
        v65 = 18;
      }
      else
      {
        if ( v23 )
        {
          v27 = 0;
          while ( 1 )
          {
            v28 = v26 + 48;
            HIDWORD(v70) &= 0xFF00FFFF;
            v29 = v16 ^ v17 ^ *(_QWORD *)v17;
            v30 = ((unsigned int)v16 ^ (unsigned int)v17 ^ *(_DWORD *)v17) >> 16;
            v70 ^= v16 ^ v17;
            *(_BYTE *)(v17 + 6) = BYTE6(v70);
            if ( WORD2(v29) )
            {
              v31 = v17 - 16LL * WORD2(v29);
              v32 = RtlpHpHeapGlobals ^ v31 ^ *(_QWORD *)v31;
              if ( (v32 & 0xFF000000000000LL) == 0 )
              {
                RtlpHpVsFreeChunkRemove(SRWLock, v26, v31, v28);
                v28 = v26 + 48;
                v30 += WORD1(v32);
                v17 -= 16LL * WORD2(v29);
              }
            }
            v33 = *(unsigned __int16 *)(v26 + 32);
            v34 = v17 + 16LL * v30;
            if ( v34 < v28 + 16 * v33 )
            {
              v35 = RtlpHpHeapGlobals ^ *(_QWORD *)v34 ^ v34;
              if ( (v35 & 0xFF000000000000LL) == 0 )
              {
                RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)(v34 + 8));
                v36 = RtlpHpVsChunkComputeCost(v17 + 16LL * v30, v26, &v78, v75);
                v28 = v26 + 48;
                SRWLock[7].Value -= v78
                                  - (unsigned int)(unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v34 ^ v34)
                                  + v36;
                v33 = *(unsigned __int16 *)(v26 + 32);
                v30 += WORD1(v35);
              }
            }
            v37 = v33;
            if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
            {
              v25 = v17 + 16LL * v30;
              if ( v25 < v28 + 16LL * (unsigned __int16)v33 )
              {
                v66 = RtlpHpHeapGlobals ^ *(_QWORD *)v25 ^ v25;
                if ( (v66 & 0xFF000000000000LL) == 0 )
                {
                  RtlpHpVsFreeChunkRemove(SRWLock, v26, v25, v28);
                  v37 = *(_WORD *)(v26 + 32);
                  v28 = v26 + 48;
                  v30 += WORD1(v66);
                }
              }
            }
            if ( WORD1(v29) != v30 )
            {
              v33 = (v30 << 16) | (unsigned __int16)v71;
              v25 = v17 + 16LL * v30;
              v71 = RtlpHpHeapGlobals ^ v17 ^ ((v30 << 16) | (unsigned __int16)v71);
              *(_WORD *)(v17 + 2) = HIWORD(v71);
              v37 = *(_WORD *)(v26 + 32);
              if ( v25 < v28 + 16LL * v37 )
              {
                v33 = (unsigned int)(unsigned __int16)(v30 ^ WORD2(v72)) ^ HIDWORD(v72);
                HIDWORD(v72) ^= (unsigned __int16)(v30 ^ WORD2(v72));
                v72 ^= RtlpHpHeapGlobals ^ v25;
                *(_WORD *)(v25 + 4) = WORD2(v72);
                v37 = *(_WORD *)(v26 + 32);
              }
            }
            if ( v30 == v37 )
            {
              v8 = SRWLock;
              RtlpHpVsSubsegmentCleanup(SRWLock, v26, v25, v28);
              v14 = v77;
              if ( v77 )
              {
                RtlpHpVsSubsegmentFree((__int64)SRWLock, v26, v79);
                v15 = SRWLocka;
              }
              else
              {
                RtlReleaseSRWLockExclusive(SRWLocka);
                RtlpHpVsSubsegmentFree((__int64)SRWLock, v26, v79);
                SRWLocka = SRWLock;
                v15 = SRWLock;
                RtlAcquireSRWLockExclusive(SRWLock);
              }
              goto LABEL_45;
            }
            if ( v30 <= v27 )
              break;
            v28 = ((_DWORD)v17 - (_DWORD)v26 + 4127) & 0xFFFFF000;
            v38 = (v17 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v17) ^ *(unsigned __int16 *)(v17 + 2)) - v26) & 0xFFFFF000;
            if ( (unsigned int)v28 >= v38 )
              break;
            v51 = v38 - v28;
            v28 = (unsigned int)v28 >> 12;
            v33 = (unsigned __int8)v28;
            v52 = *(_QWORD *)(v26 + 16) & (-1LL << v28) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                   - (unsigned __int8)((unsigned __int64)(v38 - 1) >> 12)));
            if ( v51 < 0x1000 )
              break;
            if ( !v52 )
              break;
            v53 = v52 - ((v52 >> 1) & 0x5555555555555555LL);
            v33 = v53 & 0x3333333333333333LL;
            v54 = (0x101010101010101LL
                 * (((v53 & 0x3333333333333333LL)
                   + ((v53 >> 2) & 0x3333333333333333LL)
                   + (((v53 & 0x3333333333333333LL) + ((v53 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( *(__int16 *)(v26 + 34) < 0 )
              break;
            if ( (*(_BYTE *)&SRWLock[22].0 & 2) == 0 )
            {
              v33 = SRWLock[6].Value >> 7;
              if ( v33 <= 8 )
                v33 = 8LL;
              if ( SRWLock[7].Value + (unsigned int)v54 <= v33 )
                break;
            }
            HIDWORD(v73) = HIDWORD(v73) & 0xFF00FFFF | 0x10000;
            v73 ^= RtlpHpHeapGlobals ^ v17;
            *(_BYTE *)(v17 + 6) = BYTE6(v73);
            *(_DWORD *)(v17 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v17 ^ ((unsigned int)(v17 - v26) >> 12)) | 0x200;
            if ( v77 )
            {
              RtlpHpVsSubsegmentCommitPages((__int64)SRWLock, (_RTL_SRWLOCK *)v26, v52, v54, 0);
            }
            else
            {
              RtlReleaseSRWLockExclusive(SRWLocka);
              RtlpHpVsSubsegmentCommitPages((__int64)SRWLock, (_RTL_SRWLOCK *)v26, v52, v54, 0);
              SRWLocka = SRWLock;
              RtlAcquireSRWLockExclusive(SRWLock);
            }
            *(_DWORD *)(v17 + 8) &= ~0x200u;
            v27 = v30;
            v16 = RtlpHpHeapGlobals;
          }
          v8 = SRWLock;
          if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v17 + 32) & 0xFFF) != 0 )
          {
            v67 = RtlpHpVsChunkAlignSplit(v33, v26, v17, v28);
            if ( v67 )
              RtlpHpVsFreeChunkInsert(SRWLock, v26, v67);
          }
          v39 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v17) ^ *(unsigned __int16 *)(v17 + 2));
          v40 = v39 + (v17 & 0xFFF) + 4095;
          v41 = (v17 - v26 + 4127) & 0xFFFFF000;
          v42 = (v17 + v39 - v26) & 0xFFFFF000;
          v43 = (v40 >> 12)
              - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v17) ^ *(unsigned __int16 *)(v17 + 2)))
                + 4095) >> 12);
          if ( v41 < v42 )
          {
            v44 = v42 - v41;
            v45 = *(_QWORD *)(v26 + 16) & (-1LL << (v41 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                           - (unsigned __int8)((unsigned __int64)(v42 - 1) >> 12)));
          }
          else
          {
            v44 = 0;
            v45 = 0LL;
          }
          SRWLock[7].Value += (unsigned int)((0x101010101010101LL
                                            * ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                              + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                              + ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          LODWORD(v69) = (unsigned __int16)(v69 ^ (v43
                                                 + (v44 >> 12)
                                                 - ((0x101010101010101LL
                                                   * ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v45 - ((v45 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v45 - ((v45 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56))) ^ (unsigned int)v69;
          v46 = RtlpHpHeapGlobals ^ v17 ^ v69;
          *(_WORD *)v17 = v46;
          Value = SRWLock[2].Value;
          v69 = v46;
          if ( (SRWLock[3].Value & 1) == 0 )
          {
LABEL_31:
            v48 = 0;
            if ( !Value )
              goto LABEL_44;
            while ( 1 )
            {
              if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v17 ^ *(_DWORD *)v17) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(Value - 8) ^ ((_DWORD)Value - 8)) )
              {
                v49 = *(_QWORD *)(Value + 8);
                if ( (SRWLock[3].Value & 1) != 0 )
                {
                  if ( !v49 )
                    goto LABEL_42;
                  v49 ^= Value;
                }
                if ( !v49 )
                {
LABEL_42:
                  v48 = 1;
                  goto LABEL_44;
                }
              }
              else
              {
                v49 = *(_QWORD *)Value;
                if ( (SRWLock[3].Value & 1) != 0 )
                {
                  if ( !v49 )
                    goto LABEL_43;
                  v49 ^= Value;
                }
                if ( !v49 )
                  goto LABEL_43;
              }
              Value = v49;
            }
          }
          if ( Value )
          {
            Value ^= (unsigned __int64)&SRWLock[2];
            goto LABEL_31;
          }
LABEL_43:
          v48 = 0;
LABEL_44:
          RtlRbInsertNodeEx((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)Value, v48, (PRTL_BALANCED_NODE)(v17 + 8));
          v14 = v77;
          v15 = SRWLocka;
          goto LABEL_45;
        }
        v64 = v17;
        v65 = 8;
      }
      RtlpLogHeapFailure(v65, (unsigned int)v8 ^ *(_DWORD *)&v8[16].0, v64, 0, 0LL, 0LL);
LABEL_45:
      v13 = v74;
    }
    while ( v74 );
  }
  if ( !v14 )
    RtlReleaseSRWLockExclusive(v15);
  return 1LL;
}
