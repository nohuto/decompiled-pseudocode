/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x180118AA0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041DF0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpIsSubSegmentReuseable @ 0x18006354C (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180063578 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180072FF0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x1800817D8 (RtlpSetSegmentInfo.c)
 *     RtlpLfhFindClearBitAndSet @ 0x18009E6BC (RtlpLfhFindClearBitAndSet.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A2B80 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A2C30 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180116E14 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180117544 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(__int64 a1, char a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  char *v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r8d
  signed __int32 v10; // ebx
  __int64 v11; // r12
  struct _TEB *v12; // r15
  unsigned int v13; // r13d
  unsigned __int16 HeapData_high; // bp
  __int16 RandomValue32; // ax
  __int16 v16; // ax
  int ClearBitAndSet; // eax
  __int64 v18; // r8
  signed __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 *v21; // r15
  unsigned int v22; // ebp
  volatile signed __int64 *v23; // rsi
  __int64 v24; // rbx
  unsigned int v25; // r12d
  unsigned __int16 *v26; // r12
  __int64 *v27; // r13
  _SLIST_HEADER *v28; // rbp
  _QWORD *p_Next; // r15
  __int64 v30; // rbx
  __int128 *v31; // rcx
  PSLIST_ENTRY v32; // rax
  __int128 *v33; // rcx
  __int64 v34; // rcx
  int v35; // ebp
  signed __int64 v36; // rbx
  _QWORD *v37; // r15
  _SLIST_HEADER *v38; // r12
  PSLIST_ENTRY v39; // rsi
  __int128 *v40; // rcx
  signed __int32 v41; // eax
  __int128 **v42; // r8
  __int128 *v43; // rcx
  signed __int32 v44; // eax
  __int128 **v45; // r8
  int v46; // r9d
  __int64 v47; // rcx
  __int128 *v48; // rdx
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  signed __int32 v51; // eax
  __int128 **v52; // r8
  int v53; // r9d
  __int64 v54; // rcx
  int v56; // [rsp+70h] [rbp+8h]
  __int64 v57; // [rsp+70h] [rbp+8h]

  v2 = 0;
LABEL_2:
  while ( 2 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !v4 )
      goto LABEL_33;
    v56 = 0;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( (HIWORD(*(_DWORD *)(v4 + 32)) & 0x8000u) != 0 )
    {
      v6 = *(unsigned __int16 *)(a1 + 172);
      v56 = 1;
      if ( (*(_BYTE *)(v5 + 4 * v6 + 679) & 1) == 0
        && (int)RtlpAffinitizeSegmentInfoForBucket(v5, *(unsigned __int8 *)(v5 + 4 * v6 + 678)) >= 0 )
      {
        *(_BYTE *)(v5 + 4 * v6 + 679) |= 1u;
        v7 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
        if ( *v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v5 + 4 * v6 + 678));
      }
    }
    v8 = 0;
    v9 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
    do
    {
      v10 = *(_DWORD *)(v4 + 32);
      if ( v10 >= 0 )
      {
        if ( !(_WORD)v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v10 | 0x80000000, v10) )
          goto LABEL_18;
      }
      ++v8;
    }
    while ( v8 <= v9 );
    v10 = -1;
LABEL_18:
    if ( v10 == -1 )
      goto LABEL_28;
    v11 = *(_QWORD *)(v4 + 8);
    if ( !v11 || *(_QWORD *)v4 != a1 || !(_WORD)v10 )
    {
      *(_DWORD *)(v4 + 32) = v10;
      goto LABEL_28;
    }
    v12 = NtCurrentTeb();
    v13 = RtlpSearchWidth[*(unsigned __int16 *)(a1 + 172)];
    HeapData_high = (unsigned __int8)HIWORD(v12->HeapData);
    if ( HeapData_high == HIBYTE(HIWORD(v12->HeapData)) )
    {
      RandomValue32 = RtlpHeapGenerateRandomValue32();
      v16 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
    }
    else
    {
      v16 = (unsigned __int8)(HIWORD(v12->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v12->HeapData);
    }
    HIWORD(v12->HeapData) = v16;
    ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                       (unsigned __int64 *)(v11 + 32),
                       v10 >> 16,
                       RtlpLowFragHeapRandomData[HeapData_high],
                       v13);
    v2 = 0;
    *(_DWORD *)(v4 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v10 - 1);
    v18 = v11
        + ClearBitAndSet
        * (((unsigned int)RtlpLFHKey ^ (unsigned int)v5 ^ *(_DWORD *)(v11 + 24) ^ (unsigned int)v11) >> 16)
        + (unsigned __int16)(RtlpLFHKey ^ v5 ^ *(_WORD *)(v11 + 24) ^ v11);
    if ( (*(_BYTE *)(v18 + 15) & 0x3F) != 0 )
    {
      RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), v18, 0, 0LL, 0LL);
