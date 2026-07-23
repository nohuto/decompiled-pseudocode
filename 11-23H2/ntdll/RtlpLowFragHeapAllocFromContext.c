/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x18003D560
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetSubSegmentBlockCount @ 0x1800416A0 (RtlpGetSubSegmentBlockCount.c)
 *     RtlpSubSegmentInitialize @ 0x1800418E0 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x180043F14 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpFreeUserBlock @ 0x180047A68 (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x18006341C (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180063448 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpAllocateUserBlock @ 0x180063590 (RtlpAllocateUserBlock.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x18006FACC (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180073660 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180081E48 (RtlpSetSegmentInfo.c)
 *     RtlpLfhFindClearBitAndSet @ 0x1800A06AC (RtlpLfhFindClearBitAndSet.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A4C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A4CF0 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A5D10 (RtlGetCurrentProcessorNumber.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180118294 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1801189C4 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  unsigned __int16 *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // ebx
  __int64 v16; // r15
  __int64 v17; // rax
  struct _TEB *v18; // r14
  unsigned int v19; // r12d
  unsigned __int16 HeapData_high; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // bp
  __int16 v23; // ax
  int ClearBitAndSet; // eax
  unsigned int v25; // r13d
  __int64 v26; // rbx
  unsigned __int64 v27; // rsi
  struct _TEB *v29; // rdi
  __int64 HeapData_low; // rcx
  __int64 UniqueThread_low; // rsi
  int v32; // ebx
  ULONG CurrentProcessorNumber; // eax
  __int16 RandomValue32; // ax
  _QWORD *v35; // rax
  volatile signed __int32 *v36; // r13
  unsigned int v37; // edi
  volatile signed __int64 *v38; // r12
  _QWORD *v39; // r14
  unsigned int v40; // r15d
  __int64 v41; // rbx
  _SLIST_HEADER *v42; // rbp
  PSLIST_ENTRY v43; // rbx
  int v44; // ecx
  PSLIST_ENTRY v45; // rdi
  _SLIST_ENTRY *Next; // rcx
  __int64 v47; // rbx
  char *v48; // rcx
  unsigned int v49; // ebp
  _SLIST_ENTRY *v50; // rbx
  unsigned int v51; // r14d
  PSLIST_ENTRY v52; // r15
  _SLIST_HEADER *v53; // rbp
  PSLIST_ENTRY v54; // rdi
  unsigned int v55; // edi
  unsigned int v56; // r9d
  BOOL v57; // r8d
  signed __int64 v58; // rax
  char v59; // r10
  char v60; // cl
  int v61; // ebx
  unsigned int SubSegmentBlockCount; // eax
  __int64 v63; // rdx
  __int64 v64; // r9
  __int64 UserBlock; // rax
  __int64 v66; // rdi
  unsigned __int64 v67; // rdx
  __int64 v68; // rbp
  PSLIST_ENTRY v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  signed __int32 v73; // eax
  __int64 *v74; // r8
  __int64 v75; // rcx
  signed __int32 v76; // eax
  __int64 *v77; // r9
  int v78; // r8d
  __int64 v79; // rax
  __int64 **v80; // rdx
  __int64 *v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  signed __int32 v84; // eax
  __int64 *v85; // r8
  __int64 v86; // rcx
  signed __int32 v87; // eax
  __int64 *v88; // r9
  int v89; // r8d
  __int64 v90; // rax
  __int64 *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  signed __int32 v96; // eax
  __int64 *v97; // r9
  int v98; // r8d
  __int64 v99; // rax
  __int64 *v100; // rcx
  __int64 v101; // rcx
  signed __int32 v102; // eax
  __int64 *v103; // r9
  int v104; // r8d
  __int64 v105; // rax
  __int64 *v106; // rcx
  signed __int32 v107; // eax
  __int64 *v108; // r9
  int v109; // r8d
  __int64 v110; // rax
  volatile signed __int32 *v111; // rdx
  __int64 *v112; // rcx
  __int64 v113; // rcx
  int v114; // [rsp+30h] [rbp-88h]
  __int64 i; // [rsp+30h] [rbp-88h]
  __int64 v116; // [rsp+38h] [rbp-80h]
  signed __int64 v117; // [rsp+40h] [rbp-78h]
  __int64 v118; // [rsp+48h] [rbp-70h]
  unsigned __int16 *v119; // [rsp+50h] [rbp-68h]
  __int64 v120; // [rsp+58h] [rbp-60h]
  _SLIST_HEADER *ListHead; // [rsp+60h] [rbp-58h]
  char v123; // [rsp+C8h] [rbp+10h]

  v4 = a2 + 169LL;
  v5 = 0LL;
  v123 = 0;
  v7 = (unsigned __int16 *)(a1 + 4 * v4);
  v119 = v7;
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v7 + 3) & 1) != 0 )
  {
    v29 = NtCurrentTeb();
    HeapData_low = LOBYTE(v29->HeapData);
    UniqueThread_low = LODWORD(v29->ClientId.UniqueThread);
    v5 = (unsigned int)(HeapData_low - 1);
    v123 = HeapData_low - 1;
    if ( (int)v5 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v32 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v32 & CurrentProcessorNumber;
      v123 = v32 & CurrentProcessorNumber;
      LOBYTE(v29->HeapData) = (v32 & CurrentProcessorNumber) + 1;
      qword_1801859A8[v5] = UniqueThread_low;
    }
  }
  v8 = 16LL * *v7;
  v120 = v8;
  ListHead = (_SLIST_HEADER *)(a1 + 48 * (v5 + 68));
  v9 = *((unsigned __int8 *)v7 + 2);
  if ( (_DWORD)v5 )
    v10 = 192 * v5 + *(_QWORD *)(a1 + 8 * v9 + 2224) - 192LL;
  else
    v10 = *(_QWORD *)(a1 + 8 * v9 + 1192);
  v116 = v10;
LABEL_6:
  while ( 2 )
  {
    while ( 2 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
      {
        v114 = 0;
        v12 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
        if ( (HIWORD(*(_DWORD *)(v11 + 32)) & 0x8000u) != 0 )
        {
          v114 = 1;
          v47 = v12 + 4LL * *(unsigned __int16 *)(v10 + 172);
          if ( (*(_BYTE *)(v47 + 679) & 1) == 0
            && (int)RtlpAffinitizeSegmentInfoForBucket(v12, *(unsigned __int8 *)(v47 + 678)) >= 0 )
          {
            *(_BYTE *)(v47 + 679) |= 1u;
            v48 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
            if ( *v48 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v12 + 24), *(unsigned __int8 *)(v47 + 678));
          }
        }
        v13 = 0LL;
        if ( MEMORY[0x7FFE036A] > 1u )
          v13 = 100LL;
        v14 = 0LL;
        do
        {
          v15 = *(_DWORD *)(v11 + 32);
          if ( (v15 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v15 )
              break;
            if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v15 | 0x80000000, v15) )
              goto LABEL_16;
          }
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 <= (unsigned int)v13 );
        v15 = -1;
LABEL_16:
        if ( v15 != -1 )
        {
          v16 = *(_QWORD *)(v11 + 8);
          if ( v16 && *(_QWORD *)v11 == v10 && (_WORD)v15 )
          {
            v17 = *(unsigned __int16 *)(v10 + 172);
            v18 = NtCurrentTeb();
            v19 = RtlpSearchWidth[v17];
            HeapData_high = HIWORD(v18->HeapData);
            v21 = HeapData_high;
            v22 = (unsigned __int8)HeapData_high;
            if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
            {
              LOWORD(v21) = HIBYTE(HeapData_high);
              RandomValue32 = RtlpHeapGenerateRandomValue32(v21, v14, v13);
              v23 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
            }
            else
            {
              v23 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
            }
            HIWORD(v18->HeapData) = v23;
            ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                               v16 + 32,
                               (unsigned int)(v15 >> 16),
                               RtlpLowFragHeapRandomData[v22],
                               v19);
            v10 = v116;
            *(_DWORD *)(v11 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v15 - 1);
            v25 = RtlpLFHKey ^ v16 ^ *(_DWORD *)(v16 + 24) ^ v12;
            v26 = v16 + ClearBitAndSet * HIWORD(v25) + (unsigned __int16)v25;
            if ( (*(_BYTE *)(v26 + 15) & 0x3F) == 0 )
            {
LABEL_23:
              if ( v114 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
                _InterlockedCompareExchange(
                  (_DWORD *)RtlpAffinityState + 1,
                  2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
                  SHIDWORD(RtlpAffinityState[0]));
              if ( v26 )
              {
                if ( (a4 & 8) != 0 )
                  memset_thunk_772440563353939046((void *)(v26 + 16), 0, v8 - 8);
                v27 = v8 - a3;
                if ( v27 >= 0x3F )
                {
                  *(_QWORD *)(v26 + 16LL * *v119) = v27;
                  *(_BYTE *)(v26 + 15) = -65;
                }
                else
                {
                  *(_BYTE *)(v26 + 15) = v27 | 0x80;
                }
                return v26 + 16;
              }
              goto LABEL_35;
            }
            RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v116 + 24LL) + 24LL), v26, 0, 0LL, 0LL);
          }
          else
          {
            *(_DWORD *)(v11 + 32) = v15;
          }
        }
        v26 = 0LL;
        goto LABEL_23;
      }
