/*
 * XREFs of RtlpHpFreeHeap @ 0x1402AC750
 * Callers:
 *     RtlpHpAllocateHeap @ 0x14024D4F0 (RtlpHpAllocateHeap.c)
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     RtlpHpMetadataFree @ 0x1403242EC (RtlpHpMetadataFree.c)
 *     ExpHpCompactionRoutine @ 0x140337D60 (ExpHpCompactionRoutine.c)
 *     ExAllocateContiguousHeapPool @ 0x1403BA2F4 (ExAllocateContiguousHeapPool.c)
 *     ExGetBigPoolInfo @ 0x1406074A0 (ExGetBigPoolInfo.c)
 *     ExPoolCleanupExpansionTable @ 0x1406077F8 (ExPoolCleanupExpansionTable.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F5F8 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140207670 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140249F70 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkCoalesce @ 0x14024B2B0 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E790 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsChunkAlignSplit @ 0x14024F060 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140289E70 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315F50 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x140323A1C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140323D50 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLargeFree @ 0x1403240FC (RtlpHpLargeFree.c)
 *     RtlpHpVsChunkComputeCost @ 0x140334330 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140337550 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140352718 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x140356EEC (RtlpHpVsSubsegmentFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1404292C0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x1405B503C (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1405B6A90 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405B6D28 (RtlpHpSizeHeap.c)
 */

