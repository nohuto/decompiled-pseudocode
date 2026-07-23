/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x1801192A4
 * Callers:
 *     RtlpFlushHeap @ 0x18005A8EC (RtlpFlushHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180047BC8 (RtlpFreeUserBlock.c)
 *     RtlpFreeUserBlockToHeap @ 0x180047E20 (RtlpFreeUserBlockToHeap.c)
 *     RtlpIsSubSegmentReuseable @ 0x18006354C (RtlpIsSubSegmentReuseable.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A2C00 (RtlpInterlockedFlushSList.c)
 *     RtlpGetReservedBlockSize @ 0x1800AF07E (RtlpGetReservedBlockSize.c)
 *     RtlpLogHeapFreeEvent @ 0x180117300 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180117688 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180117738 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpLowFragHeapFlushCaches(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  unsigned int v4; // r12d
  _DWORD *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  _QWORD **v8; // rdi
  _QWORD *v9; // r14
  int v10; // r15d
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  int v15; // edx
  unsigned int v16; // r8d
  signed __int32 v17; // ebx
  __int64 v18; // r15
  __int64 v19; // rdi
  int v20; // ebx
  struct _PEB *v21; // rax
  ULONG v22; // r8d
  __int64 v23; // r12
  struct _PEB *v24; // rsi
  __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned int v30; // edx
  _QWORD *v31; // r8
  int v32; // ebp
  unsigned int v33; // r9d
  unsigned int v34; // edx
  __int64 *v35; // rsi
  _DWORD *v36; // rbx
  __int128 *v37; // rcx
  signed __int32 v38; // eax
  int v39; // r9d
  __int64 v40; // rcx
  _QWORD **v41; // rdx
  _QWORD *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rbx
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v47; // rcx
  ULONG HeapProtection; // eax
  int v49; // edx
  signed __int64 v50; // rax
  __int128 *v51; // rcx
  _QWORD *v52; // rdx
  signed __int32 v53; // eax
  unsigned __int16 *v54; // r8
  int v55; // r9d
  __int64 v56; // rcx
  _QWORD **v57; // rdx
  __int64 v59; // [rsp+30h] [rbp-68h]
  signed __int64 v60; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+8h]
  __int64 v64; // [rsp+A0h] [rbp+8h]
  unsigned int v65; // [rsp+A8h] [rbp+10h]
  ULONG OldProtect; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v67; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v59 = 0LL;
  v3 = 0LL;
  v65 = 0;
  v67 = 0LL;
  do
  {
    v4 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) != 0 && (*(_BYTE *)(a1 + 672) & 1) == 0 )
    {
      v63 = RtlpAffinityState[0];
      if ( !LODWORD(RtlpAffinityState[0]) )
        goto LABEL_32;
    }
    else
    {
      v63 = 1;
    }
    do
    {
      if ( v4 )
        v5 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v4 - 192);
      else
        v5 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( !v5 || v5[41] != 1 )
        goto LABEL_30;
      v6 = RtlpLocalInfoAllocFromCache((__int64)v5, v4);
      v7 = v6;
      if ( !v6 )
        goto LABEL_29;
      *(_DWORD *)(*(_QWORD *)v5 + 36LL) = 0;
      if ( *(_WORD *)(a1 + 24) ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4))
        || (v8 = *(_QWORD ***)(v6
                             - ((unsigned __int64)(*(_DWORD *)(a1 + 24) ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12))) == 0LL )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(a1 + 24), v6, 0, 0LL, 0LL);
        goto LABEL_29;
      }
      _m_prefetchw(v8);
      v9 = v8[1];
      v10 = 0;
      v11 = (unsigned __int16)(*(_DWORD *)(v6 + 12) >> 8);
      v12 = *(_QWORD *)(**v8 + 24LL);
      v13 = (unsigned int)v9 ^ v12 ^ *((_DWORD *)v9 + 6) ^ RtlpLFHKey;
      if ( (_QWORD *)((char *)v9 + (unsigned int)v11 * HIWORD(v13) + (unsigned __int16)v13) != (_QWORD *)v6 )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(v12 + 24), v6, 0, 0LL, 0LL);
        goto LABEL_29;
      }
      if ( RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v14 = 2147353472LL;
      if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapFreeEvent(*(_QWORD *)(v12 + 24), v7 + 16, 2);
      v15 = 0;
      v16 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v17 = *((_DWORD *)v8 + 8);
        if ( v17 >= 0 && v17 == _InterlockedCompareExchange((volatile signed __int32 *)v8 + 8, v17 | 0x80000000, v17) )
          break;
        if ( ++v15 > v16 )
        {
          v17 = -1;
          break;
        }
      }
      *(_BYTE *)(v7 + 15) = 0x80;
      if ( v17 == -1 )
      {
        RtlpInterlockedPushEntrySList((__int128 *)v8 + 1, (_QWORD *)(v7 + 16));
        goto LABEL_29;
      }
      _bittestandreset64((signed __int64 *)v9[5], v11);
      if ( *((_WORD *)v8 + 8) )
      {
        LOBYTE(v29) = RtlpInterlockedFlushSList((__int128 *)v8 + 1);
        while ( v29 )
        {
          v30 = *((_DWORD *)v29 - 1);
          ++v10;
          v29 = (_QWORD *)*v29;
          v11 = (unsigned __int16)(v30 >> 8);
          _bittestandreset64((signed __int64 *)v9[5], v11);
        }
      }
      v31 = *v8;
      v32 = (_DWORD)v11 << 16;
      if ( ((unsigned __int16)v32 | (unsigned __int16)(v10 + v17 + 1)) != *((_WORD *)v8 + 20)
        || (v33 = *((_DWORD *)v31 + 42), v34 = *(_DWORD *)(*v31 + 32LL), *((_DWORD *)v31 + 41) == 1)
        && v34 >= v33
        && v34 - v33 < *(_DWORD *)(*v31 + 36LL) )
      {
        *((_DWORD *)v8 + 8) = v32 | (v10 + (unsigned __int16)v17 + 1);
        if ( (*((_DWORD *)v8 + 11) & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)v31, (__int64)v8) )
          goto LABEL_29;
        do
        {
          v53 = *((_DWORD *)v8 + 11);
          if ( !v53 || (v53 & 2) != 0 )
            goto LABEL_29;
        }
        while ( v53 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 11, v53 | 2, v53) );
        v54 = (unsigned __int16 *)*v8;
        v55 = 0;
        while ( 1 )
        {
          v56 = ((_BYTE)v55 + (unsigned __int8)v54[87]) & 0xF;
          v57 = *(_QWORD ***)&v54[4 * v56 + 8];
          if ( v57 )
          {
            if ( (*((_DWORD *)v57 + 11) & 1) == 0
              && v57 == (_QWORD **)_InterlockedCompareExchange64(
                                     (volatile signed __int64 *)&v54[4 * v56 + 8],
                                     (signed __int64)v8,
                                     (signed __int64)v57) )
            {
              _m_prefetchw((char *)v57 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v57 + 11, 0xFFFFFFFD) != 2 )
                goto LABEL_29;
              v51 = (__int128 *)**v57;
              *v57 = 0LL;
              v52 = v57 + 6;
LABEL_70:
              RtlpInterlockedPushEntrySList(v51, v52);
              goto LABEL_29;
            }
          }
          else if ( !_InterlockedCompareExchange64(
                       (volatile signed __int64 *)&v54[4 * v56 + 8],
                       (signed __int64)v8,
                       0LL) )
          {
            goto LABEL_29;
          }
          if ( (unsigned int)++v55 >= 0x10 )
          {
            v51 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(**v8 + 24LL) + 8LL * *((unsigned __int16 *)*v8 + 86) + 1192)
                             + 144LL);
