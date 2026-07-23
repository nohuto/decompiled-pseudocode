/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x18006C404
 * Callers:
 *     RtlpFlushHeap @ 0x18006C32C (RtlpFlushHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpIsSubSegmentReuseable @ 0x180025A98 (RtlpIsSubSegmentReuseable.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006CAE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlock @ 0x18006CFB8 (RtlpFreeUserBlock.c)
 *     RtlpFreeUserBlockToHeap @ 0x18006D210 (RtlpFreeUserBlockToHeap.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A7DC0 (RtlpInterlockedFlushSList.c)
 *     RtlpGetReservedBlockSize @ 0x1800B13A8 (RtlpGetReservedBlockSize.c)
 *     RtlpLogHeapFreeEvent @ 0x180116F14 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18011729C (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18011734C (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

int __fastcall RtlpLowFragHeapFlushCaches(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // ebx
  struct _PEB *v10; // rax
  struct _PEB *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  signed __int32 *v15; // rdi
  _QWORD *v16; // r14
  int v17; // r15d
  unsigned __int64 v18; // rbp
  __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  signed __int32 v24; // ebx
  _QWORD *v25; // r8
  signed __int32 v26; // eax
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rcx
  volatile signed __int32 *v30; // rdx
  __int64 v31; // rcx
  _QWORD **v32; // rdx
  _QWORD *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // r9
  signed __int64 v36; // rdx
  __int64 *v37; // rsi
  _DWORD *v38; // rbx
  __int64 v39; // rcx
  _DWORD *v40; // rdx
  __int64 v41; // rax
  __int64 *v42; // rsi
  __int64 v43; // rbx
  int v44; // edx
  signed __int64 v45; // rax
  struct _PEB *v46; // rbp
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r14
  __int64 v49; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v51; // rcx
  ULONG HeapProtection; // eax
  signed __int32 v53; // eax
  __int64 v54; // rcx
  __int64 v56; // [rsp+30h] [rbp-68h]
  signed __int64 v57; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+A0h] [rbp+8h]
  __int64 v61; // [rsp+A0h] [rbp+8h]
  unsigned int v62; // [rsp+A8h] [rbp+10h]
  __int64 v63; // [rsp+A8h] [rbp+10h]
  unsigned int v64; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v64 = 0;
  v56 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v62 = 1;
LABEL_4:
      v5 = 0;
      v60 = 0;
LABEL_5:
      if ( v5 )
        v6 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v5 - 192);
      else
        v6 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( !v6 || v6[41] != 1 )
        goto LABEL_9;
      v12 = RtlpLocalInfoAllocFromCache(v6, v5);
      v13 = v12;
      if ( !v12 )
        goto LABEL_25;
      *(_DWORD *)(*(_QWORD *)v6 + 36LL) = 0;
      v14 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v14 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4))
        || (v15 = *(signed __int32 **)(v12
                                     - ((unsigned __int64)((unsigned int)v14 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12))) == 0LL )
      {
        RtlpLogHeapFailure(3, v14, v12, 0, 0LL, 0LL);
        goto LABEL_25;
      }
      _m_prefetchw(v15);
      v16 = (_QWORD *)*((_QWORD *)v15 + 1);
      v17 = 0;
      v18 = (unsigned __int16)(*(_DWORD *)(v12 + 12) >> 8);
      v19 = *(_QWORD *)(**(_QWORD **)v15 + 24LL);
      v20 = (unsigned int)v16 ^ v19 ^ RtlpLFHKey ^ *((_DWORD *)v16 + 6);
      if ( (_QWORD *)((char *)v16 + (unsigned int)v18 * HIWORD(v20) + (unsigned __int16)v20) != (_QWORD *)v12 )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(v19 + 24), v12, 0, 0LL, 0LL);
        goto LABEL_24;
      }
      if ( RtlGetCurrentServiceSessionId() )
        v21 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v21 = 2147353472LL;
      if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 24), v13 + 16, 2LL);
      v22 = 0;
      v23 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v24 = v15[8];
        if ( v24 >= 0 && v24 == _InterlockedCompareExchange(v15 + 8, v24 | 0x80000000, v24) )
          goto LABEL_34;
        ++v22;
      }
      while ( v22 <= v23 );
      v24 = -1;