__int64 RtlpHpFreeHeap(_DWORD *a1, unsigned __int64 a2, int a3, ...)
{
  int v3; // eax
  int v5; // ecx
  unsigned int v6; // r14d
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  char v12; // cl
  __int64 v13; // rdx
  char v14; // al
  char v15; // cl
  unsigned __int64 v16; // r10
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // ecx
  int v21; // r9d
  __int64 v22; // r13
  unsigned __int64 v23; // r12
  int v24; // edx
  PSLIST_ENTRY v25; // rax
  unsigned int v26; // r15d
  _SLIST_HEADER *v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // r12
  _QWORD *v30; // r15
  unsigned __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  int v35; // ecx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  unsigned int v41; // r10d
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  unsigned __int64 v44; // rax
  __int16 v45; // ax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  BOOLEAN v49; // r8
  int v50; // ecx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // edx
  unsigned int v54; // r9d
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r9
  char v62; // al
  unsigned __int64 v63; // r10
  unsigned __int64 v64; // rcx
  int v65; // ecx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  int v68; // r8d
  int v69; // ecx
  int v70; // [rsp+30h] [rbp-68h]
  unsigned int v71; // [rsp+40h] [rbp-58h]
  __int128 v72; // [rsp+48h] [rbp-50h] BYREF
  __int64 v73; // [rsp+58h] [rbp-40h]
  unsigned int v74; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v75; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  unsigned __int64 v77; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v75 = va_arg(va1, _QWORD);
  v77 = va_arg(va1, _QWORD);
  v3 = a1[5] & 0x11000001;
  v5 = a1[55];
  v6 = v3 | a3;
  if ( v5 && v5 == KeGetCurrentThread()[1].CurrentRunTime )
    v6 |= 1u;
  if ( (v6 & 0x1000000) == 0 )
  {
    if ( a1[6] )
    {
      v60 = RtlpHpExtrasGet(a1, a2, v6, 0LL);
      v61 = v60;
      if ( (unsigned __int64)(v60 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v62 = *(_BYTE *)(v60 + 2);
        if ( (v62 & 0xF) != 0
          && ((v62 & 0xF) != 1
           || (int)((__int64 (__fastcall *)(_DWORD *, unsigned __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                     a1,
                     a2,
                     3LL,
                     v61 + 16) < 0) )
        {
          return 0;
        }
      }
    }
  }
  if ( (a1[5] & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v6) == -1 )
  {
    v8 = 0;
    RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return v8;
  }
  v8 = 0;
  if ( (_WORD)a2 )
  {
    v9 = 0;
    goto LABEL_9;
  }
  v59 = RtlCSparseBitmapBitmaskRead(&unk_140C71110, 2 * ((a2 - qword_140C71108) >> 20));
  if ( v59 )
  {
    v9 = v59 - 1;
    if ( v9 != 2 )
    {
LABEL_9:
      v10 = (__int64)&a1[48 * v9 + 80];
      v11 = a2 & *(_QWORD *)v10;
      if ( (v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v11 + 0x10) ^ v11) == 0xA2E64EADA2E64EADuLL )
      {
        v12 = *(_BYTE *)(v10 + 8);
        v13 = v11 + 32 * ((unsigned __int64)(unsigned int)(a2 - v11) >> v12);
        if ( v13 )
        {
          v14 = *(_BYTE *)(v13 + 24);
          if ( (v14 & 1) != 0 )
          {
            if ( (v14 & 2) != 0 )
            {
              if ( (v14 & 0xCu) >= 8 || (((1 << v12) - 1) & a2) == 0 )
              {
LABEL_16:
                v16 = (v13 & *(_QWORD *)v10) + ((v13 - (v13 & *(_QWORD *)v10)) >> 5 << *(_BYTE *)(v10 + 8));
                if ( a2 <= v16 )
                {
                  RtlpHpSegPageRangeShrink(v10, v13, v11, v6);
                  return 1;
                }
                if ( (*(_BYTE *)(v13 + 24) & 0xC) == 8 )
                  return (unsigned int)RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v10 + 24), v16, a2, v6);
                v22 = *(_QWORD *)(v10 + 32);
                v23 = a2 - 16;
                v24 = *(_DWORD *)(v22 + 176);
                if ( (v24 & 1) != 0 && (a2 & 0xFFF) == 0 )
                  v23 = a2 - 32;
                if ( v16 )
                  goto LABEL_30;
                v63 = v23;
                v64 = (*(_QWORD *)v23 ^ RtlpHpHeapGlobals ^ v23) >> 32;
                if ( (v64 & 0xFF0000) != 0 )
                {
                  v65 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v23 + 8) ^ v23);
LABEL_109:
                  v16 = (v63 - (unsigned int)(v65 << 12)) & 0xFFFFFFFFFFFFF000uLL;
LABEL_30:
                  if ( (((unsigned __int16)(*(_WORD *)(v16 + 32) ^ *(_WORD *)(v16 + 34)) ^ 0x2BED) & 0x7FFF) == 0 )
                  {
                    if ( ((RtlpHpHeapGlobals ^ v23 ^ *(_QWORD *)v23) & 0xFF000000000000LL) != 0 )
                    {
                      v25 = 0LL;
                      v26 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v23 ^ (unsigned int)*(_QWORD *)v23) >> 16))
                          - 16;
                      v71 = v26;
                      if ( (v24 & 4) != 0 && v26 < 0x1000 )
                      {
                        v27 = (_SLIST_HEADER *)(v22 + 64);
                        if ( *(_WORD *)(v22 + 64) < 0x20u )
                        {
                          RtlpInterlockedPushEntrySList(v27, (PSLIST_ENTRY)(v23 + 16));
LABEL_36:
                          v8 = 1;
                          v28 = *(_QWORD *)(v10 + 24);
                          if ( v26 <= (unsigned int)*(unsigned __int16 *)(v28 + 60) - 16 )
                            RtlpHpLfhBucketUpdateStats(v28, v26, 0LL);
                          return v8;
                        }
                        v25 = RtlpInterlockedFlushSList(v27);
                      }
                      *(_QWORD *)(v23 + 16) = v25;
                      v29 = (_QWORD *)(v23 + 16);
                      v73 = 0LL;
                      v72 = 0LL;
                      if ( (v6 & 1) == 0 )
                        RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)v22, *(_DWORD *)(v22 + 8), &v72);
                      v30 = v29;
                      if ( !v29 )
                      {
LABEL_71:
                        if ( (v6 & 1) == 0 )
                          RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v22 + 8), (__int64)&v72);
                        v26 = v71;
                        goto LABEL_36;
                      }
                      while ( 1 )
                      {
                        v31 = *(v30 - 2);
                        v32 = (__int64)(v30 - 2);
                        v30 = (_QWORD *)*v30;
                        v33 = v32;
                        v34 = (RtlpHpHeapGlobals ^ v32 ^ v31) >> 32;
                        if ( (v34 & 0xFF0000) != 0 )
                        {
                          v35 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v32 + 8) ^ v32);
                          goto LABEL_44;
                        }
                        if ( !(_WORD)v34 )
                          goto LABEL_116;
                        v33 = v32 - 16LL * (unsigned __int16)v34;
                        v67 = (*(_QWORD *)v33 ^ RtlpHpHeapGlobals ^ (unsigned __int64)v33) >> 32;
                        if ( (v67 & 0xFF0000) != 0 )
                        {
                          v35 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v33 + 8) ^ v33);
                          goto LABEL_44;
                        }
                        if ( (_WORD)v67 )
                        {
                          v33 -= 16LL * (unsigned __int16)v67;
                          v35 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v33 + 8) ^ v33);
                        }
                        else
                        {
LABEL_116:
                          v35 = 0;
                        }
