/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x18006385C
 * Callers:
 *     RtlpAllocateUserBlock @ 0x1800636C0 (RtlpAllocateUserBlock.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1801175D8 (RtlpLogHeapSubSegmentAlloc.c)
 */

__int64 __fastcall RtlpAllocateUserBlockFromHeap(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // r13
  __int64 v7; // r12
  __int64 v8; // rcx
  char v9; // r14
  __int64 v10; // rbp
  __int64 Heap; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  bool v14; // zf
  signed __int32 v15; // r14d
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  signed __int32 v20; // r12d
  __int64 v21; // rdi
  __int64 DeferredCriticalSectionEvent; // r14
  __int64 v23; // rbx
  signed __int32 v24; // ebp
  __int64 v25; // rdi
  char v26[4]; // [rsp+34h] [rbp-64h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v28[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+18h]
  unsigned int v32; // [rsp+B8h] [rbp+20h] BYREF

  v31 = a3;
  LOBYTE(v30) = a2;
  v5 = 1LL << a2;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 352);
  v9 = a2;
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v10 = v5 + 0x2000;
  if ( !a4 )
    v10 = v5;
  RtlEnterCriticalSection(v8);
  Heap = RtlAllocateHeap(a1, 0x800001u, v10);
  v12 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v28[0] = (Heap + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v10 = v28[0] - Heap;
      v18 = RtlReAllocateHeap(a1, 0x800001u, Heap, v28[0] - Heap + 4096);
      v19 = *(_QWORD *)(a1 + 352);
      v12 = v18;
      v14 = (*(_DWORD *)(v19 + 12))-- == 1;
      if ( v14 )
      {
        *(_QWORD *)(v19 + 16) = 0LL;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), -1, -2);
        if ( v20 != -2 )
        {
          if ( (*(_BYTE *)(v19 + 8) & 1) != 0 )
            RtlpNotOwnerCriticalSection(v19);
          DeferredCriticalSectionEvent = *(_QWORD *)(v19 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v19);
          v32 = 0;
          while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), (v20 & 2 | 1) + v20, v20) )
          {
            RtlBackoff(&v32);
            _m_prefetchw((const void *)(v19 + 8));
            v20 = *(_DWORD *)(v19 + 8);
          }
          if ( (v20 & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v19, DeferredCriticalSectionEvent);
          v9 = v30;
        }
        v7 = v31;
      }
      v27 = 4096LL;
      ZwProtectVirtualMemory(-1LL, v28, &v27, 1LL, v26);
      *(_BYTE *)(v12 + 17) = 1;
      *(_WORD *)(v12 + 18) = v10 - v5;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 352);
      v14 = (*(_DWORD *)(v13 + 12))-- == 1;
      if ( v14 )
      {
        *(_QWORD *)(v13 + 16) = 0LL;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), -1, -2);
        if ( v15 != -2 )
        {
          if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
            RtlpNotOwnerCriticalSection(v13);
          v21 = *(_QWORD *)(v13 + 24);
          if ( !v21 )
            v21 = RtlpCreateDeferredCriticalSectionEvent(v13);
          v29 = 0;
          while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), (v15 & 2 | 1) + v15, v15) )
          {
            RtlBackoff(&v29);
            _m_prefetchw((const void *)(v13 + 8));
            v15 = *(_DWORD *)(v13 + 8);
          }
          if ( (v15 & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v13, v21);
        }
        v9 = v30;
      }
      *(_WORD *)(v12 + 18) = 0;
      *(_BYTE *)(v12 + 17) = 0;
    }
    *(_BYTE *)(v12 + 16) = v9;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v16 = 2147353472LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(a1, v12, v10, v7);
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 352);
    v14 = (*(_DWORD *)(v23 + 12))-- == 1;
    if ( v14 )
    {
      *(_QWORD *)(v23 + 16) = 0LL;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 8), -1, -2);
      if ( v24 != -2 )
      {
        if ( (*(_BYTE *)(v23 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v23);
        v25 = *(_QWORD *)(v23 + 24);
        if ( !v25 )
          v25 = RtlpCreateDeferredCriticalSectionEvent(v23);
        v30 = 0;
        while ( v24 != _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 8), (v24 & 2 | 1) + v24, v24) )
        {
          RtlBackoff(&v30);
          _m_prefetchw((const void *)(v23 + 8));
          v24 = *(_DWORD *)(v23 + 8);
        }
        if ( (v24 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v23, v25);
      }
    }
  }
  return v12;
}