LABEL_69:
            v52 = v8 + 6;
            goto LABEL_70;
          }
        }
      }
      v35 = *v8;
      v36 = (_DWORD *)_InterlockedExchange64(*v8 + 1, 0LL);
      if ( !v36 )
        goto LABEL_63;
      _m_prefetchw(v36 + 11);
      if ( _InterlockedAnd(v36 + 11, 0xFFFFFFF9) == 6 )
      {
        v37 = **(__int128 ***)v36;
        *(_QWORD *)v36 = 0LL;
LABEL_61:
        v42 = v36 + 12;
LABEL_62:
        RtlpInterlockedPushEntrySList(v37, v42);
        goto LABEL_63;
      }
      if ( !RtlpIsSubSegmentReuseable((__int64)v35, (__int64)v36) )
        goto LABEL_63;
      do
      {
        v38 = v36[11];
        if ( !v38 || (v38 & 2) != 0 )
          goto LABEL_63;
      }
      while ( v38 != _InterlockedCompareExchange(v36 + 11, v38 | 2, v38) );
      v31 = *(_QWORD **)v36;
      v39 = 0;
      while ( 1 )
      {
        v40 = ((_BYTE)v39 + (unsigned __int8)*((_WORD *)v31 + 87)) & 0xF;
        v41 = (_QWORD **)v31[v40 + 2];
        if ( !v41 )
        {
          if ( !_InterlockedCompareExchange64(&v31[v40 + 2], (signed __int64)v36, 0LL) )
            goto LABEL_63;
          goto LABEL_59;
        }
        if ( (*((_DWORD *)v41 + 11) & 1) == 0
          && v41 == (_QWORD **)_InterlockedCompareExchange64(&v31[v40 + 2], (signed __int64)v36, (signed __int64)v41) )
        {
          break;
        }
LABEL_59:
        if ( (unsigned int)++v39 >= 0x10 )
        {
          v37 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v36 + 24LL)
                                       + 8LL * *(unsigned __int16 *)(*(_QWORD *)v36 + 172LL)
                                       + 1192)
                           + 144LL);
          goto LABEL_61;
        }
      }
      _m_prefetchw((char *)v41 + 44);
      if ( _InterlockedAnd((volatile signed __int32 *)v41 + 11, 0xFFFFFFFD) == 2 )
      {
        v37 = (__int128 *)**v41;
        *v41 = 0LL;
        v42 = v41 + 6;
        goto LABEL_62;
      }