LABEL_28:
      v18 = 0LL;
    }
    if ( v56 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
      _InterlockedCompareExchange(
        (_DWORD *)RtlpAffinityState + 1,
        2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
        SHIDWORD(RtlpAffinityState[0]));
    if ( v18 )
      return v18;
LABEL_33:
    v57 = *(_QWORD *)a1;
    while ( 1 )
    {
      v19 = 0LL;
LABEL_35:
      v20 = (__int64 *)(a1 + 16);
      while ( 1 )
      {
        v21 = v20;
        v22 = 0;
        v23 = 0LL;
        do
        {
          v24 = *v21;
          if ( *v21 )
          {
            v25 = *(unsigned __int16 *)(v24 + 32);
            if ( v25 > v2 && !RtlpIsSubSegmentReuseThresholdExceeded(a1, *v21) )
            {
              v19 = v24;
              v2 = v25;
              v23 = (volatile signed __int64 *)(a1 + 8 * (v22 + 2LL));
            }
          }
          ++v22;
          ++v21;
        }
        while ( v22 < 0x10 );
        v26 = (unsigned __int16 *)(a1 + 172);
        if ( !v23 )
        {
          v19 = 0LL;
          v27 = (__int64 *)(v57 + 24);
          goto LABEL_60;
        }
        v27 = (__int64 *)(v57 + 24);
        v28 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v57 + 24) + 8LL * *v26 + 1192) + 144LL);
        while ( 1 )
        {
          v32 = RtlpInterlockedPopEntrySList(v28);
          v30 = (__int64)v32;
          if ( !v32 )
            break;
          p_Next = &v32->Next;
          v30 = (__int64)&v32[-3];
          if ( (*((_DWORD *)&v32[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)RtlpSetSegmentInfo(v30, (volatile signed __int64 *)a1) )
            {
              RtlpInterlockedPushEntrySList((__int128 *)v28, p_Next);
              v30 = 0LL;
            }
            break;
          }
          _m_prefetchw((const void *)(v30 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v30 + 44), 0xFFFFFFFD) == 2 )
          {
            v31 = **(__int128 ***)v30;
            *(_QWORD *)v30 = 0LL;
            RtlpInterlockedPushEntrySList(v31, v32);
          }
        }
        if ( v19 == _InterlockedCompareExchange64(v23, v30, v19) )
          break;
        v2 = 0;
        v20 = (__int64 *)(a1 + 16);
        if ( v30 )
        {
          RtlpInterlockedPushEntrySList((__int128 *)v28, (_QWORD *)(v30 + 48));
          goto LABEL_35;
        }
      }
      if ( !v30 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v23 - a1 - 16) >> 3);
      if ( !v19 )
        break;
      _m_prefetchw((const void *)(v19 + 44));
      v2 = 0;
      if ( _InterlockedAnd((volatile signed __int32 *)(v19 + 44), 0xFFFFFFFD) != 2 )
        goto LABEL_75;
      v33 = **(__int128 ***)v19;
      *(_QWORD *)v19 = 0LL;
      RtlpInterlockedPushEntrySList(v33, (_QWORD *)(v19 + 48));
    }