LABEL_34:
      *(_BYTE *)(v13 + 15) = 0x80;
      if ( v24 == -1 )
      {
        RtlpInterlockedPushEntrySList(v15 + 4, v13 + 16);
        goto LABEL_24;
      }
      _bittestandreset64((signed __int64 *)v16[5], v18);
      if ( *((_WORD *)v15 + 8) )
      {
        v33 = (_QWORD *)RtlpInterlockedFlushSList(v15 + 4);
        while ( v33 )
        {
          v34 = *((_DWORD *)v33 - 1);
          ++v17;
          v33 = (_QWORD *)*v33;
          v18 = (unsigned __int16)(v34 >> 8);
          _bittestandreset64((signed __int64 *)v16[5], v18);
        }
      }
      v25 = *(_QWORD **)v15;
      if ( (_WORD)v17 + (_WORD)v24 + 1 != *((_WORD *)v15 + 20)
        || (v35 = *((unsigned int *)v25 + 42), v36 = *(unsigned int *)(*v25 + 32LL), *((_DWORD *)v25 + 41) == 1)
        && (unsigned int)v36 >= (unsigned int)v35
        && (v36 = (unsigned int)(v36 - v35), (unsigned int)v36 < *(_DWORD *)(*v25 + 36LL)) )
      {
        v15[8] = ((_DWORD)v18 << 16) | (v17 + (unsigned __int16)v24 + 1);
        if ( (v15[11] & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)v25, (__int64)v15) )
          goto LABEL_24;
        do
        {
          v26 = v15[11];
          if ( !v26 || (v26 & 2) != 0 )
            goto LABEL_24;
        }
        while ( v26 != _InterlockedCompareExchange(v15 + 11, v26 | 2, v26) );
        v27 = *(_QWORD *)v15;
        v28 = 0;
        while ( 1 )
        {
          v29 = ((_BYTE)v28 + (unsigned __int8)*(_WORD *)(v27 + 174)) & 0xF;
          v30 = *(volatile signed __int32 **)(v27 + 8 * v29 + 16);
          if ( v30 )
          {
            if ( (v30[11] & 1) == 0
              && v30 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)(v27 + 8 * v29 + 16),
                                                     (signed __int64)v15,
                                                     (signed __int64)v30) )
            {
              _m_prefetchw((const void *)(v30 + 11));
              if ( _InterlockedAnd(v30 + 11, 0xFFFFFFFD) != 2 )
                goto LABEL_24;
              v31 = **(_QWORD **)v30;
              *(_QWORD *)v30 = 0LL;
              v32 = (_QWORD **)(v30 + 12);
              goto LABEL_73;
            }
          }
          else if ( !_InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v27 + 8 * v29 + 16),
                       (signed __int64)v15,
                       0LL) )
          {
            goto LABEL_24;
          }
          if ( (unsigned int)++v28 >= 0x10 )
          {
            v31 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v15 + 24LL)
                            + 8LL * *(unsigned __int16 *)(*(_QWORD *)v15 + 172LL)
                            + 1192)
                + 144LL;
LABEL_72:
            v32 = (_QWORD **)(v15 + 12);
