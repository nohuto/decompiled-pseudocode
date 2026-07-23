/*
 * XREFs of RtlpHpFreeHeap @ 0x18003B1F0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeap @ 0x180066CD8 (RtlpHpAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18008E8AC (RtlpHpReallocMove.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeShrink @ 0x180034458 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsChunkCoalesce @ 0x180037110 (RtlpHpVsChunkCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039210 (RtlRbInsertNodeEx.c)
 *     RtlpHpSizeHeap @ 0x18003ACD0 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C490 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpExtrasGet @ 0x180045A18 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180045A84 (RtlpHpSizeHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063E58 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x180064104 (RtlpHpLargeFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x180067738 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180067788 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180069E80 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006D96C (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A4CC0 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800B085E (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x180118780 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012368C (RtlpHpSegGetDescriptorValidateSafe.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180123FB8 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpFreeHeap(_DWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, __int64 a5)
{
  int v5; // ebx
  unsigned __int64 v6; // r14
  int v7; // edx
  int v8; // r10d
  int v10; // ecx
  _WORD *v11; // r12
  unsigned int v12; // esi
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 DescriptorValidateSafe; // rax
  char v18; // cl
  __int64 v19; // rdx
  char v20; // cl
  unsigned __int64 v21; // r10
  unsigned int v22; // esi
  _DWORD *SharedData; // rcx
  __int64 v24; // rcx
  __int64 v26; // r11
  unsigned __int64 v27; // r12
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int64 *v32; // r12
  _RTL_SRWLOCK *v33; // rax
  __int64 *v34; // r14
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rcx
  int v38; // ecx
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r12
  unsigned __int16 v44; // r11
  unsigned int v45; // r10d
  unsigned int v46; // r8d
  unsigned int v47; // r8d
  unsigned int v48; // edx
  unsigned __int64 v49; // r12
  PRTL_SRWLOCK v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r10d
  unsigned int v53; // r9d
  unsigned int v54; // r8d
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  _RTL_RB_TREE *v57; // r11
  __int64 v58; // rax
  unsigned __int64 Value; // rcx
  unsigned __int64 Root; // rdx
  BOOLEAN v61; // al
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r8
  int v65; // ecx
  int v66; // r10d
  __int64 v67; // rax
  BOOL v68; // r15d
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  signed __int64 v72; // rax
  signed __int64 v73; // rcx
  __int64 v74; // rcx
  __int16 v75; // ax
  char v76; // al
  unsigned __int64 v77; // r10
  unsigned __int64 v78; // rdx
  int v79; // edx
  unsigned __int64 v80; // rdx
  int v81; // r9d
  int v82; // r8d
  int v83; // ecx
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  int v86; // ecx
  __int64 v87; // rax
  unsigned int v88; // [rsp+30h] [rbp-78h]
  PRTL_SRWLOCK v89; // [rsp+38h] [rbp-70h]
  _RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp-68h]
  unsigned __int64 v91; // [rsp+48h] [rbp-60h]
  __int64 v92; // [rsp+50h] [rbp-58h]
  __int64 v93; // [rsp+58h] [rbp-50h]
  int v94; // [rsp+60h] [rbp-48h]
  unsigned int v96; // [rsp+C0h] [rbp+18h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = a1[55];
  v8 = a3 | a1[5] & 0x11000001;
  v10 = 0;
  if ( v7 )
    LOBYTE(v10) = v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v11 = (_WORD *)a5;
  v12 = v8 | 1;
  v13 = 0LL;
  if ( !v10 )
    v12 = v8;
  if ( a5 )
  {
    v13 = RtlpHpExtrasGet(a1, v6, v12);
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v75 = 0;
    else
      v75 = *(_WORD *)v13;
    *v11 = v75;
  }
  else if ( a4 )
  {
    *a4 = RtlpHpSizeHeapInternal(a1, v6, v12, 0LL);
  }
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( a1[6] )
    {
      if ( (v13 || (v13 = RtlpHpExtrasGet(a1, v6, v12)) != 0) && v13 != -1 )
      {
        v76 = *(_BYTE *)(v13 + 2);
        if ( (v76 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v76 & 0xF, (_DWORD)a1, v6, 3, v13 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (a1[5] & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)a1, v6, v12) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)a1, v6, 0, 0LL, 0LL);
    return 0LL;
  }
  if ( (_WORD)v6 )
  {
    v14 = 0;
  }
  else
  {
    v67 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((v6 - qword_180188A88) >> 20));
    if ( !v67 || (v14 = v67 - 1, v14 == 2) )
    {
      v68 = RtlpHpLargeFree(a1, v6, v12) != 0;
      if ( RtlGetCurrentServiceSessionId() )
        v69 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v69 = 2147353472LL;
      if ( *(_BYTE *)v69 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v68 )
        RtlpLogHeapFreeEvent(a1, v6, 3LL);
      return v68;
    }
  }
  v15 = (__int64)&a1[48 * v14 + 80];
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v15, v6);
    v16 = RtlpHpHeapGlobals;
  }
  else
  {
    v16 = RtlpHpHeapGlobals;
    if ( (v15 ^ RtlpHpHeapGlobals ^ *(_QWORD *)((*(_QWORD *)v15 & v6) + 0x10) ^ *(_QWORD *)v15 & v6) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = (*(_QWORD *)v15 & v6)
                             + 32
                             * ((unsigned __int64)((unsigned int)v6 - (*(_DWORD *)v15 & (unsigned int)v6)) >> *(_BYTE *)(v15 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    goto LABEL_174;
  v18 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v18 & 1) == 0 )
    goto LABEL_174;
  if ( (v18 & 2) == 0 )
  {
    v19 = -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31) + DescriptorValidateSafe;
    v20 = *(_BYTE *)(v19 + 24);
    if ( (v20 & 3) == 3 && (v20 & 0xCu) >= 8 )
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      if ( v19 )
        goto LABEL_22;
    }
LABEL_174:
    RtlpLogHeapFailure(9, *(_QWORD *)(v15 + 56), v6, 0, 0LL, 0LL);
    return 0;
  }
  if ( (v18 & 0xCu) < 8 && (((1 << *(_BYTE *)(v15 + 8)) - 1) & v6) != 0 )
    goto LABEL_174;
LABEL_22:
  v21 = (DescriptorValidateSafe & *(_QWORD *)v15)
      + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v15)) >> 5 << *(_BYTE *)(v15 + 8));
  if ( v6 <= v21 )
  {
    RtlpHpSegPageRangeShrink(v15, DescriptorValidateSafe, 0, v12);
    v22 = 1;
    if ( RtlGetCurrentServiceSessionId() )
      v74 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v74 = 2147353472LL;
    if ( *(_BYTE *)v74 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapFreeEvent(*(_QWORD *)(v15 + 56), v6, 3LL);
    return v22;
  }
  if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 8 )
  {
    v22 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v15 + 24), v21, v6, v12);
    goto LABEL_25;
  }
  v26 = *(_QWORD *)(v15 + 32);
  v27 = v6 - 16;
  v89 = (PRTL_SRWLOCK)v26;
  v28 = *(_DWORD *)(v26 + 176);
  if ( (v28 & 1) != 0 && (v6 & 0xFFF) == 0 )
    v27 = v6 - 32;
  if ( !v21 )
  {
    v77 = v27;
    v78 = (v16 ^ *(_QWORD *)v27 ^ v27) >> 32;
    if ( (v78 & 0xFF0000) != 0 )
    {
      v79 = (unsigned __int8)(v16 ^ *(_BYTE *)(v27 + 8) ^ v27);
LABEL_147:
      v21 = (v77 - (unsigned int)(v79 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_35;
    }
    if ( (_WORD)v78 )
    {
      v77 = v27 - 16LL * (unsigned __int16)v78;
      v80 = (v16 ^ *(_QWORD *)v77 ^ v77) >> 32;
      if ( (v80 & 0xFF0000) != 0 )
      {
        v79 = (unsigned __int8)(v16 ^ *(_BYTE *)(v77 + 8) ^ v77);
        goto LABEL_147;
      }
      if ( (_WORD)v80 )
      {
        v77 -= 16LL * (unsigned __int16)v80;
        v79 = (unsigned __int8)(v16 ^ *(_BYTE *)(v77 + 8) ^ v77);
        goto LABEL_147;
      }
    }
    v79 = 0;
    goto LABEL_147;
  }
LABEL_35:
  if ( (((unsigned __int16)(*(_WORD *)(v21 + 32) ^ *(_WORD *)(v21 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v81 = 0;
    v82 = v21;
    v83 = 18;
LABEL_167:
    RtlpLogHeapFailure(v83, *(_DWORD *)(v26 + 128) ^ v26, v82, v81, 0LL, 0LL);
    v22 = 0;
    v5 = 1;
    goto LABEL_25;
  }
  v29 = *(_QWORD *)v27;
  if ( ((v16 ^ v27 ^ *(_QWORD *)v27) & 0xFF000000000000LL) == 0 )
  {
    v81 = v27;
    v82 = v6;
    v83 = 8;
    goto LABEL_167;
  }
  v30 = 0LL;
  v31 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v29 ^ (unsigned int)v27) >> 16)) - 16;
  v88 = v31;
  if ( (v28 & 4) != 0 && v31 < 0x1000 )
  {
    v84 = v26 + 64;
    if ( *(_WORD *)(v26 + 64) < 0x20u )
    {
      RtlpInterlockedPushEntrySList(v84, v27 + 16);
      goto LABEL_102;
    }
    v30 = RtlpInterlockedFlushSList(v84, v29, v16);
    v26 = (__int64)v89;
  }
  v32 = (__int64 *)(v27 + 16);
  *v32 = v30;
  if ( (v12 & 1) != 0 )
  {
    v33 = (_RTL_SRWLOCK *)a5;
    SRWLock = (_RTL_SRWLOCK *)a5;
  }
  else
  {
    SRWLock = (_RTL_SRWLOCK *)v26;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v26);
    v26 = (__int64)v89;
    v33 = SRWLock;
  }
  if ( !v32 )
    goto LABEL_100;
  v34 = v32;
  do
  {
    v35 = (unsigned __int64)(v34 - 2);
    v34 = (__int64 *)*v34;
    v36 = v35;
    v37 = (RtlpHpHeapGlobals ^ *(_QWORD *)v35 ^ v35) >> 32;
    if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v35 ^ v35) & 0xFF000000000000LL) != 0 )
    {
      v38 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v35 + 8) ^ v35);
      goto LABEL_44;
    }
    if ( !(_WORD)v37 )
      goto LABEL_158;
    v36 = v35 - 16LL * (unsigned __int16)v37;
    v85 = (RtlpHpHeapGlobals ^ *(_QWORD *)v36 ^ v36) >> 32;
    if ( (v85 & 0xFF0000) != 0 )
    {
      v38 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v36 + 8) ^ v36);
      goto LABEL_44;
    }
    if ( (_WORD)v85 )
    {
      v36 -= 16LL * (unsigned __int16)v85;
      v38 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v36 + 8) ^ v36);
    }
    else
    {
LABEL_158:
      v38 = 0;
    }
LABEL_44:
    v39 = (v36 - (unsigned int)(v38 << 12)) & 0xFFFFFFFFFFFFF000uLL;
    if ( (((unsigned __int16)(*(_WORD *)(v39 + 32) ^ *(_WORD *)(v39 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
    {
      LODWORD(v35) = v39;
      v86 = 18;
      goto LABEL_165;
    }
    if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v35 ^ v35) & 0xFF000000000000LL) == 0 )
    {
      v86 = 8;
LABEL_165:
      RtlpLogHeapFailure(v86, *(_DWORD *)(v26 + 128) ^ v26, v35, 0, 0LL, 0LL);
LABEL_73:
      v26 = (__int64)v89;
LABEL_97:
      v33 = SRWLock;
      continue;
    }
    LODWORD(a5) = 0;
    while ( 1 )
    {
      v40 = RtlpHpVsChunkCoalesce(v26, v39, v35, &v96);
      v42 = v96;
      v43 = v40;
      v91 = v40;
      if ( v96 == *(unsigned __int16 *)(v39 + 32) )
        break;
      if ( v96 <= (unsigned int)a5 )
      {
        v44 = WORD1(RtlpHpHeapGlobals);
LABEL_52:
        v50 = v89;
LABEL_53:
        if ( (*(_BYTE *)&v50[22].0 & 1) != 0 && ((v43 + 32) & 0xFFF) != 0 )
        {
          v87 = RtlpHpVsChunkAlignSplit(v42, v39, v43, v41);
          if ( v87 )
            RtlpHpVsFreeChunkInsert(v89, v39, v87);
          v44 = WORD1(RtlpHpHeapGlobals);
        }
        v51 = 16 * (v44 ^ ((*(_DWORD *)v43 ^ (unsigned int)v43) >> 16));
        v52 = (v43 - v39 + 4127) & 0xFFFFF000;
        v53 = (v43 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)v43 ^ (unsigned int)v43) >> 16)) - v39) & 0xFFFFF000;
        if ( v52 < v53 )
        {
          v54 = v53 - v52;
          v55 = *(_QWORD *)(v39 + 16) & (-1LL << (v52 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                         - (unsigned __int8)((unsigned __int64)(v53 - 1) >> 12)));
        }
        else
        {
          v54 = 0;
          v55 = 0LL;
        }
        v56 = ((v55 - ((v55 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v55 - ((v55 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
        v89[7].Value += (unsigned int)((0x101010101010101LL * ((v56 + (v56 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        v57 = (_RTL_RB_TREE *)&v89[2];
        LODWORD(v92) = (unsigned __int16)(v92 ^ (((v51 + (v43 & 0xFFF) + 4095) >> 12)
                                               - ((unsigned __int64)(v51 + 4095) >> 12)
                                               + (v54 >> 12)
                                               - ((0x101010101010101LL * ((v56 + (v56 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56))) ^ (unsigned int)v92;
        v58 = RtlpHpHeapGlobals ^ v43 ^ v92;
        *(_WORD *)v43 = v58;
        Value = v89[3].Value;
        v92 = v58;
        if ( (Value & 1) == 0 )
        {
          Root = (unsigned __int64)v57->Root;
          goto LABEL_58;
        }
        if ( v57->Root )
        {
          Root = (unsigned __int64)v57->Root ^ (unsigned __int64)v57;
LABEL_58:
          v61 = 0;
          if ( !Root )
            goto LABEL_72;
          while ( 1 )
          {
            if ( (*(_DWORD *)v43 ^ (unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v43) >= (*(_DWORD *)(Root - 8) ^ (unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)Root - 8)) )
            {
              v62 = *(_QWORD *)(Root + 8);
              if ( (Value & 1) != 0 )
              {
                if ( !v62 )
                  goto LABEL_69;
                v62 ^= Root;
              }
              if ( !v62 )
              {
LABEL_69:
                v61 = 1;
                goto LABEL_72;
              }
            }
            else
            {
              v62 = *(_QWORD *)Root;
              if ( (Value & 1) != 0 )
              {
                if ( !v62 )
                  goto LABEL_71;
                v62 ^= Root;
              }
              if ( !v62 )
                goto LABEL_71;
            }
            Root = v62;
          }
        }
        Root = 0LL;
LABEL_71:
        v61 = 0;
LABEL_72:
        RtlRbInsertNodeEx(v57, (PRTL_BALANCED_NODE)Root, v61, (PRTL_BALANCED_NODE)(v43 + 8));
        goto LABEL_73;
      }
      v44 = WORD1(RtlpHpHeapGlobals);
      v45 = v40 - v39;
      v42 = (unsigned int)v40;
      v46 = WORD1(RtlpHpHeapGlobals) ^ WORD1(v40) ^ *(unsigned __int16 *)(v40 + 2);
      a5 = (unsigned int)v40;
      v41 = ((_DWORD)v40 - (_DWORD)v39 + 4127) & 0xFFFFF000;
      v47 = (v40 + 16 * v46 - v39) & 0xFFFFF000;
      if ( (unsigned int)v41 >= v47 )
        goto LABEL_52;
      v48 = v47 - v41;
      v41 = (unsigned int)v41 >> 12;
      v42 = (unsigned __int8)v41;
      v49 = *(_QWORD *)(v39 + 16) & (-1LL << v41) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                             - (unsigned __int8)((unsigned __int64)(v47 - 1) >> 12)));
      if ( v48 < 0x1000
        || !v49
        || (v63 = v49 - ((v49 >> 1) & 0x5555555555555555LL),
            v42 = v63 & 0x3333333333333333LL,
            v64 = (0x101010101010101LL
                 * (((v63 & 0x3333333333333333LL)
                   + ((v63 >> 2) & 0x3333333333333333LL)
                   + (((v63 & 0x3333333333333333LL) + ((v63 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
            v94 = v64,
            *(__int16 *)(v39 + 34) < 0) )
      {
        v43 = v91;
        goto LABEL_52;
      }
      v65 = (int)v89;
      if ( (*(_BYTE *)&v89[22].0 & 2) == 0 )
      {
        v50 = v89;
        v42 = v89[6].Value >> 7;
        if ( v42 <= 8 )
          v42 = 8LL;
        if ( v89[7].Value + (unsigned int)v64 <= v42 )
        {
          v43 = v91;
          goto LABEL_53;
        }
        v65 = (int)v89;
      }
      v66 = a5 ^ (v45 >> 12);
      HIDWORD(v93) = HIDWORD(v93) & 0xFF00FFFF | 0x10000;
      v93 ^= RtlpHpHeapGlobals ^ v91;
      *(_BYTE *)(v91 + 6) = BYTE6(v93);
      *(_DWORD *)(v91 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v66) | 0x200;
      if ( (v12 & 1) != 0 )
      {
        RtlpHpVsSubsegmentCommitPages(v65, v39, v49, v64, 0);
      }
      else
      {
        RtlReleaseSRWLockExclusive(SRWLock);
        RtlpHpVsSubsegmentCommitPages((_DWORD)v89, v39, v49, v94, 0);
        SRWLock = v89;
        RtlAcquireSRWLockExclusive(v89);
      }
      v35 = v91;
      v26 = (__int64)v89;
      LODWORD(a5) = v96;
      *(_DWORD *)(v91 + 8) &= ~0x200u;
    }
    RtlpHpVsSubsegmentCleanup(v89, v39);
    if ( !v39 )
      goto LABEL_97;
    if ( (v12 & 1) != 0 )
    {
      RtlpHpVsSubsegmentFree(v26, v39, v12);
      v33 = SRWLock;
      v26 = (__int64)v89;
    }
    else
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      RtlpHpVsSubsegmentFree(v89, v39, v12);
      SRWLock = v89;
      RtlAcquireSRWLockExclusive(v89);
      v26 = (__int64)v89;
      v33 = v89;
    }
  }
  while ( v34 );
  v6 = a2;
  v31 = v88;
LABEL_100:
  if ( (v12 & 1) == 0 )
    RtlReleaseSRWLockExclusive(v33);
LABEL_102:
  v22 = 1;
  v70 = *(_QWORD *)(v15 + 24);
  v5 = 1;
  if ( v31 <= (unsigned int)*(unsigned __int16 *)(v70 + 60) - 16 )
  {
    v71 = 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)(v31 + 15) >> 4] + 128;
    if ( (*(_QWORD *)(v71 + v70) & 1) != 0 )
    {
      do
      {
        a5 = *(_QWORD *)(v71 + v70);
        v72 = a5;
        v73 = a5;
        if ( (a5 & 1) == 0 )
          break;
        if ( WORD1(a5) > 1u )
        {
          --WORD1(a5);
          v73 = a5;
        }
      }
      while ( v72 != _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + v70), v73, v72) );
    }
  }
LABEL_25:
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v24 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v24 = 2147353472LL;
  if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( v22 )
      RtlpLogHeapFreeEvent(*(_QWORD *)(v15 + 56), v6, (unsigned int)(v5 + 2));
  }
  return v22;
}