LABEL_44:
                        v36 = (v33 - (unsigned int)(v35 << 12)) & 0xFFFFFFFFFFFFF000uLL;
                        if ( (((unsigned __int16)(*(_WORD *)(v36 + 32) ^ *(_WORD *)(v36 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
                        {
                          v68 = v36;
                          v69 = 18;
                        }
                        else
                        {
                          if ( ((RtlpHpHeapGlobals ^ v32 ^ v31) & 0xFF000000000000LL) != 0 )
                          {
                            v74 = 0;
                            for ( LODWORD(v75) = 0; ; LODWORD(v75) = v58 )
                            {
                              v37 = RtlpHpVsChunkCoalesce((_RTL_RB_TREE *)v22, v36, v32, &v74);
                              v40 = v74;
                              v32 = v37;
                              if ( v74 == *(unsigned __int16 *)(v36 + 32) )
                              {
                                RtlpHpVsSubsegmentCleanup(v22, v36, v38, v39);
                                if ( v36 )
                                {
                                  if ( (v6 & 1) != 0 )
                                  {
                                    RtlpHpVsSubsegmentFree(v22, v36, v6);
                                  }
                                  else
                                  {
                                    RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v22 + 8), (__int64)&v72);
                                    RtlpHpVsSubsegmentFree(v22, v36, v6);
                                    RtlpHpAcquireQueuedLockExclusive(
                                      (volatile signed __int32 *)v22,
                                      *(_DWORD *)(v22 + 8),
                                      &v72);
                                  }
                                }
                                goto LABEL_70;
                              }
                              if ( v74 <= (unsigned int)v75 )
                                break;
                              v41 = v37 - v36;
                              v42 = (v37 - v36 + 4127) & 0xFFFFF000;
                              v43 = (v37
                                   + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v37) ^ *(unsigned __int16 *)(v37 + 2))
                                   - v36) & 0xFFFFF000;
                              if ( v42 >= v43 )
                                break;
                              v53 = v43 - v42;
                              v54 = v42 >> 12;
                              v40 = (unsigned __int8)v54;
                              v55 = *(_QWORD *)(v36 + 16) & (-1LL << v54) & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v43 - 1) >> 12)));
                              v70 = v55;
                              if ( v53 < 0x1000 )
                                break;
                              if ( !v55 )
                                break;
                              v56 = v55 - ((v55 >> 1) & 0x5555555555555555LL);
                              v40 = v56 & 0x3333333333333333LL;
                              v57 = (0x101010101010101LL
                                   * (((v56 & 0x3333333333333333LL)
                                     + ((v56 >> 2) & 0x3333333333333333LL)
                                     + (((v56 & 0x3333333333333333LL) + ((v56 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
                              v77 = v57;
                              if ( *(__int16 *)(v36 + 34) < 0 )
                                break;
                              if ( (*(_DWORD *)(v22 + 176) & 2) == 0 )
                              {
                                v40 = *(_QWORD *)(v22 + 48) >> 7;
                                if ( v40 <= 8 )
                                  v40 = 8LL;
                                if ( *(_QWORD *)(v22 + 56) + (unsigned __int64)(unsigned int)v57 <= v40 )
                                  break;
                              }
                              v75 = 0x1000000000000LL;
                              *(_BYTE *)(v32 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v32) ^ 1;
                              *(_DWORD *)(v32 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v32 ^ (v41 >> 12)) | 0x200;
                              if ( (v6 & 1) != 0 )
                              {
                                RtlpHpVsSubsegmentCommitPages(v22, v36, v55, v57, 0);
                              }
                              else
                              {
                                RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v22 + 8), (__int64)&v72);
                                RtlpHpVsSubsegmentCommitPages(v22, v36, v70, v77, 0);
                                RtlpHpAcquireQueuedLockExclusive(
                                  (volatile signed __int32 *)v22,
                                  *(_DWORD *)(v22 + 8),
                                  &v72);
                              }
                              v58 = v74;
                              *(_DWORD *)(v32 + 8) &= ~0x200u;
                            }
                            if ( (*(_DWORD *)(v22 + 176) & 1) != 0 && ((v32 + 32) & 0xFFF) != 0 )
                            {
                              v44 = RtlpHpVsChunkAlignSplit(v40, v36, v32);
                              if ( v44 )
                                RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)v22, v36, v44);
                            }
                            v74 = 0;
                            v75 = 0LL;
                            v45 = RtlpHpVsChunkComputeCost(v32, v36, &v74, (unsigned __int64 *)va);
                            v46 = ((v75 - ((v75 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v75 - ((v75 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
                            *(_QWORD *)(v22 + 56) += (unsigned int)((0x101010101010101LL
                                                                   * ((v46 + (v46 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
                            *(_WORD *)v32 = RtlpHpHeapGlobals ^ v32 ^ (v74
                                                                     + v45
                                                                     - ((0x101010101010101LL
                                                                       * ((v46 + (v46 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
                            v47 = *(_QWORD *)(v22 + 24);
                            if ( (v47 & 1) == 0 )
                            {
                              v48 = *(_QWORD *)(v22 + 16);
                              goto LABEL_56;
                            }
                            v52 = *(_QWORD *)(v22 + 16);
                            if ( v52 )
                            {
                              v48 = v52 ^ (v22 + 16);
LABEL_56:
                              v49 = 0;
                              v50 = v47 & 1;
                              if ( !v48 )
                                goto LABEL_69;
                              while ( 1 )
                              {
                                if ( (*(_DWORD *)v32 ^ (unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v32) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v48 - 8) ^ ((_DWORD)v48 - 8)) )
                                {
                                  v51 = *(_QWORD *)(v48 + 8);
                                  if ( v50 )
                                  {
                                    if ( !v51 )
                                      goto LABEL_67;
                                    v51 ^= v48;
                                  }
                                  if ( !v51 )
                                  {
LABEL_67:
                                    v49 = 1;
                                    goto LABEL_69;
                                  }
                                }
                                else
                                {
                                  v51 = *(_QWORD *)v48;
                                  if ( v50 )
                                  {
                                    if ( !v51 )
                                      goto LABEL_69;
                                    v51 ^= v48;
                                  }
                                  if ( !v51 )
                                    goto LABEL_69;
                                }
                                v48 = v51;
                              }
                            }
                            v48 = 0LL;
                            v49 = 0;
LABEL_69:
                            RtlRbInsertNodeEx(
                              (PRTL_RB_TREE)(v22 + 16),
                              (PRTL_BALANCED_NODE)v48,
                              v49,
                              (PRTL_BALANCED_NODE)(v32 + 8));
                            goto LABEL_70;
                          }
                          v68 = v32;
                          v69 = 8;
                        }
                        RtlpLogHeapFailure(v69, *(_DWORD *)(v22 + 128) ^ v22, v68, 0, 0LL, 0LL);
LABEL_70:
                        if ( !v30 )
                          goto LABEL_71;
                      }
                    }
                    v21 = v23;
                    LODWORD(v18) = *(_DWORD *)(v22 + 128) ^ v22;
                    v19 = a2;
                    v20 = 8;
LABEL_22:
                    RtlpLogHeapFailure(v20, v18, v19, v21, 0LL, 0LL);
                    return v8;
                  }
                  v19 = v16;
                  LODWORD(v18) = *(_DWORD *)(v22 + 128) ^ v22;
                  v20 = 18;
LABEL_21:
                  v21 = 0;
                  goto LABEL_22;
                }
                if ( (_WORD)v64 )
                {
                  v63 = v23 - 16LL * (unsigned __int16)v64;
                  v66 = (RtlpHpHeapGlobals ^ *(_QWORD *)v63 ^ v63) >> 32;
                  if ( (v66 & 0xFF0000) != 0 )
                  {
                    v65 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v63 + 8) ^ v63);
                    goto LABEL_109;
                  }
                  if ( (_WORD)v66 )
                  {
                    v63 -= 16LL * (unsigned __int16)v66;
                    v65 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v63 + 8) ^ v63);
                    goto LABEL_109;
                  }
                }
                v65 = 0;
                goto LABEL_109;
              }
            }
            else
            {
              v13 -= 32LL * *(unsigned __int8 *)(v13 + 31);
              v15 = *(_BYTE *)(v13 + 24);
              if ( (v15 & 3) == 3 && (v15 & 0xCu) >= 8 && v13 )
                goto LABEL_16;
            }
          }
        }
      }
      v18 = *(_QWORD *)(v10 + 56);
      v19 = a2;
      v20 = 9;
      goto LABEL_21;
    }
  }
  if ( !RtlpHpLargeFree(a1, a2, v6) )
    return v8;
  return 1LL;
}