LABEL_73:
            RtlpInterlockedPushEntrySList(v31, v32);
            goto LABEL_24;
          }
        }
      }
      v37 = *(__int64 **)v15;
      v38 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v15 + 8LL), 0LL);
      if ( !v38 )
        goto LABEL_66;
      _m_prefetchw(v38 + 11);
      if ( _InterlockedAnd(v38 + 11, 0xFFFFFFF9) == 6 )
      {
        v39 = **(_QWORD **)v38;
        *(_QWORD *)v38 = 0LL;
LABEL_64:
        v40 = v38 + 12;
LABEL_65:
        RtlpInterlockedPushEntrySList(v39, v40);
        goto LABEL_66;
      }
      if ( !RtlpIsSubSegmentReuseable((__int64)v37, (__int64)v38) )
        goto LABEL_66;
      do
      {
        v53 = v38[11];
        if ( !v53 || (v53 & 2) != 0 )
          goto LABEL_66;
      }
      while ( v53 != _InterlockedCompareExchange(v38 + 11, v53 | 2, v53) );
      v25 = *(_QWORD **)v38;
      v35 = 0LL;
      while ( 1 )
      {
        v54 = ((_BYTE)v35 + (unsigned __int8)*((_WORD *)v25 + 87)) & 0xF;
        v36 = v25[v54 + 2];
        if ( v36 )
        {
          if ( (*(_DWORD *)(v36 + 44) & 1) == 0
            && v36 == _InterlockedCompareExchange64(&v25[v54 + 2], (signed __int64)v38, v36) )
          {
            _m_prefetchw((const void *)(v36 + 44));
            if ( _InterlockedAnd((volatile signed __int32 *)(v36 + 44), 0xFFFFFFFD) == 2 )
            {
              v39 = **(_QWORD **)v36;
              *(_QWORD *)v36 = 0LL;
              v40 = (_DWORD *)(v36 + 48);
              goto LABEL_65;
            }
LABEL_66:
            v41 = *v37;
            v42 = *(__int64 **)v15;
            v43 = *(_QWORD *)(v41 + 24);
            if ( (*((_BYTE *)v15 + 38) & 3) != 0 )
            {
              BaseAddress = (PVOID)((*((_QWORD *)v15 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
              ReservedBlockSize = RtlpGetReservedBlockSize(v15, v36, v25, v35);
              v51 = *(_DWORD **)(v43 + 24);
              RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v15 + 20);
              HeapProtection = RtlpGetHeapProtection(v51, 1);
              ZwProtectVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                &RegionSize,
                HeapProtection,
                &OldProtect);
            }
            *(_DWORD *)(*((_QWORD *)v15 + 1) + 20LL) = 0;
            RtlpFreeUserBlock(v43, *((_QWORD *)v15 + 1));
            v44 = -*((unsigned __int16 *)v15 + 20);
            do
            {
              v45 = v42[20];
              LODWORD(v57) = v45 + v44;
              HIDWORD(v57) = HIDWORD(v45) - 1;
            }
            while ( v45 != _InterlockedCompareExchange64(v42 + 20, v57, v45) );
            *((_QWORD *)v15 + 1) = 0LL;
            _InterlockedAdd((volatile signed __int32 *)(v43 + 60), 1u);
            v15[8] = 0;
            _m_prefetchw(v15 + 11);
            if ( _InterlockedAnd(v15 + 11, 0xFFFFFFFE) == 1 )
            {
              v31 = **(_QWORD **)v15;
              *(_QWORD *)v15 = 0LL;
              goto LABEL_72;
            }
LABEL_24:
            v5 = v60;
LABEL_25:
            v3 = v56;
LABEL_9:
            v60 = ++v5;
            if ( v5 >= v62 )
            {
              v2 = v64;
              goto LABEL_11;
            }
            goto LABEL_5;
          }
        }
        else if ( !_InterlockedCompareExchange64(&v25[v54 + 2], (signed __int64)v38, 0LL) )
        {
          goto LABEL_66;
        }
        v35 = (unsigned int)(v35 + 1);
        if ( (unsigned int)v35 >= 0x10 )
        {
          v39 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v38 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v38 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_64;
        }
      }
    }
    v62 = RtlpAffinityState[0];
    if ( LODWORD(RtlpAffinityState[0]) )
      goto LABEL_4;
LABEL_11:
    ++v2;
    ++v3;
    v64 = v2;
    v56 = v3;
  }
  while ( v2 < 0x81 );
  v7 = a1 + 96;
  v8 = 12LL;
  v61 = a1 + 96;
  v63 = 12LL;
  do
  {
    v9 = 0;
    v10 = (struct _PEB *)RtlpInterlockedFlushSList(v7);
    v11 = v10;
    if ( v10 )
    {
      do
      {
        v46 = v11;
        v11 = *(struct _PEB **)&v11->InheritedAddressSpace;
        v47 = 1LL << LOBYTE(v46->ImageBaseAddress);
        if ( v47 > 0xF0000 )
          v47 = 983040LL;
        v48 = v47 + WORD1(v46->ImageBaseAddress);
        v4 += v48;
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v46);
        ++v9;
        LODWORD(v10) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v10 )
        {
          v10 = NtCurrentPeb();
          v49 = (__int64)v10->SharedData + 550;
        }
        else
        {
          v49 = 2147353472LL;
        }
        if ( *(_BYTE *)v49 )
        {
          v10 = NtCurrentPeb();
          if ( (v10->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v46, v48, 0LL);
            LODWORD(v10) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v46, v48, 0LL);
          }
        }
      }
      while ( v11 );
      v7 = v61;
      v8 = v63;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 16), -v9);
    }
    v7 += 48LL;
    --v8;
    v61 = v7;
    v63 = v8;
  }
  while ( v8 );
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v4);
  return (int)v10;
}
