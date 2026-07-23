/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x18002EABC
 * Callers:
 *     RtlpAllocateUserBlock @ 0x18002ED3C (RtlpAllocateUserBlock.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1801171EC (RtlpLogHeapSubSegmentAlloc.c)
 */

_BYTE *__fastcall RtlpAllocateUserBlockFromHeap(_QWORD *HeapHandle, char a2, __int64 a3, char a4)
{
  __int64 v5; // r13
  __int64 v7; // r12
  _RTL_CRITICAL_SECTION *v8; // rcx
  char v9; // r14
  char *v10; // rbp
  _BYTE *Heap; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rbx
  bool v14; // zf
  signed __int32 v15; // r14d
  __int64 v16; // rcx
  _BYTE *v18; // rax
  __int64 v19; // rbx
  signed __int32 v20; // r12d
  __int64 v21; // rdi
  __int64 DeferredCriticalSectionEvent; // r14
  __int64 v23; // rbx
  signed __int32 v24; // ebp
  __int64 v25; // rdi
  ULONG OldProtect; // [rsp+34h] [rbp-64h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+18h]
  unsigned int v32; // [rsp+B8h] [rbp+20h] BYREF

  v31 = a3;
  LOBYTE(v30) = a2;
  v5 = 1LL << a2;
  v7 = a3;
  v8 = (_RTL_CRITICAL_SECTION *)HeapHandle[44];
  v9 = a2;
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v10 = (char *)(v5 + 0x2000);
  if ( !a4 )
    v10 = (char *)v5;
  RtlEnterCriticalSection(v8);
  Heap = RtlAllocateHeap(HeapHandle, 0x800001u, (SIZE_T)v10);
  v12 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      BaseAddress = (PVOID)((unsigned __int64)&Heap[v5 + 4095] & 0xFFFFFFFFFFFFF000uLL);
      v10 = (char *)((_BYTE *)BaseAddress - Heap);
      v18 = RtlReAllocateHeap(HeapHandle, 0x800001u, Heap, (_BYTE *)BaseAddress - Heap + 4096);
      v19 = HeapHandle[44];
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
      RegionSize = 4096LL;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u, &OldProtect);
      v12[17] = 1;
      *((_WORD *)v12 + 9) = (_WORD)v10 - v5;
    }
    else
    {
      v13 = HeapHandle[44];
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
      *((_WORD *)v12 + 9) = 0;
      v12[17] = 0;
    }
    v12[16] = v9;
    if ( RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v16 = 2147353472LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(HeapHandle, v12, v10, v7);
  }
  else
  {
    v23 = HeapHandle[44];
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