LABEL_63:
      v43 = *v35;
      v44 = (__int64)*v8;
      v45 = *(_QWORD *)(v43 + 24);
      if ( (*((_BYTE *)v8 + 38) & 3) != 0 )
      {
        BaseAddress = (PVOID)(((unsigned __int64)v8[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
        ReservedBlockSize = RtlpGetReservedBlockSize((__int64)v8);
        v47 = *(_DWORD **)(v45 + 24);
        RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
        HeapProtection = RtlpGetHeapProtection(v47, 1);
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
      }
      *((_DWORD *)v8[1] + 5) = 0;
      RtlpFreeUserBlock(v45, (unsigned __int8 *)v8[1], (unsigned int)v31);
      v49 = -*((unsigned __int16 *)v8 + 20);
      do
      {
        v50 = *(_QWORD *)(v44 + 160);
        LODWORD(v60) = v50 + v49;
        HIDWORD(v60) = HIDWORD(v50) - 1;
      }
      while ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 160), v60, v50) );
      v8[1] = 0LL;
      _InterlockedAdd((volatile signed __int32 *)(v45 + 60), 1u);
      *((_DWORD *)v8 + 8) = 0;
      _m_prefetchw((char *)v8 + 44);
      if ( _InterlockedAnd((volatile signed __int32 *)v8 + 11, 0xFFFFFFFE) == 1 )
      {
        v51 = (__int128 *)**v8;
        *v8 = 0LL;
        goto LABEL_69;
      }
LABEL_29:
      v3 = v67;
LABEL_30:
      ++v4;
    }
    while ( v4 < v63 );
    v2 = v65;
LABEL_32:
    ++v2;
    ++v3;
    v65 = v2;
    v67 = v3;
  }
  while ( v2 < 0x81 );
  v18 = 12LL;
  v19 = a1 + 96;
  v64 = 12LL;
  do
  {
    v20 = 0;
    LOBYTE(v21) = RtlpInterlockedFlushSList((__int128 *)v19);
    v23 = v59;
    v24 = v21;
    if ( v21 )
    {
      do
      {
        v25 = (__int64)v24;
        v24 = *(struct _PEB **)&v24->InheritedAddressSpace;
        v26 = 1LL << *(_BYTE *)(v25 + 16);
        if ( v26 > 0xF0000 )
          v26 = 983040LL;
        v27 = v26 + *(unsigned __int16 *)(v25 + 18);
        v23 += v27;
        RtlpFreeUserBlockToHeap(*(_DWORD **)(a1 + 24), (_BYTE *)v25, v22);
        ++v20;
        LODWORD(v21) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v21 )
        {
          v21 = NtCurrentPeb();
          v28 = (__int64)v21->SharedData + 550;
        }
        else
        {
          v28 = 2147353472LL;
        }
        if ( *(_BYTE *)v28 )
        {
          v21 = NtCurrentPeb();
          v22 = 1;
          if ( (v21->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v25, v27, 0LL);
            LOBYTE(v21) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v25, v27, 0LL);
          }
        }
      }
      while ( v24 );
      v18 = v64;
      v59 = v23;
      if ( v20 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 16), -v20);
    }
    v19 += 48LL;
    v64 = --v18;
  }
  while ( v18 );
  if ( v23 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v23);
  return (char)v21;
}