LABEL_35:
      v35 = (_QWORD *)(v10 + 16);
      v118 = *(_QWORD *)v10;
      for ( i = v10 + 16; ; v35 = (_QWORD *)i )
      {
        v36 = 0LL;
        while ( 1 )
        {
          v37 = 0;
          v38 = 0LL;
          v39 = v35;
          v40 = 0;
          do
          {
            v41 = *v39;
            if ( *v39 )
            {
              v49 = *(unsigned __int16 *)(v41 + 32);
              if ( v49 > v40 && !(unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(v116, *v39) )
              {
                v36 = (volatile signed __int32 *)v41;
                v40 = v49;
                v38 = (volatile signed __int64 *)(v116 + 8 * (v37 + 2LL));
              }
            }
            ++v37;
            ++v39;
          }
          while ( v37 < 0x10 );
          v8 = v120;
          v10 = v116;
          if ( !v38 )
          {
            v36 = 0LL;
            goto LABEL_66;
          }
          v42 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v118 + 24) + 8LL * *(unsigned __int16 *)(v116 + 172) + 1192)
                                + 144LL);
          v43 = RtlpInterlockedPopEntrySList(v42);
          if ( v43 )
          {
            while ( 1 )
            {
              v44 = *((_DWORD *)&v43[-1].Next + 3);
              v45 = v43;
              v43 -= 3;
              if ( (v44 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v43[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v43[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                Next = v43->Next->Next;
                v43->Next = 0LL;
                RtlpInterlockedPushEntrySList(Next, v45);
              }
              v43 = RtlpInterlockedPopEntrySList(v42);
              if ( !v43 )
                goto LABEL_46;
            }
            if ( !(unsigned int)RtlpSetSegmentInfo(v43, v116) )
            {
              RtlpInterlockedPushEntrySList(v42, v45);
              v43 = 0LL;
            }
          }
LABEL_46:
          if ( v36 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                   v38,
                                                   (signed __int64)v43,
                                                   (signed __int64)v36) )
            break;
          v35 = (_QWORD *)i;
          if ( v43 )
          {
            RtlpInterlockedPushEntrySList(v42, &v43[3]);
            v35 = (_QWORD *)i;
          }
        }
        if ( !v43 )
          *(_WORD *)(v116 + 174) = (unsigned __int8)(((__int64)v38 - v116 - 16) >> 3);
        if ( !v36 )
          break;
        _m_prefetchw((const void *)(v36 + 11));
        if ( _InterlockedAnd(v36 + 11, 0xFFFFFFFD) != 2 )
          goto LABEL_112;
        v83 = **(_QWORD **)v36;
        *(_QWORD *)v36 = 0LL;
        RtlpInterlockedPushEntrySList(v83, v36 + 12);
      }
