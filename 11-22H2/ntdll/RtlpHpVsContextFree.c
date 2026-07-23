/*
 * XREFs of RtlpHpVsContextFree @ 0x180036C50
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x180043E44 (RtlpHpSegFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkCoalesce @ 0x180037270 (RtlpHpVsChunkCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsSubsegmentFree @ 0x180067754 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1800677A4 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180069EA0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006D96C (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A2C00 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180122B38 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // r10d
  unsigned __int64 v6; // rbx
  char v7; // di
  int v8; // r11d
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r12d
  _QWORD *v14; // r15
  _RTL_SRWLOCK *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  int v21; // edx
  unsigned __int64 v22; // rbx
  unsigned int i; // r14d
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // edi
  unsigned __int16 v27; // r9
  unsigned int v28; // r11d
  unsigned int v29; // r8d
  unsigned int v30; // r10d
  __int64 v31; // rcx
  unsigned int v32; // r10d
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 Value; // r9
  unsigned __int64 v39; // rdx
  BOOLEAN v40; // al
  int v41; // r9d
  unsigned __int64 v42; // rax
  unsigned __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // r10d
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // r9
  int v54; // ecx
  unsigned __int64 v55; // r9
  __int64 v56; // rcx
  unsigned __int64 v57; // r9
  int v58; // r9d
  int v59; // r8d
  int v60; // ecx
  PRTL_SRWLOCK v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // [rsp+30h] [rbp-58h]
  __int64 v65; // [rsp+40h] [rbp-48h]
  _RTL_SRWLOCK *v66; // [rsp+90h] [rbp+8h]
  unsigned int v67; // [rsp+98h] [rbp+10h] BYREF
  PRTL_SRWLOCK SRWLocka; // [rsp+A0h] [rbp+18h]
  unsigned int v69; // [rsp+A8h] [rbp+20h]

  v69 = a4;
  v5 = (int)SRWLock[22].0;
  v6 = a3 - 16;
  v7 = a4;
  v8 = a3;
  if ( (v5 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v6 = a3 - 32;
  v10 = RtlpHpHeapGlobals;
  if ( !a2 )
  {
    v50 = RtlpHpHeapGlobals ^ *(_QWORD *)v6;
    v51 = v6;
    v52 = HIDWORD(v50);
    v53 = v6 ^ v50;
    if ( ((HIDWORD(v6) ^ (unsigned int)v52) & 0xFF0000) != 0 )
    {
      v54 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v6 + 8) ^ v6);
LABEL_69:
      a2 = (v51 - (unsigned int)(v54 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_3;
    }
    v55 = HIDWORD(v53);
    if ( (_WORD)v55 )
    {
      v51 = v6 - 16LL * (unsigned __int16)v55;
      v56 = RtlpHpHeapGlobals ^ *(_QWORD *)v51;
      if ( ((HIDWORD(v51) ^ HIDWORD(v56)) & 0xFF0000) != 0 )
      {
        v54 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v51 + 8) ^ v51);
        goto LABEL_69;
      }
      v57 = (v56 ^ v51) >> 32;
      if ( (_WORD)v57 )
      {
        v51 -= 16LL * (unsigned __int16)v57;
        v54 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v51 + 8) ^ v51);
        goto LABEL_69;
      }
    }
    v54 = 0;
    goto LABEL_69;
  }
LABEL_3:
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v58 = 0;
    v59 = a2;
    v60 = 18;
LABEL_90:
    RtlpLogHeapFailure(v60, *(_DWORD *)&SRWLock[16].0 ^ (unsigned int)SRWLock, v59, v58, 0LL, 0LL);
    return 0LL;
  }
  if ( ((v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v6) & 0xFF000000000000LL) == 0 )
  {
    v58 = v6;
    v59 = v8;
    v60 = 8;
    goto LABEL_90;
  }
  v11 = 16 * ((((unsigned int)v6 ^ (unsigned int)*(_QWORD *)v6) >> 16) ^ WORD1(RtlpHpHeapGlobals)) - 16;
  *a5 = v11;
  v12 = 0LL;
  if ( (v5 & 4) != 0 && (unsigned int)v11 < 0x1000 )
  {
    v61 = SRWLock + 8;
    if ( *(_WORD *)&SRWLock[8].0 < 0x20u )
    {
      RtlpInterlockedPushEntrySList(v61, v6 + 16);
      return 1LL;
    }
    v12 = RtlpInterlockedFlushSList(v61, v11, v10);
  }
  v13 = v7 & 1;
  v14 = (_QWORD *)(v6 + 16);
  LODWORD(v66) = v13;
  *(_QWORD *)(v6 + 16) = v12;
  if ( (v7 & 1) != 0 )
  {
    v15 = v66;
    SRWLocka = v66;
  }
  else
  {
    SRWLocka = SRWLock;
    v15 = SRWLock;
    RtlAcquireSRWLockExclusive(SRWLock);
  }
  if ( v6 != -16LL )
  {
    do
    {
      v16 = *(v14 - 2);
      v17 = (__int64)(v14 - 2);
      v18 = (unsigned __int64)(v14 - 2);
      v14 = (_QWORD *)*v14;
      v19 = v17;
      v20 = (RtlpHpHeapGlobals ^ v16 ^ v18) >> 32;
      if ( (v20 & 0xFF0000) != 0 )
      {
        v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v17 + 8) ^ v17);
      }
      else
      {
        if ( !(_WORD)v20 )
          goto LABEL_80;
        v19 = v17 - 16LL * (unsigned __int16)v20;
        v62 = (*(_QWORD *)v19 ^ RtlpHpHeapGlobals ^ (unsigned __int64)v19) >> 32;
        if ( (v62 & 0xFF0000) != 0 )
        {
          v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v19 + 8) ^ v19);
        }
        else
        {
          if ( !(_WORD)v62 )
          {
LABEL_80:
            v21 = 0;
            goto LABEL_11;
          }
          v19 -= 16LL * (unsigned __int16)v62;
          v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v19 + 8) ^ v19);
        }
      }
LABEL_11:
      v22 = (v19 - (unsigned int)(v21 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      if ( (((unsigned __int16)(*(_WORD *)(v22 + 32) ^ *(_WORD *)(v22 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
      {
        RtlpLogHeapFailure(18, *(_DWORD *)&SRWLock[16].0 ^ (unsigned int)SRWLock, v22, 0, 0LL, 0LL);
      }
      else if ( ((RtlpHpHeapGlobals ^ v17 ^ v16) & 0xFF000000000000LL) != 0 )
      {
        for ( i = 0; ; i = v26 )
        {
          v24 = RtlpHpVsChunkCoalesce(SRWLock, v22, v17, &v67);
          v26 = v67;
          v17 = v24;
          if ( v67 == *(unsigned __int16 *)(v22 + 32) )
            break;
          v27 = WORD1(RtlpHpHeapGlobals);
          if ( v67 <= i )
            goto LABEL_83;
          v28 = v24 - v22;
          v29 = (v24 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - v22) & 0xFFFFF000;
          v30 = (v24 - v22 + 4127) & 0xFFFFF000;
          if ( v30 >= v29 )
            goto LABEL_83;
          v45 = v29 - v30;
          v46 = v30 >> 12;
          v25 = (unsigned __int8)v46;
          v47 = *(_QWORD *)(v22 + 16) & (-1LL << v46) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v29 - 1) >> 12)));
          if ( v45 < 0x1000 )
            goto LABEL_83;
          if ( !v47 )
            goto LABEL_83;
          v48 = v47 - ((v47 >> 1) & 0x5555555555555555LL);
          v25 = v48 & 0x3333333333333333LL;
          v49 = (0x101010101010101LL
               * (((v48 & 0x3333333333333333LL)
                 + ((v48 >> 2) & 0x3333333333333333LL)
                 + (((v48 & 0x3333333333333333LL) + ((v48 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          if ( *(__int16 *)(v22 + 34) < 0 )
            goto LABEL_83;
          if ( (*(_BYTE *)&SRWLock[22].0 & 2) == 0 )
          {
            v25 = SRWLock[6].Value >> 7;
            if ( v25 <= 8 )
              v25 = 8LL;
            if ( SRWLock[7].Value + (unsigned int)v49 <= v25 )
            {
LABEL_83:
              if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v17 + 32) & 0xFFF) != 0 )
              {
                v63 = RtlpHpVsChunkAlignSplit(v25, v22, v17, WORD1(RtlpHpHeapGlobals));
                if ( v63 )
                  RtlpHpVsFreeChunkInsert(SRWLock, v22, v63);
                v27 = WORD1(RtlpHpHeapGlobals);
              }
              v31 = 16 * (v27 ^ (((unsigned int)v17 ^ *(_DWORD *)v17) >> 16));
              v32 = (v17 - v22 + 4127) & 0xFFFFF000;
              v33 = (v17 + 16 * (v27 ^ (((unsigned int)v17 ^ *(_DWORD *)v17) >> 16)) - v22) & 0xFFFFF000;
              if ( v32 < v33 )
              {
                v34 = v33 - v32;
                v35 = *(_QWORD *)(v22 + 16) & (-1LL << (v32 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                               - (unsigned __int8)((unsigned __int64)(v33 - 1) >> 12)));
              }
              else
              {
                v34 = 0;
                v35 = 0LL;
              }
              v36 = v35 - ((v35 >> 1) & 0x5555555555555555LL);
              SRWLock[7].Value += (unsigned int)((0x101010101010101LL
                                                * (((v36 & 0x3333333333333333LL)
                                                  + ((v36 >> 2) & 0x3333333333333333LL)
                                                  + (((v36 & 0x3333333333333333LL) + ((v36 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              LODWORD(v64) = (unsigned __int16)(v64 ^ (((v31 + (unsigned __int64)(v17 & 0xFFF) + 4095) >> 12)
                                                     - ((unsigned __int64)(v31 + 4095) >> 12)
                                                     + (v34 >> 12)
                                                     - ((0x101010101010101LL
                                                       * (((v36 & 0x3333333333333333LL)
                                                         + ((v36 >> 2) & 0x3333333333333333LL)
                                                         + (((v36 & 0x3333333333333333LL)
                                                           + ((v36 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56))) ^ (unsigned int)v64;
              v37 = RtlpHpHeapGlobals ^ v17 ^ v64;
              *(_WORD *)v17 = v37;
              Value = SRWLock[3].Value;
              v64 = v37;
              if ( (Value & 1) == 0 )
              {
                v39 = SRWLock[2].Value;
                goto LABEL_22;
              }
              v44 = SRWLock[2].Value;
              if ( v44 )
              {
                v39 = v44 ^ (unsigned __int64)&SRWLock[2];
LABEL_22:
                v40 = 0;
                v41 = Value & 1;
                if ( !v39 )
                  goto LABEL_36;
                while ( 1 )
                {
                  if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v17 ^ (unsigned int)v17) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v39 - 8) ^ ((_DWORD)v39 - 8)) )
                  {
                    v42 = *(_QWORD *)(v39 + 8);
                    if ( v41 )
                    {
                      if ( !v42 )
                        goto LABEL_33;
                      v42 ^= v39;
                    }
                    if ( !v42 )
                    {
LABEL_33:
                      v40 = 1;
                      goto LABEL_36;
                    }
                  }
                  else
                  {
                    v42 = *(_QWORD *)v39;
                    if ( v41 )
                    {
                      if ( !v42 )
                        goto LABEL_35;
                      v42 ^= v39;
                    }
                    if ( !v42 )
                      goto LABEL_35;
                  }
                  v39 = v42;
                }
              }
              v39 = 0LL;
LABEL_35:
              v40 = 0;
LABEL_36:
              RtlRbInsertNodeEx((PRTL_RB_TREE)&SRWLock[2], (PRTL_BALANCED_NODE)v39, v40, (PRTL_BALANCED_NODE)(v17 + 8));
              goto LABEL_37;
            }
          }
          HIDWORD(v65) = HIDWORD(v65) & 0xFF00FFFF | 0x10000;
          v65 ^= RtlpHpHeapGlobals ^ v17;
          *(_BYTE *)(v17 + 6) = BYTE6(v65);
          *(_DWORD *)(v17 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v17 ^ (v28 >> 12)) | 0x200;
          if ( (_DWORD)v66 )
          {
            RtlpHpVsSubsegmentCommitPages((_DWORD)SRWLock, v22, v47, v49, 0);
          }
          else
          {
            RtlReleaseSRWLockExclusive(SRWLocka);
            RtlpHpVsSubsegmentCommitPages((_DWORD)SRWLock, v22, v47, v49, 0);
            SRWLocka = SRWLock;
            RtlAcquireSRWLockExclusive(SRWLock);
          }
          *(_DWORD *)(v17 + 8) &= ~0x200u;
        }
        RtlpHpVsSubsegmentCleanup(SRWLock, v22);
        if ( !v22 )
        {
LABEL_37:
          v15 = SRWLocka;
          v13 = (int)v66;
          continue;
        }
        v13 = (int)v66;
        if ( (_DWORD)v66 )
        {
          RtlpHpVsSubsegmentFree(SRWLock, v22, v69);
          v15 = SRWLocka;
        }
        else
        {
          RtlReleaseSRWLockExclusive(SRWLocka);
          RtlpHpVsSubsegmentFree(SRWLock, v22, v69);
          SRWLocka = SRWLock;
          v15 = SRWLock;
          RtlAcquireSRWLockExclusive(SRWLock);
        }
      }
      else
      {
        RtlpLogHeapFailure(8, *(_DWORD *)&SRWLock[16].0 ^ (unsigned int)SRWLock, v17, 0, 0LL, 0LL);
      }
    }
    while ( v14 );
  }
  if ( !v13 )
    RtlReleaseSRWLockExclusive(v15);
  return 1LL;
}