LABEL_60:
    v34 = *v27;
    v2 = 0;
    v35 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v38 = (_SLIST_HEADER *)(*(_QWORD *)(v34 + 8LL * *v26 + 1192) + 144LL);
    v39 = RtlpInterlockedPopEntrySList(v38);
    if ( !v39 )
      goto LABEL_74;
    do
    {
      v19 = (signed __int64)&v39[-3];
      if ( (*((_DWORD *)&v39[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((const void *)(v19 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v19 + 44), 0xFFFFFFFD) != 2 )
          goto LABEL_71;
LABEL_70:
        v40 = **(__int128 ***)v19;
        *(_QWORD *)v19 = 0LL;
        RtlpInterlockedPushEntrySList(v40, v39);
        goto LABEL_71;
      }
      if ( (unsigned int)RtlpSetSegmentInfo((__int64)&v39[-3], (volatile signed __int64 *)a1) )
      {
        _m_prefetchw((const void *)(v19 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v19 + 44), 0xFFFFFFFD) == 2 )
          goto LABEL_70;
        if ( RtlpIsSubSegmentReuseable(a1, (__int64)&v39[-3]) )
          break;
      }
      else
      {
        v39->Next = (_SLIST_ENTRY *)v36;
        v36 = (signed __int64)v39;
        if ( !v35 )
          v37 = &v39->Next;
        ++v35;
      }
LABEL_71:
      v19 = 0LL;
      v39 = RtlpInterlockedPopEntrySList(v38);
    }
    while ( v39 );
    if ( v35 )
      InterlockedPushListSList(v38, v36, v37, v35);
LABEL_74:
    if ( v19 )
    {
LABEL_75:
      *(_BYTE *)(v19 + 43) = a2;
      do
      {
        v41 = *(_DWORD *)(v19 + 44);
        if ( !v41 || (v41 & 6) != 0 )
          goto LABEL_2;
      }
      while ( v41 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 44), v41 | 6, v41) );
      v42 = *(__int128 ***)v19;
      if ( *(_QWORD *)v19 == a1 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v50 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v50 = 2147353472LL;
        if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *(_QWORD *)(v19 + 8));
        v19 = _InterlockedExchange64((volatile __int64 *)(a1 + 8), v19);
        if ( !v19 )
          continue;
        _m_prefetchw((const void *)(v19 + 44));
        if ( _InterlockedAnd((volatile signed __int32 *)(v19 + 44), 0xFFFFFFF9) == 6 )
        {
LABEL_81:
          v43 = **(__int128 ***)v19;
          *(_QWORD *)v19 = 0LL;
LABEL_94:
          v49 = (_QWORD *)(v19 + 48);
LABEL_95:
          RtlpInterlockedPushEntrySList(v43, v49);
          continue;
        }
        if ( !RtlpIsSubSegmentReuseable(a1, v19) )
          continue;
        do
        {
          v51 = *(_DWORD *)(v19 + 44);
          if ( !v51 || (v51 & 2) != 0 )
            goto LABEL_2;
        }
        while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 44), v51 | 2, v51) );
        v52 = *(__int128 ***)v19;
        v53 = 0;
        while ( 1 )
        {
          v54 = ((_BYTE)v53 + (unsigned __int8)*((_WORD *)v52 + 87)) & 0xF;
          v48 = v52[v54 + 2];
          if ( v48 )
          {
            if ( (*((_DWORD *)v48 + 11) & 1) == 0
              && v48 == (__int128 *)_InterlockedCompareExchange64(
                                      (volatile signed __int64 *)&v52[v54 + 2],
                                      v19,
                                      (signed __int64)v48) )
            {
LABEL_117:
              _m_prefetchw((char *)v48 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v48 + 11, 0xFFFFFFFD) == 2 )
              {
                v43 = **(__int128 ***)v48;
                *(_QWORD *)v48 = 0LL;
                v49 = v48 + 3;
                goto LABEL_95;
              }
              goto LABEL_2;
            }
          }
          else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&v52[v54 + 2], v19, 0LL) )
          {
            goto LABEL_2;
          }
          if ( (unsigned int)++v53 >= 0x10 )
          {
LABEL_93:
            v43 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v19 + 24LL)
                                         + 8LL * *(unsigned __int16 *)(*(_QWORD *)v19 + 172LL)
                                         + 1192)
                             + 144LL);
            goto LABEL_94;
          }
        }
      }
      _m_prefetchw((const void *)(v19 + 44));
      if ( _InterlockedAnd((volatile signed __int32 *)(v19 + 44), 0xFFFFFFF9) == 6 )
        goto LABEL_81;
      if ( RtlpIsSubSegmentReuseable((__int64)v42, v19) )
      {
        while ( 1 )
        {
          v44 = *(_DWORD *)(v19 + 44);
          if ( !v44 || (v44 & 2) != 0 )
            break;
          if ( v44 == _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 44), v44 | 2, v44) )
          {
            v45 = *(__int128 ***)v19;
            v46 = 0;
            while ( 1 )
            {
              v47 = ((_BYTE)v46 + (unsigned __int8)*((_WORD *)v45 + 87)) & 0xF;
              v48 = v45[v47 + 2];
              if ( v48 )
              {
                if ( (*((_DWORD *)v48 + 11) & 1) == 0
                  && v48 == (__int128 *)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)&v45[v47 + 2],
                                          v19,
                                          (signed __int64)v48) )
                {
                  goto LABEL_117;
                }
              }
              else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&v45[v47 + 2], v19, 0LL) )
              {
                goto LABEL_2;
              }
              if ( (unsigned int)++v46 >= 0x10 )
                goto LABEL_93;
            }
          }
        }
      }
      continue;
    }
    return 0LL;
  }
}