LABEL_66:
      v50 = 0LL;
      v51 = 0;
      v52 = 0LL;
      v53 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v118 + 24) + 8LL * *(unsigned __int16 *)(v116 + 172) + 1192)
                            + 144LL);
      v54 = RtlpInterlockedPopEntrySList(v53);
      if ( !v54 )
        goto LABEL_67;
      while ( 1 )
      {
        v36 = (volatile signed __int32 *)&v54[-3];
        if ( (*((_DWORD *)&v54[-1].Next + 3) & 1) != 0 )
          break;
        _m_prefetchw((const void *)(v36 + 11));
        if ( _InterlockedAnd(v36 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_140;
LABEL_141:
        v36 = 0LL;
        v54 = RtlpInterlockedPopEntrySList(v53);
        if ( !v54 )
          goto LABEL_142;
      }
      if ( !(unsigned int)RtlpSetSegmentInfo(&v54[-3], v116) )
      {
        v54->Next = v50;
        v50 = v54;
        if ( !v51 )
          v52 = v54;
        ++v51;
        goto LABEL_141;
      }
      _m_prefetchw((const void *)(v36 + 11));
      if ( _InterlockedAnd(v36 + 11, 0xFFFFFFFD) == 2 )
      {
LABEL_140:
        v93 = **(_QWORD **)v36;
        *(_QWORD *)v36 = 0LL;
        RtlpInterlockedPushEntrySList(v93, v54);
        goto LABEL_141;
      }
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v116, &v54[-3]) )
        goto LABEL_141;
