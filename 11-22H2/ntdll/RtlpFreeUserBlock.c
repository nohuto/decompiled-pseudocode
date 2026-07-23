/*
 * XREFs of RtlpFreeUserBlock @ 0x180047BC8
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFreeUserBlockToHeap @ 0x180047E20 (RtlpFreeUserBlockToHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A2B80 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180117688 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180117738 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x1801177E8 (RtlpLogHeapSubSegmentFreeCached.c)
 */

__int16 __fastcall RtlpFreeUserBlock(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  _DWORD *SharedData; // rax
  __int64 v12; // rdi
  PSLIST_ENTRY v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rcx
  PSLIST_ENTRY v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r14
  __int64 v21; // rdi
  signed __int32 v23; // r15d
  void *DeferredCriticalSectionEvent; // rbp
  __int64 v26; // [rsp+68h] [rbp+10h]
  unsigned int v27; // [rsp+70h] [rbp+18h] BYREF

  v27 = a3;
  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)a2;
  v26 = v5;
  v7 = (volatile signed __int32 *)(a1 + 48 * (a2[16] - 5LL));
  if ( *(_WORD *)(v3 + 416) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v3 + 352));
    v21 = *(_QWORD *)(v3 + 352);
    if ( (*(_DWORD *)(v21 + 12))-- == 1 )
    {
      *(_QWORD *)(v21 + 16) = 0LL;
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), -1, -2);
      if ( v23 != -2 )
      {
        if ( (*(_BYTE *)(v21 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v21);
        DeferredCriticalSectionEvent = *(void **)(v21 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v21);
        v27 = 0;
        while ( v23 != _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), (v23 & 2 | 1) + v23, v23) )
        {
          RtlBackoff(&v27);
          _m_prefetchw((const void *)(v21 + 8));
          v23 = *(_DWORD *)(v21 + 8);
        }
        if ( (v23 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v21, DeferredCriticalSectionEvent);
      }
    }
    v5 = v26;
  }
  v8 = *(unsigned __int16 *)v7;
  if ( v8 <= *((_DWORD *)v7 + 5) || v8 <= *((_DWORD *)v7 + 4) >> *((_DWORD *)v7 + 6) )
  {
    v9 = 1LL << a2[16];
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v10);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v10, 16LL * *(unsigned __int16 *)(v5 + 36));
    RtlpInterlockedPushEntrySList(v7, a2);
    LOWORD(v13) = *((_WORD *)v7 + 15) + 1;
    *((_WORD *)v7 + 15) = (_WORD)v13;
  }
  else
  {
    v14 = 1LL << a2[16];
    if ( v14 > 0xF0000 )
      v14 = 983040LL;
    v15 = v14 + *((unsigned __int16 *)a2 + 9);
    RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2);
    LODWORD(v13) = RtlGetCurrentServiceSessionId();
    v16 = 2147353472LL;
    if ( (_DWORD)v13 )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      v17 = (__int64)&v13[9].Next[34].Next + 6;
    }
    else
    {
      v17 = 2147353472LL;
    }
    if ( *(_BYTE *)v17 )
    {
      v13 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
        LOWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v15, 16LL * *(unsigned __int16 *)(v26 + 36));
    }
    _InterlockedDecrement(v7 + 4);
    if ( v8 )
    {
      v13 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v7);
      v18 = v13;
      if ( v13 )
      {
        v19 = 1LL << LOBYTE(v13[1].Next);
        if ( v19 > 0xF0000 )
          v19 = 983040LL;
        v20 = v19 + WORD1(v13[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v20);
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v13);
        LODWORD(v13) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v13 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          v16 = (__int64)&v13[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v16 )
        {
          v13 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v13[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
            LOWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
          }
        }
        _InterlockedDecrement(v7 + 4);
      }
    }
  }
  return (__int16)v13;
}
