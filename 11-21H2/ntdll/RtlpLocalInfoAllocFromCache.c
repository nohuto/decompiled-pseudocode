/*
 * XREFs of RtlpLocalInfoAllocFromCache @ 0x18006CAE4
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180025A98 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180025AC4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpLfhFindClearBitAndSet @ 0x18006CF04 (RtlpLfhFindClearBitAndSet.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x18007A0E0 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlpSetSegmentInfo @ 0x180088794 (RtlpSetSegmentInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A7D40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1800A7DF0 (InterlockedPushListSList.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x180116A28 (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x180117158 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpLocalInfoAllocFromCache(__int64 a1, char a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v6; // edx
  unsigned int v7; // r8d
  signed __int32 v8; // ebx
  __int64 v9; // r12
  struct _TEB *v10; // r15
  unsigned int v11; // r13d
  unsigned __int16 HeapData_high; // r14
  __int16 v13; // ax
  int ClearBitAndSet; // eax
  __int64 v15; // r8
  _SLIST_ENTRY *v17; // rdi
  __int64 *v18; // rax
  unsigned int v19; // r14d
  volatile signed __int64 *v20; // rbp
  __int64 *v21; // r15
  __int64 v22; // rbx
  unsigned int v23; // r12d
  _SLIST_HEADER *v24; // r14
  __int64 v25; // rcx
  PSLIST_ENTRY v26; // rax
  _QWORD **v27; // rbx
  PSLIST_ENTRY v28; // r15
  signed __int32 v29; // eax
  _SLIST_ENTRY *v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // ebp
  _SLIST_ENTRY *v33; // rbx
  PSLIST_ENTRY v34; // r15
  _SLIST_HEADER *v35; // r12
  PSLIST_ENTRY v36; // r14
  __int16 RandomValue32; // ax
  __int64 v38; // rbx
  char *v39; // rcx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v41; // rcx
  signed __int32 v42; // eax
  _SLIST_ENTRY *v43; // r8
  int v44; // r9d
  __int64 v45; // rcx
  _QWORD **v46; // rdx
  __int64 v47; // rcx
  _SLIST_ENTRY *v48; // rdx
  signed __int32 v49; // eax
  _SLIST_ENTRY *v50; // r8
  int v51; // r9d
  __int64 v52; // rcx
  int v53; // [rsp+70h] [rbp+8h]
  __int64 v54; // [rsp+70h] [rbp+8h]

  v2 = 0;
LABEL_2:
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v53 = 0;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( (HIWORD(*(_DWORD *)(v4 + 32)) & 0x8000u) != 0 )
    {
      v38 = *(unsigned __int16 *)(a1 + 172);
      v53 = 1;
      if ( (*(_BYTE *)(v5 + 4 * v38 + 679) & 1) == 0
        && (int)RtlpAffinitizeSegmentInfoForBucket(v5, *(unsigned __int8 *)(v5 + 4 * v38 + 678)) >= 0 )
      {
        *(_BYTE *)(v5 + 4 * v38 + 679) |= 1u;
        v39 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 550 : (char *)2147353472;
        if ( *v39 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapAffinityManagerEnable(*(_QWORD *)(v5 + 24), *(unsigned __int8 *)(v5 + 4 * v38 + 678));
      }
    }
    v6 = 0;
    v7 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v4 + 32);
      if ( v8 >= 0 )
      {
        if ( !(_WORD)v8 )
          goto LABEL_20;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v8 | 0x80000000, v8) )
          break;
      }
      if ( ++v6 > v7 )
      {
        v8 = -1;
        break;
      }
    }
    if ( v8 != -1 )
    {
      v9 = *(_QWORD *)(v4 + 8);
      if ( v9 && *(_QWORD *)v4 == a1 && (_WORD)v8 )
      {
        v10 = NtCurrentTeb();
        v11 = RtlpSearchWidth[*(unsigned __int16 *)(a1 + 172)];
        HeapData_high = (unsigned __int8)HIWORD(v10->HeapData);
        if ( HeapData_high == HIBYTE(HIWORD(v10->HeapData)) )
        {
          RandomValue32 = RtlpHeapGenerateRandomValue32();
          v13 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
        }
        else
        {
          v13 = (unsigned __int8)(HIWORD(v10->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v10->HeapData);
        }
        HIWORD(v10->HeapData) = v13;
        ClearBitAndSet = RtlpLfhFindClearBitAndSet(
                           v9 + 32,
                           (unsigned int)(v8 >> 16),
                           RtlpLowFragHeapRandomData[HeapData_high],
                           v11);
        v2 = 0;
        *(_DWORD *)(v4 + 32) = (ClearBitAndSet << 16) | ((unsigned __int16)v8 - 1);
        v15 = v9
            + ClearBitAndSet
            * (((unsigned int)RtlpLFHKey ^ (unsigned int)v5 ^ (unsigned int)v9 ^ *(_DWORD *)(v9 + 24)) >> 16)
            + (unsigned __int16)(RtlpLFHKey ^ v5 ^ v9 ^ *(_WORD *)(v9 + 24));
        if ( (*(_BYTE *)(v15 + 15) & 0x3F) == 0 )
        {
LABEL_17:
          if ( v53 && (unsigned int)(HIDWORD(RtlpAffinityState[0]) + 1) < LODWORD(RtlpAffinityState[0]) )
            _InterlockedCompareExchange(
              (_DWORD *)RtlpAffinityState + 1,
              2 * (HIDWORD(RtlpAffinityState[0]) + 1) - 1,
              SHIDWORD(RtlpAffinityState[0]));
          if ( v15 )
            return v15;
          goto LABEL_21;
        }
        RtlpLogHeapFailure(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), v15, 0, 0LL, 0LL);
      }
      else
      {
        *(_DWORD *)(v4 + 32) = v8;
      }
    }
LABEL_20:
    v15 = 0LL;
    goto LABEL_17;
  }
LABEL_21:
  v54 = *(_QWORD *)a1;
LABEL_22:
  v17 = 0LL;
LABEL_23:
  v18 = (__int64 *)(a1 + 16);
  while ( 1 )
  {
    v19 = 0;
    v20 = 0LL;
    v21 = v18;
    do
    {
      v22 = *v21;
      if ( *v21 )
      {
        v23 = *(unsigned __int16 *)(v22 + 32);
        if ( v23 > v2 && !RtlpIsSubSegmentReuseThresholdExceeded(a1, *v21) )
        {
          v17 = (_SLIST_ENTRY *)v22;
          v2 = v23;
          v20 = (volatile signed __int64 *)(a1 + 8 * (v19 + 2LL));
        }
      }
      ++v19;
      ++v21;
    }
    while ( v19 < 0x10 );
    v2 = 0;
    if ( !v20 )
      break;
    v24 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v54 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
    while ( 1 )
    {
      v26 = RtlpInterlockedPopEntrySList(v24);
      v27 = (_QWORD **)v26;
      if ( !v26 )
        break;
      v27 = (_QWORD **)&v26[-3];
      v28 = v26;
      if ( (*((_DWORD *)&v26[-1].Next + 3) & 1) != 0 )
      {
        if ( !(unsigned int)RtlpSetSegmentInfo(v27, a1) )
        {
          RtlpInterlockedPushEntrySList(v24, v28);
          v27 = 0LL;
        }
        break;
      }
      _m_prefetchw((char *)v27 + 44);
      if ( _InterlockedAnd((volatile signed __int32 *)v27 + 11, 0xFFFFFFFD) == 2 )
      {
        v25 = **v27;
        *v27 = 0LL;
        RtlpInterlockedPushEntrySList(v25, v26);
      }
    }
    if ( v17 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(v20, (signed __int64)v27, (signed __int64)v17) )
    {
      if ( !v27 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v20 - a1 - 16) >> 3);
      if ( !v17 )
        break;
      _m_prefetchw((char *)&v17[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v17[2].Next + 3, 0xFFFFFFFD) == 2 )
      {
        Next = v17->Next->Next;
        v17->Next = 0LL;
        RtlpInterlockedPushEntrySList(Next, &v17[3]);
        goto LABEL_22;
      }
LABEL_45:
      *((_BYTE *)&v17[2].Next + 11) = a2;
      do
      {
        v29 = *((_DWORD *)&v17[2].Next + 3);
        if ( !v29 || (v29 & 6) != 0 )
          goto LABEL_2;
      }
      while ( v29 != _InterlockedCompareExchange((volatile signed __int32 *)&v17[2].Next + 3, v29 | 6, v29) );
      v30 = v17->Next;
      if ( v17->Next == (_SLIST_ENTRY *)a1 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v31 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v31 = 2147353472LL;
        if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapSubSegmentActivate(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
            *((_QWORD *)&v17->Next + 1));
        v17 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v17);
        if ( !v17 )
          goto LABEL_2;
        _m_prefetchw((char *)&v17[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v17[2].Next + 3, 0xFFFFFFF9) != 6 )
        {
          if ( RtlpIsSubSegmentReuseable(a1, (__int64)v17) )
          {
            while ( 1 )
            {
              v49 = *((_DWORD *)&v17[2].Next + 3);
              if ( !v49 || (v49 & 2) != 0 )
                break;
              if ( v49 == _InterlockedCompareExchange((volatile signed __int32 *)&v17[2].Next + 3, v49 | 2, v49) )
              {
                v50 = v17->Next;
                v51 = 0;
                while ( 1 )
                {
                  v52 = ((_BYTE)v51 + (unsigned __int8)*((_WORD *)&v50[10].Next + 7)) & 0xF;
                  v46 = (_QWORD **)*((_QWORD *)&v50[1].Next + v52);
                  if ( v46 )
                  {
                    if ( (*((_DWORD *)v46 + 11) & 1) == 0
                      && v46 == (_QWORD **)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)&v50[1].Next + v52,
                                             (signed __int64)v17,
                                             (signed __int64)v46) )
                    {
                      goto LABEL_118;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v50[1].Next + v52,
                               (signed __int64)v17,
                               0LL) )
                  {
                    goto LABEL_2;
                  }
                  if ( (unsigned int)++v51 >= 0x10 )
                    goto LABEL_96;
                }
              }
            }
          }
          goto LABEL_2;
        }
        goto LABEL_99;
      }
      _m_prefetchw((char *)&v17[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v17[2].Next + 3, 0xFFFFFFF9) == 6 )
      {
LABEL_99:
        v47 = (__int64)v17->Next->Next;
        v17->Next = 0LL;
LABEL_97:
        v48 = v17 + 3;
LABEL_98:
        RtlpInterlockedPushEntrySList(v47, v48);
        goto LABEL_2;
      }
      if ( !RtlpIsSubSegmentReuseable((__int64)v30, (__int64)v17) )
        goto LABEL_2;
      do
      {
        v42 = *((_DWORD *)&v17[2].Next + 3);
        if ( !v42 || (v42 & 2) != 0 )
          goto LABEL_2;
      }
      while ( v42 != _InterlockedCompareExchange((volatile signed __int32 *)&v17[2].Next + 3, v42 | 2, v42) );
      v43 = v17->Next;
      v44 = 0;
      while ( 1 )
      {
        v45 = ((_BYTE)v44 + (unsigned __int8)*((_WORD *)&v43[10].Next + 7)) & 0xF;
        v46 = (_QWORD **)*((_QWORD *)&v43[1].Next + v45);
        if ( v46 )
        {
          if ( (*((_DWORD *)v46 + 11) & 1) == 0
            && v46 == (_QWORD **)_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)&v43[1].Next + v45,
                                   (signed __int64)v17,
                                   (signed __int64)v46) )
          {
LABEL_118:
            _m_prefetchw((char *)v46 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v46 + 11, 0xFFFFFFFD) == 2 )
            {
              v47 = **v46;
              *v46 = 0LL;
              v48 = (_SLIST_ENTRY *)(v46 + 6);
              goto LABEL_98;
            }
            goto LABEL_2;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v43[1].Next + v45,
                     (signed __int64)v17,
                     0LL) )
        {
          goto LABEL_2;
        }
        if ( (unsigned int)++v44 >= 0x10 )
        {
LABEL_96:
          v47 = *(_QWORD *)(*((_QWORD *)&v17->Next->Next[1].Next + 1)
                          + 8LL * *((unsigned __int16 *)&v17->Next[10].Next + 6)
                          + 1192)
              + 144LL;
          goto LABEL_97;
        }
      }
    }
    v18 = (__int64 *)(a1 + 16);
    if ( v27 )
    {
      RtlpInterlockedPushEntrySList(v24, v27 + 6);
      goto LABEL_23;
    }
  }
  v32 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v54 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
  v36 = RtlpInterlockedPopEntrySList(v35);
  if ( !v36 )
    return 0LL;
  do
  {
    v17 = v36 - 3;
    if ( (*((_DWORD *)&v36[-1].Next + 3) & 1) == 0 )
    {
      _m_prefetchw((char *)&v17[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v17[2].Next + 3, 0xFFFFFFFD) != 2 )
        goto LABEL_84;
LABEL_83:
      v41 = v17->Next->Next;
      v17->Next = 0LL;
      RtlpInterlockedPushEntrySList(v41, v36);
      goto LABEL_84;
    }
    if ( (unsigned int)RtlpSetSegmentInfo(&v36[-3], a1) )
    {
      _m_prefetchw((char *)&v17[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v17[2].Next + 3, 0xFFFFFFFD) == 2 )
        goto LABEL_83;
      if ( RtlpIsSubSegmentReuseable(a1, (__int64)&v36[-3]) )
        break;
    }
    else
    {
      v36->Next = v33;
      v33 = v36;
      if ( !v32 )
        v34 = v36;
      ++v32;
    }
LABEL_84:
    v17 = 0LL;
    v36 = RtlpInterlockedPopEntrySList(v35);
  }
  while ( v36 );
  if ( v32 )
    InterlockedPushListSList(v35, v33, v34, v32);
  if ( v17 )
    goto LABEL_45;
  return 0LL;
}