LABEL_142:
      if ( v51 )
        InterlockedPushListSList(v53, v50, v52, v51);
LABEL_67:
      if ( v36 )
      {
        v10 = v116;
LABEL_112:
        *((_BYTE *)v36 + 43) = v123;
        do
        {
          v84 = *((_DWORD *)v36 + 11);
          if ( !v84 || (v84 & 6) != 0 )
            goto LABEL_6;
        }
        while ( v84 != _InterlockedCompareExchange(v36 + 11, v84 | 6, v84) );
        v85 = *(__int64 **)v36;
        if ( *(_QWORD *)v36 == v10 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v86 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v86 = 2147353472LL;
          if ( *(_BYTE *)v86 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 24LL) + 24LL), *((_QWORD *)v36 + 1));
          v36 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v10 + 8), (__int64)v36);
          if ( !v36 )
            continue;
          _m_prefetchw((const void *)(v36 + 11));
          if ( _InterlockedAnd(v36 + 11, 0xFFFFFFF9) != 6 )
          {
            if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v10, v36) )
            {
              while ( 1 )
              {
                v87 = *((_DWORD *)v36 + 11);
                if ( !v87 || (v87 & 2) != 0 )
                  break;
                if ( v87 == _InterlockedCompareExchange(v36 + 11, v87 | 2, v87) )
                {
                  v88 = *(__int64 **)v36;
                  v89 = 0;
                  while ( 1 )
                  {
                    v90 = ((_BYTE)v89 + (unsigned __int8)*((_WORD *)v88 + 87)) & 0xF;
                    v80 = (__int64 **)v88[v90 + 2];
                    v91 = &v88[v90];
                    if ( v80 )
                    {
                      if ( (*((_DWORD *)v80 + 11) & 1) == 0
                        && v80 == (__int64 **)_InterlockedCompareExchange64(
                                                v91 + 2,
                                                (signed __int64)v36,
                                                (signed __int64)v80) )
                      {
                        goto LABEL_130;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v91 + 2, (signed __int64)v36, 0LL) )
                    {
                      goto LABEL_6;
                    }
                    if ( (unsigned int)++v89 >= 0x10 )
                      goto LABEL_153;
                  }
                }
              }
            }
            continue;
          }
        }
        else
        {
          _m_prefetchw((const void *)(v36 + 11));
          if ( _InterlockedAnd(v36 + 11, 0xFFFFFFF9) != 6 )
          {
            if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v85, v36) )
              continue;
            do
            {
              v96 = *((_DWORD *)v36 + 11);
              if ( !v96 || (v96 & 2) != 0 )
                goto LABEL_6;
            }
            while ( v96 != _InterlockedCompareExchange(v36 + 11, v96 | 2, v96) );
            v97 = *(__int64 **)v36;
            v98 = 0;
            while ( 1 )
            {
              v99 = ((_BYTE)v98 + (unsigned __int8)*((_WORD *)v97 + 87)) & 0xF;
              v80 = (__int64 **)v97[v99 + 2];
              v100 = &v97[v99];
              if ( v80 )
              {
                if ( (*((_DWORD *)v80 + 11) & 1) == 0
                  && v80 == (__int64 **)_InterlockedCompareExchange64(
                                          v100 + 2,
                                          (signed __int64)v36,
                                          (signed __int64)v80) )
                {
LABEL_130:
                  _m_prefetchw((char *)v80 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v80 + 11, 0xFFFFFFFD) != 2 )
                    goto LABEL_6;
LABEL_105:
                  v82 = **v80;
                  *v80 = 0LL;
                  RtlpInterlockedPushEntrySList(v82, v80 + 6);
                  goto LABEL_6;
                }
              }
              else if ( !_InterlockedCompareExchange64(v100 + 2, (signed __int64)v36, 0LL) )
              {
                goto LABEL_6;
              }
              if ( (unsigned int)++v98 >= 0x10 )
              {
LABEL_153:
                RtlpInterlockedPushEntrySList(
                  *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v36 + 24LL)
                            + 8LL * *(unsigned __int16 *)(*(_QWORD *)v36 + 172LL)
                            + 1192)
                + 144LL,
                  v36 + 12);
                goto LABEL_6;
              }
            }
          }
        }
        v95 = **(_QWORD **)v36;
        *(_QWORD *)v36 = 0LL;
        RtlpInterlockedPushEntrySList(v95, v36 + 12);
        continue;
      }
      break;
    }
    v55 = *(_DWORD *)(v116 + 160);
    v56 = *((unsigned __int8 *)v119 + 2);
    v57 = (*(_BYTE *)(a1 + 672) & 2) != 0;
    do
    {
      v58 = *(_QWORD *)(a1 + 80);
      v59 = 0;
      if ( (_DWORD)v58 == v56 )
      {
        HIDWORD(v117) = HIDWORD(v58) + 1;
        if ( HIDWORD(v58) > 7 )
        {
          v59 = 1;
          HIDWORD(v117) = 0;
        }
      }
      else
      {
        v117 = v56 | 0x100000000LL;
      }
    }
    while ( v58 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v117, v58) );
    if ( !v59 || v57 )
    {
      v60 = 3;
      if ( v57 )
        v60 = 4;
      v55 >>= v60;
    }
    v61 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v119 + 2)];
    SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(
                             (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v119 + 2)],
                             v55,
                             *((_BYTE *)v119 + 3) & 1,
                             *(unsigned int *)(v116 + 164));
    v63 = (unsigned int)RtlpCalculateSubsegmentSizeIndex(
                          ((((unsigned __int64)SubSegmentBlockCount + 31) >> 3) & 0xFFFFFFFC)
                        + 68
                        + SubSegmentBlockCount * (v61 + 16));
    if ( (*((_BYTE *)v119 + 3) & 6) != 0 )
      v63 = 18LL;
    if ( v55 >= 0x400 || (_BYTE)v63 == 18 )
      v64 = 1LL;
    else
      LOBYTE(v64) = 0;
    UserBlock = RtlpAllocateUserBlock(
                  a1,
                  v63,
                  (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v119 + 2)] + 16LL,
                  v64);
    v66 = UserBlock;
    if ( !UserBlock )
      return 0LL;
    v67 = 1LL << *(_BYTE *)(UserBlock + 16);
    if ( v67 > 0xF0000 )
      v67 = 983040LL;
    v68 = v67 + *(unsigned __int16 *)(UserBlock + 18);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
    v69 = RtlpInterlockedPopEntrySList(ListHead);
    if ( !v69 )
    {
      v92 = RtlpLowFragHeapAllocateFromZone((PRTL_SRWLOCK)a1);
      v72 = v92;
      if ( !v92 )
        goto LABEL_210;
      *(_QWORD *)(v92 + 8) = 0LL;
LABEL_86:
      *(_BYTE *)(v72 + 43) = v123;
      RtlpSubSegmentInitialize(
        a1,
        v72,
        v66,
        (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v119 + 2)],
        v68,
        (__int64)v119);
      do
      {
        v73 = *(_DWORD *)(v72 + 44);
        if ( !v73 || (v73 & 6) != 0 )
        {
          v10 = v116;
          goto LABEL_183;
        }
      }
      while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 44), v73 | 6, v73) );
      v74 = *(__int64 **)v72;
      v10 = v116;
      if ( *(_QWORD *)v72 == v116 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v75 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v75 = 2147353472LL;
        if ( *(_BYTE *)v75 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v116 + 24LL) + 24LL), *(_QWORD *)(v72 + 8));
        v72 = _InterlockedExchange64((volatile __int64 *)(v116 + 8), v72);
        if ( !v72 )
          continue;
        _m_prefetchw((const void *)(v72 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v72 + 44), 0xFFFFFFF9) == 6 )
        {
          v94 = **(_QWORD **)v72;
          *(_QWORD *)v72 = 0LL;
          RtlpInterlockedPushEntrySList(v94, v72 + 48);
          continue;
        }
        if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v116, v72) )
          continue;
        do
        {
          v76 = *(_DWORD *)(v72 + 44);
          if ( !v76 || (v76 & 2) != 0 )
            goto LABEL_6;
        }
        while ( v76 != _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 44), v76 | 2, v76) );
        v77 = *(__int64 **)v72;
        v78 = 0;
        while ( 1 )
        {
          v79 = ((_BYTE)v78 + (unsigned __int8)*((_WORD *)v77 + 87)) & 0xF;
          v80 = (__int64 **)v77[v79 + 2];
          v81 = &v77[v79];
          if ( v80 )
          {
            if ( (*((_DWORD *)v80 + 11) & 1) == 0
              && v80 == (__int64 **)_InterlockedCompareExchange64(v81 + 2, v72, (signed __int64)v80) )
            {
              goto LABEL_104;
            }
          }
          else if ( !_InterlockedCompareExchange64(v81 + 2, v72, 0LL) )
          {
            goto LABEL_6;
          }
          if ( (unsigned int)++v78 >= 0x10 )
            goto LABEL_146;
        }
      }
      _m_prefetchw((const void *)(v72 + 44));
      if ( _InterlockedAnd((volatile signed __int32 *)(v72 + 44), 0xFFFFFFF9) == 6 )
      {
        v101 = **(_QWORD **)v72;
        *(_QWORD *)v72 = 0LL;
        RtlpInterlockedPushEntrySList(v101, v72 + 48);
        goto LABEL_183;
      }
      if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v74, v72) )
        goto LABEL_183;
      do
      {
        v107 = *(_DWORD *)(v72 + 44);
        if ( !v107 || (v107 & 2) != 0 )
          goto LABEL_183;
      }
      while ( v107 != _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 44), v107 | 2, v107) );
      v108 = *(__int64 **)v72;
      v109 = 0;
      while ( 1 )
      {
        v110 = ((_BYTE)v109 + (unsigned __int8)*((_WORD *)v108 + 87)) & 0xF;
        v111 = (volatile signed __int32 *)v108[v110 + 2];
        v112 = &v108[v110];
        if ( v111 )
        {
          if ( (v111[11] & 1) == 0
            && v111 == (volatile signed __int32 *)_InterlockedCompareExchange64(v112 + 2, v72, (signed __int64)v111) )
          {
            _m_prefetchw((const void *)(v111 + 11));
            if ( _InterlockedAnd(v111 + 11, 0xFFFFFFFD) == 2 )
            {
              v113 = **(_QWORD **)v111;
              *(_QWORD *)v111 = 0LL;
              RtlpInterlockedPushEntrySList(v113, v111 + 12);
            }
            do
            {
LABEL_183:
              v102 = *(_DWORD *)(v72 + 44);
              if ( !v102 || (v102 & 2) != 0 )
                goto LABEL_6;
            }
            while ( v102 != _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 44), v102 | 2, v102) );
            v103 = *(__int64 **)v72;
            v104 = 0;
            while ( 2 )
            {
              v105 = ((_BYTE)v104 + (unsigned __int8)*((_WORD *)v103 + 87)) & 0xF;
              v80 = (__int64 **)v103[v105 + 2];
              v106 = &v103[v105];
              if ( !v80 )
              {
                if ( !_InterlockedCompareExchange64(v106 + 2, v72, 0LL) )
                  goto LABEL_6;
LABEL_189:
                if ( (unsigned int)++v104 >= 0x10 )
                {
LABEL_146:
                  RtlpInterlockedPushEntrySList(
                    *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v72 + 24LL)
                              + 8LL * *(unsigned __int16 *)(*(_QWORD *)v72 + 172LL)
                              + 1192)
                  + 144LL,
                    v72 + 48);
                  goto LABEL_6;
                }
                continue;
              }
              break;
            }
            if ( (*((_DWORD *)v80 + 11) & 1) != 0
              || v80 != (__int64 **)_InterlockedCompareExchange64(v106 + 2, v72, (signed __int64)v80) )
            {
              goto LABEL_189;
            }
LABEL_104:
            _m_prefetchw((char *)v80 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v80 + 11, 0xFFFFFFFD) == 2 )
              goto LABEL_105;
            goto LABEL_6;
          }
        }
        else if ( !_InterlockedCompareExchange64(v112 + 2, v72, 0LL) )
        {
          goto LABEL_183;
        }
        if ( (unsigned int)++v109 >= 0x10 )
        {
          RtlpInterlockedPushEntrySList(
            *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v72 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v72 + 172LL) + 1192)
          + 144LL,
            v72 + 48);
          goto LABEL_183;
        }
      }
    }
    break;
  }
  v72 = (__int64)&v69[-3];
  if ( v69 != (PSLIST_ENTRY)48 )
    goto LABEL_86;
LABEL_210:
  RtlpFreeUserBlock(a1, v66, v70, v71);
  return 0LL;
}
