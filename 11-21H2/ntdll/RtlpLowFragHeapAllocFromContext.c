/*
 * XREFs of RtlpLowFragHeapAllocFromContext @ 0x180029530
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180025A98 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180025AC4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSubSegmentInitialize @ 0x18002D530 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpGetSubSegmentBlockCount @ 0x18002DB7C (RtlpGetSubSegmentBlockCount.c)
 *     RtlpAllocateUserBlock @ 0x18002ED3C (RtlpAllocateUserBlock.c)
 *     RtlpLfhFindClearBitAndSet @ 0x18006CF04 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpFreeUserBlock @ 0x18006CFB8 (RtlpFreeUserBlock.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x180075138 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180075EC0 (RtlpLowFragHeapAllocateFromZone.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18007A0E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180088794 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A7D40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A7DF0 (InterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A8E20 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180116A28 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180117158 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpLowFragHeapAllocFromContext(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 v4; // r12
  unsigned __int16 *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // r15
  struct _TEB *v17; // r14
  unsigned int v18; // r12d
  unsigned __int16 HeapData_high; // ax
  __int64 v20; // rcx
  unsigned __int16 v21; // bp
  __int16 v22; // ax
  int ClearBitAndSet; // eax
  unsigned __int64 v24; // rsi
  struct _TEB *v26; // rdi
  __int64 HeapData_low; // rcx
  __int64 UniqueThread_low; // rsi
  int v29; // ebx
  ULONG CurrentProcessorNumber; // eax
  __int16 RandomValue32; // ax
  __int64 *v32; // rax
  volatile signed __int32 *v33; // r12
  unsigned int v34; // edi
  volatile signed __int64 *v35; // r13
  __int64 *v36; // rbx
  unsigned int v37; // r15d
  __int64 v38; // rbp
  _SLIST_HEADER *v39; // rbp
  PSLIST_ENTRY v40; // rbx
  int v41; // ecx
  PSLIST_ENTRY v42; // rdi
  _SLIST_ENTRY *Next; // rcx
  __int64 v44; // rbx
  char *v45; // rcx
  unsigned int v46; // r14d
  _SLIST_ENTRY *v47; // rbx
  unsigned int v48; // r14d
  PSLIST_ENTRY v49; // r15
  _SLIST_HEADER *v50; // rbp
  PSLIST_ENTRY v51; // rdi
  unsigned int v52; // edi
  unsigned int v53; // r9d
  BOOL v54; // r8d
  signed __int64 v55; // rax
  char v56; // r10
  char v57; // cl
  int v58; // ebx
  unsigned int SubSegmentBlockCount; // eax
  __int64 v60; // rdx
  __int64 v61; // r9
  __int64 UserBlock; // rax
  __int64 v63; // rdi
  unsigned __int64 v64; // rdx
  __int64 v65; // rbp
  PSLIST_ENTRY v66; // rax
  volatile signed __int32 *v67; // rbx
  char v68; // r12
  signed __int32 v69; // eax
  __int64 *v70; // r8
  __int64 v71; // rcx
  signed __int32 v72; // eax
  __int64 *v73; // r9
  int v74; // r8d
  __int64 v75; // rax
  __int64 **v76; // rdx
  __int64 *v77; // rcx
  signed __int32 v78; // eax
  __int64 v79; // rcx
  volatile signed __int32 *v80; // rdx
  __int16 v81; // ax
  signed __int32 v82; // eax
  __int64 *v83; // r8
  __int64 v84; // rcx
  signed __int32 v85; // eax
  __int64 *v86; // r9
  int v87; // r8d
  __int64 v88; // rax
  __int64 *v89; // rcx
  signed __int32 v90; // ett
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  volatile signed __int32 *v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  signed __int32 v99; // eax
  __int64 *v100; // r9
  unsigned int j; // r8d
  __int64 v102; // rax
  __int64 *v103; // rcx
  volatile signed __int32 *v104; // rdx
  __int64 v105; // rcx
  signed __int32 v106; // eax
  __int64 *v107; // r9
  unsigned int k; // r8d
  __int64 v109; // rax
  __int64 *v110; // rcx
  signed __int32 v111; // eax
  __int64 *v112; // r9
  int v113; // r8d
  __int64 v114; // rax
  __int64 **v115; // rdx
  __int64 *v116; // rcx
  int v117; // [rsp+30h] [rbp-88h]
  __int64 i; // [rsp+30h] [rbp-88h]
  __int64 v119; // [rsp+38h] [rbp-80h]
  signed __int64 v120; // [rsp+40h] [rbp-78h]
  int v121; // [rsp+48h] [rbp-70h]
  __int64 v122; // [rsp+48h] [rbp-70h]
  __int64 v123; // [rsp+50h] [rbp-68h]
  unsigned __int16 *v124; // [rsp+58h] [rbp-60h]
  _SLIST_HEADER *ListHead; // [rsp+60h] [rbp-58h]
  char v127; // [rsp+C8h] [rbp+10h]

  v4 = 0LL;
  v127 = 0;
  v6 = (unsigned __int16 *)(a1 + 4 * (a2 + 169LL));
  v124 = v6;
  if ( (*(_BYTE *)(a1 + 672) & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v26 = NtCurrentTeb();
    HeapData_low = LOBYTE(v26->HeapData);
    UniqueThread_low = LODWORD(v26->ClientId.UniqueThread);
    v4 = (unsigned int)(HeapData_low - 1);
    v127 = HeapData_low - 1;
    if ( (int)v4 < 0 || RtlpAffinityState[HeapData_low] != UniqueThread_low )
    {
      v29 = HIDWORD(RtlpAffinityState[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v4 = v29 & CurrentProcessorNumber;
      v127 = v29 & CurrentProcessorNumber;
      LOBYTE(v26->HeapData) = (v29 & CurrentProcessorNumber) + 1;
      qword_1801786E8[v4] = UniqueThread_low;
    }
  }
  v7 = 16LL * *v6;
  v123 = v7;
  ListHead = (_SLIST_HEADER *)(a1 + 48 * (v4 + 68));
  v8 = *((unsigned __int8 *)v6 + 2);
  if ( (_DWORD)v4 )
    v9 = *(_QWORD *)(a1 + 8 * v8 + 2224) - 192LL + 192 * v4;
  else
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1192);
  v119 = v9;
LABEL_6:
  while ( 2 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      v117 = 0;
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
      v121 = v11;
      if ( (HIWORD(*(_DWORD *)(v10 + 32)) & 0x8000u) != 0 )
      {
        v117 = 1;
        v44 = v11 + 4LL * *(unsigned __int16 *)(v9 + 172);
        if ( (*(_BYTE *)(v44 + 679) & 1) == 0
          && (int)RtlpAffinitizeSegmentInfoForBucket(v11, *(unsigned __int8 *)(v44 + 678)) >= 0 )
        {
          *(_BYTE *)(v44 + 679) |= 1u;
          v45 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
          if ( *v45 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v11 + 24), *(unsigned __int8 *)(v44 + 678));
        }
      }
      v12 = 0LL;
      if ( MEMORY[0x7FFE036A] > 1u )
        v12 = 100LL;
      v13 = 0LL;
      while ( 1 )
      {
        v14 = *(_DWORD *)(v10 + 32);
        if ( (v14 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v14 )
            goto LABEL_17;
          if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), v14 | 0x80000000, v14) )
            break;
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 > (unsigned int)v12 )
        {
          v15 = 0LL;
          goto LABEL_25;
        }
      }
      if ( v14 != -1 )
      {
        v16 = *(_QWORD *)(v10 + 8);
        if ( v16 && *(_QWORD *)v10 == v9 && (_WORD)v14 )
        {
          v17 = NtCurrentTeb();
          v18 = RtlpSearchWidth[*(unsigned __int16 *)(v9 + 172)];
          HeapData_high = HIWORD(v17->HeapData);
          v20 = HeapData_high;
          v21 = (unsigned __int8)HeapData_high;
          if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
          {
            LOWORD(v20) = HIBYTE(HeapData_high);
            RandomValue32 = RtlpHeapGenerateRandomValue32(v20, v13, v12);
            v22 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
          }
          else
          {
            v22 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
          }
          HIWORD(v17->HeapData) = v22;
          ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                             v16 + 32,
                             (unsigned int)(v14 >> 16),
                             RtlpLowFragHeapRandomData[v21],
                             v18);
          *(_DWORD *)(v10 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v14 - 1);
          v15 = v16
              + ClearBitAndSet * (((unsigned int)RtlpLFHKey ^ (unsigned int)v16 ^ v121 ^ *(_DWORD *)(v16 + 24)) >> 16)
              + (unsigned __int16)(RtlpLFHKey ^ v16 ^ v121 ^ *(_WORD *)(v16 + 24));
          if ( (*(_BYTE *)(v15 + 15) & 0x3F) == 0 )
          {
LABEL_25:
            if ( v117 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
              _InterlockedCompareExchange(
                (_DWORD *)RtlpAffinityState + 1,
                2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
                SHIDWORD(RtlpAffinityState[0]));
            if ( v15 )
            {
              if ( (a4 & 8) != 0 )
                memset((void *)(v15 + 16), 0, v7 - 8);
              v24 = v7 - a3;
              if ( v24 >= 0x3F )
              {
                *(_QWORD *)(v15 + 16LL * *v124) = v24;
                *(_BYTE *)(v15 + 15) = -65;
              }
              else
              {
                *(_BYTE *)(v15 + 15) = v24 | 0x80;
              }
              return v15 + 16;
            }
            goto LABEL_37;
          }
          RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), v15, 0, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v10 + 32) = v14;
        }
      }
LABEL_17:
      v15 = 0LL;
      goto LABEL_25;
    }
LABEL_37:
    v122 = *(_QWORD *)v9;
    v32 = (__int64 *)(v9 + 16);
    for ( i = v9 + 16; ; v32 = (__int64 *)i )
    {
      v33 = 0LL;
      while ( 1 )
      {
        v34 = 0;
        v35 = 0LL;
        v36 = v32;
        v37 = 0;
        do
        {
          v38 = *v36;
          if ( *v36 )
          {
            v46 = *(unsigned __int16 *)(v38 + 32);
            if ( v46 > v37 && !RtlpIsSubSegmentReuseThresholdExceeded(v119, *v36) )
            {
              v33 = (volatile signed __int32 *)v38;
              v37 = v46;
              v35 = (volatile signed __int64 *)(v119 + 8 * (v34 + 2LL));
            }
          }
          ++v34;
          ++v36;
        }
        while ( v34 < 0x10 );
        v7 = v123;
        if ( !v35 )
        {
          v9 = v119;
          v33 = 0LL;
          goto LABEL_66;
        }
        v39 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v122 + 24) + 8LL * *(unsigned __int16 *)(v119 + 172) + 1192)
                              + 144LL);
        v40 = RtlpInterlockedPopEntrySList(v39);
        if ( v40 )
        {
          while ( 1 )
          {
            v41 = *((_DWORD *)&v40[-1].Next + 3);
            v42 = v40;
            v40 -= 3;
            if ( (v41 & 1) != 0 )
              break;
            _m_prefetchw((char *)&v40[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v40[2].Next + 3, 0xFFFFFFFD) == 2 )
            {
              Next = v40->Next->Next;
              v40->Next = 0LL;
              RtlpInterlockedPushEntrySList(Next, v42);
            }
            v40 = RtlpInterlockedPopEntrySList(v39);
            if ( !v40 )
              goto LABEL_48;
          }
          if ( !(unsigned int)RtlpSetSegmentInfo(v40, v119) )
          {
            RtlpInterlockedPushEntrySList(v39, v42);
            v40 = 0LL;
          }
        }
LABEL_48:
        if ( v33 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                 v35,
                                                 (signed __int64)v40,
                                                 (signed __int64)v33) )
          break;
        v32 = (__int64 *)i;
        if ( v40 )
        {
          RtlpInterlockedPushEntrySList(v39, &v40[3]);
          v32 = (__int64 *)i;
        }
      }
      if ( v40 )
      {
        v9 = v119;
      }
      else
      {
        v81 = (unsigned __int8)(((__int64)v35 - v119 - 16) >> 3);
        v9 = v119;
        *(_WORD *)(v119 + 174) = v81;
      }
      if ( !v33 )
        break;
      _m_prefetchw((const void *)(v33 + 11));
      if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) != 2 )
      {
LABEL_113:
        *((_BYTE *)v33 + 43) = v127;
        do
        {
          v82 = *((_DWORD *)v33 + 11);
          if ( !v82 || (v82 & 6) != 0 )
            goto LABEL_6;
        }
        while ( v82 != _InterlockedCompareExchange(v33 + 11, v82 | 6, v82) );
        v83 = *(__int64 **)v33;
        if ( *(_QWORD *)v33 == v9 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v84 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v84 = 2147353472LL;
          if ( *(_BYTE *)v84 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), *((_QWORD *)v33 + 1));
          v33 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v33);
          if ( !v33 )
            goto LABEL_6;
          _m_prefetchw((const void *)(v33 + 11));
          if ( _InterlockedAnd(v33 + 11, 0xFFFFFFF9) == 6 )
          {
            v98 = **(_QWORD **)v33;
            *(_QWORD *)v33 = 0LL;
            RtlpInterlockedPushEntrySList(v98, v33 + 12);
            goto LABEL_6;
          }
          if ( !RtlpIsSubSegmentReuseable(v9, (__int64)v33) )
            goto LABEL_6;
          do
          {
            v85 = *((_DWORD *)v33 + 11);
            if ( !v85 || (v85 & 2) != 0 )
              goto LABEL_6;
          }
          while ( v85 != _InterlockedCompareExchange(v33 + 11, v85 | 2, v85) );
          v86 = *(__int64 **)v33;
          v87 = 0;
          while ( 1 )
          {
            v88 = ((_BYTE)v87 + (unsigned __int8)*((_WORD *)v86 + 87)) & 0xF;
            v76 = (__int64 **)v86[v88 + 2];
            v89 = &v86[v88];
            if ( v76 )
            {
              if ( (*((_DWORD *)v76 + 11) & 1) == 0
                && v76 == (__int64 **)_InterlockedCompareExchange64(v89 + 2, (signed __int64)v33, (signed __int64)v76) )
              {
                _m_prefetchw((char *)v76 + 44);
                v78 = *((_DWORD *)v76 + 11);
                do
                {
                  v90 = v78;
                  v78 = _InterlockedCompareExchange((volatile signed __int32 *)v76 + 11, v78 & 0xFFFFFFFD, v78);
                }
                while ( v90 != v78 );
LABEL_106:
                if ( v78 == 2 )
                {
                  v79 = **v76;
                  *v76 = 0LL;
                  v80 = (volatile signed __int32 *)(v76 + 6);
                  goto LABEL_108;
                }
                goto LABEL_6;
              }
            }
            else if ( !_InterlockedCompareExchange64(v89 + 2, (signed __int64)v33, 0LL) )
            {
              goto LABEL_6;
            }
            if ( (unsigned int)++v87 >= 0x10 )
              goto LABEL_156;
          }
        }
        _m_prefetchw((const void *)(v33 + 11));
        if ( _InterlockedAnd(v33 + 11, 0xFFFFFFF9) != 6 )
        {
          if ( !RtlpIsSubSegmentReuseable((__int64)v83, (__int64)v33) )
            goto LABEL_6;
          do
          {
            v99 = *((_DWORD *)v33 + 11);
            if ( !v99 || (v99 & 2) != 0 )
              goto LABEL_6;
          }
          while ( v99 != _InterlockedCompareExchange(v33 + 11, v99 | 2, v99) );
          v100 = *(__int64 **)v33;
          for ( j = 0; j < 0x10; ++j )
          {
            v102 = ((_BYTE)j + (unsigned __int8)*((_WORD *)v100 + 87)) & 0xF;
            v76 = (__int64 **)v100[v102 + 2];
            v103 = &v100[v102];
            if ( v76 )
            {
              if ( (*((_DWORD *)v76 + 11) & 1) == 0
                && v76 == (__int64 **)_InterlockedCompareExchange64(v103 + 2, (signed __int64)v33, (signed __int64)v76) )
              {
                goto LABEL_105;
              }
            }
            else if ( !_InterlockedCompareExchange64(v103 + 2, (signed __int64)v33, 0LL) )
            {
              goto LABEL_6;
            }
          }
LABEL_156:
          v92 = *(_QWORD *)(**(_QWORD **)v33 + 24LL);
          v93 = *(unsigned __int16 *)(*(_QWORD *)v33 + 172LL);
          v94 = v33 + 12;
          goto LABEL_143;
        }
        v80 = v33 + 12;
        v79 = **(_QWORD **)v33;
        *(_QWORD *)v33 = 0LL;
LABEL_108:
        RtlpInterlockedPushEntrySList(v79, v80);
        goto LABEL_6;
      }
      v96 = **(_QWORD **)v33;
      *(_QWORD *)v33 = 0LL;
      RtlpInterlockedPushEntrySList(v96, v33 + 12);
    }
LABEL_66:
    v47 = 0LL;
    v48 = 0;
    v49 = 0LL;
    v50 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v122 + 24) + 8LL * *(unsigned __int16 *)(v9 + 172) + 1192) + 144LL);
    v51 = RtlpInterlockedPopEntrySList(v50);
    if ( !v51 )
      goto LABEL_67;
    while ( 1 )
    {
      v33 = (volatile signed __int32 *)&v51[-3];
      if ( (*((_DWORD *)&v51[-1].Next + 3) & 1) != 0 )
        break;
      _m_prefetchw((const void *)(v33 + 11));
      if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) == 2 )
        goto LABEL_146;
LABEL_147:
      v33 = 0LL;
      v51 = RtlpInterlockedPopEntrySList(v50);
      if ( !v51 )
        goto LABEL_148;
    }
    if ( !(unsigned int)RtlpSetSegmentInfo(&v51[-3], v9) )
    {
      v51->Next = v47;
      v47 = v51;
      if ( !v48 )
        v49 = v51;
      ++v48;
      goto LABEL_147;
    }
    _m_prefetchw((const void *)(v33 + 11));
    if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) == 2 )
    {
LABEL_146:
      v95 = **(_QWORD **)v33;
      *(_QWORD *)v33 = 0LL;
      RtlpInterlockedPushEntrySList(v95, v51);
      goto LABEL_147;
    }
    if ( !RtlpIsSubSegmentReuseable(v9, (__int64)&v51[-3]) )
      goto LABEL_147;
LABEL_148:
    if ( v48 )
      InterlockedPushListSList(v50, v47, v49, v48);
LABEL_67:
    if ( v33 )
      goto LABEL_113;
    v52 = *(_DWORD *)(v9 + 160);
    v53 = *((unsigned __int8 *)v124 + 2);
    v54 = (*(_BYTE *)(a1 + 672) & 2) != 0;
    do
    {
      v55 = *(_QWORD *)(a1 + 80);
      v56 = 0;
      if ( (_DWORD)v55 == v53 )
      {
        HIDWORD(v120) = HIDWORD(v55) + 1;
        if ( HIDWORD(v55) > 7 )
        {
          v56 = 1;
          HIDWORD(v120) = 0;
        }
      }
      else
      {
        v120 = v53 | 0x100000000LL;
      }
    }
    while ( v55 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v120, v55) );
    if ( !v56 || v54 )
    {
      v57 = 3;
      if ( v54 )
        v57 = 4;
      v52 >>= v57;
    }
    v58 = (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v124 + 2)];
    SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(
                             (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v124 + 2)],
                             v52,
                             *((_BYTE *)v124 + 3) & 1,
                             *(unsigned int *)(v9 + 164));
    v60 = (unsigned int)RtlpCalculateSubsegmentSizeIndex(
                          ((((unsigned __int64)SubSegmentBlockCount + 31) >> 3) & 0xFFFFFFFC)
                        + 68
                        + SubSegmentBlockCount * (v58 + 16));
    if ( (*((_BYTE *)v124 + 3) & 6) != 0 )
      v60 = 18LL;
    if ( v52 >= 0x400 || (_BYTE)v60 == 18 )
      v61 = 1LL;
    else
      LOBYTE(v61) = 0;
    UserBlock = RtlpAllocateUserBlock(
                  a1,
                  v60,
                  (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v124 + 2)] + 16LL,
                  v61);
    v63 = UserBlock;
    if ( UserBlock )
    {
      v64 = 1LL << *(_BYTE *)(UserBlock + 16);
      if ( v64 > 0xF0000 )
        v64 = 983040LL;
      v65 = v64 + *(unsigned __int16 *)(UserBlock + 18);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
      v66 = RtlpInterlockedPopEntrySList(ListHead);
      if ( v66 )
      {
        v67 = (volatile signed __int32 *)&v66[-3];
        if ( v66 != (PSLIST_ENTRY)48 )
        {
          v68 = v127;
LABEL_87:
          *((_BYTE *)v67 + 43) = v68;
          RtlpSubSegmentInitialize(
            a1,
            (_DWORD)v67,
            v63,
            (unsigned __int16)RtlpBucketBlockSizes[*((unsigned __int8 *)v124 + 2)],
            v65,
            (__int64)v124);
          v7 = v123;
          do
          {
            v69 = *((_DWORD *)v67 + 11);
            if ( !v69 || (v69 & 6) != 0 )
              goto LABEL_189;
          }
          while ( v69 != _InterlockedCompareExchange(v67 + 11, v69 | 6, v69) );
          v70 = *(__int64 **)v67;
          if ( *(_QWORD *)v67 == v9 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v71 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v71 = 2147353472LL;
            if ( *(_BYTE *)v71 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 24LL), *((_QWORD *)v67 + 1));
            v67 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(v9 + 8), (__int64)v67);
            if ( !v67 )
              continue;
            _m_prefetchw((const void *)(v67 + 11));
            if ( _InterlockedAnd(v67 + 11, 0xFFFFFFF9) == 6 )
            {
              v97 = **(_QWORD **)v67;
              *(_QWORD *)v67 = 0LL;
              RtlpInterlockedPushEntrySList(v97, v67 + 12);
              continue;
            }
            if ( !RtlpIsSubSegmentReuseable(v9, (__int64)v67) )
              continue;
            do
            {
              v72 = *((_DWORD *)v67 + 11);
              if ( !v72 || (v72 & 2) != 0 )
                goto LABEL_6;
            }
            while ( v72 != _InterlockedCompareExchange(v67 + 11, v72 | 2, v72) );
            v73 = *(__int64 **)v67;
            v74 = 0;
            while ( 1 )
            {
              v75 = ((_BYTE)v74 + (unsigned __int8)*((_WORD *)v73 + 87)) & 0xF;
              v76 = (__int64 **)v73[v75 + 2];
              v77 = &v73[v75];
              if ( v76 )
              {
                if ( (*((_DWORD *)v76 + 11) & 1) == 0
                  && v76 == (__int64 **)_InterlockedCompareExchange64(v77 + 2, (signed __int64)v67, (signed __int64)v76) )
                {
                  goto LABEL_105;
                }
              }
              else if ( !_InterlockedCompareExchange64(v77 + 2, (signed __int64)v67, 0LL) )
              {
                goto LABEL_6;
              }
              if ( (unsigned int)++v74 >= 0x10 )
                goto LABEL_142;
            }
          }
          _m_prefetchw((const void *)(v67 + 11));
          if ( _InterlockedAnd(v67 + 11, 0xFFFFFFF9) == 6 )
          {
            v104 = v67 + 12;
            v105 = **(_QWORD **)v67;
            *(_QWORD *)v67 = 0LL;
            goto LABEL_188;
          }
          if ( RtlpIsSubSegmentReuseable((__int64)v70, (__int64)v67) )
          {
            do
            {
              v111 = *((_DWORD *)v67 + 11);
              if ( !v111 || (v111 & 2) != 0 )
                goto LABEL_189;
            }
            while ( v111 != _InterlockedCompareExchange(v67 + 11, v111 | 2, v111) );
            v112 = *(__int64 **)v67;
            v113 = 0;
            while ( 1 )
            {
              v114 = ((_BYTE)v113 + (unsigned __int8)*((_WORD *)v112 + 87)) & 0xF;
              v115 = (__int64 **)v112[v114 + 2];
              v116 = &v112[v114];
              if ( v115 )
              {
                if ( (*((_DWORD *)v115 + 11) & 1) == 0
                  && v115 == (__int64 **)_InterlockedCompareExchange64(
                                           v116 + 2,
                                           (signed __int64)v67,
                                           (signed __int64)v115) )
                {
                  _m_prefetchw((char *)v115 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v115 + 11, 0xFFFFFFFD) == 2 )
                  {
                    v105 = **v115;
                    *v115 = 0LL;
                    v104 = (volatile signed __int32 *)(v115 + 6);
LABEL_188:
                    RtlpInterlockedPushEntrySList(v105, v104);
                  }
                  goto LABEL_189;
                }
              }
              else if ( !_InterlockedCompareExchange64(v116 + 2, (signed __int64)v67, 0LL) )
              {
                goto LABEL_189;
              }
              if ( (unsigned int)++v113 >= 0x10 )
              {
                v104 = v67 + 12;
                v105 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v67 + 24LL)
                                 + 8LL * *(unsigned __int16 *)(*(_QWORD *)v67 + 172LL)
                                 + 1192)
                     + 144LL;
                goto LABEL_188;
              }
            }
          }
          do
          {
LABEL_189:
            v106 = *((_DWORD *)v67 + 11);
            if ( !v106 || (v106 & 2) != 0 )
              goto LABEL_6;
          }
          while ( v106 != _InterlockedCompareExchange(v67 + 11, v106 | 2, v106) );
          v107 = *(__int64 **)v67;
          for ( k = 0; k < 0x10; ++k )
          {
            v109 = ((_BYTE)k + (unsigned __int8)*((_WORD *)v107 + 87)) & 0xF;
            v76 = (__int64 **)v107[v109 + 2];
            v110 = &v107[v109];
            if ( v76 )
            {
              if ( (*((_DWORD *)v76 + 11) & 1) == 0
                && v76 == (__int64 **)_InterlockedCompareExchange64(v110 + 2, (signed __int64)v67, (signed __int64)v76) )
              {
LABEL_105:
                _m_prefetchw((char *)v76 + 44);
                v78 = _InterlockedAnd((volatile signed __int32 *)v76 + 11, 0xFFFFFFFD);
                goto LABEL_106;
              }
            }
            else if ( !_InterlockedCompareExchange64(v110 + 2, (signed __int64)v67, 0LL) )
            {
              goto LABEL_6;
            }
          }
LABEL_142:
          v92 = *(_QWORD *)(**(_QWORD **)v67 + 24LL);
          v93 = *(unsigned __int16 *)(*(_QWORD *)v67 + 172LL);
          v94 = v67 + 12;
LABEL_143:
          RtlpInterlockedPushEntrySList(*(_QWORD *)(v92 + 8 * v93 + 1192) + 144LL, v94);
          continue;
        }
      }
      else
      {
        v68 = v127;
        v91 = RtlpLowFragHeapAllocateFromZone((PRTL_SRWLOCK)a1);
        v67 = (volatile signed __int32 *)v91;
        if ( v91 )
        {
          *(_QWORD *)(v91 + 8) = 0LL;
          goto LABEL_87;
        }
      }
      RtlpFreeUserBlock(a1, v63);
    }
    return 0LL;
  }
}
