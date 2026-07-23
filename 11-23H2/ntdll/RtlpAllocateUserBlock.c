/*
 * XREFs of RtlpAllocateUserBlock @ 0x180063590
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpAllocateUserBlockFromHeap @ 0x18006372C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A4C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180118B08 (RtlpLogHeapSubSegmentAllocCached.c)
 */

PSLIST_ENTRY __fastcall RtlpAllocateUserBlock(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  PSLIST_ENTRY UserBlockFromHeap; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int32 v15; // eax
  unsigned __int32 v16; // eax

  v3 = a2;
  v6 = a2;
  v7 = a1 + 48 * (a2 - 5LL);
  ++*(_WORD *)(v7 + 28);
  UserBlockFromHeap = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v7);
  if ( UserBlockFromHeap )
  {
    ++*(_WORD *)(v7 + 32);
LABEL_3:
    v9 = 1LL << LOBYTE(UserBlockFromHeap[1].Next);
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + WORD1(UserBlockFromHeap[1].Next);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), UserBlockFromHeap, v10, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v10);
    goto LABEL_9;
  }
  if ( (unsigned __int8)v3 > 7u )
  {
    UserBlockFromHeap = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (v3 - 6)));
    if ( UserBlockFromHeap )
      goto LABEL_3;
  }
  UserBlockFromHeap = (PSLIST_ENTRY)RtlpAllocateUserBlockFromHeap(*(PVOID *)(a1 + 24));
  if ( UserBlockFromHeap )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 48 * v6 - 224), 1u);
LABEL_9:
  v13 = *(unsigned __int16 *)(v7 + 28);
  if ( v13 > 0x40 )
  {
    if ( v13 < *(unsigned __int16 *)(v7 + 30) + (*(unsigned __int16 *)(v7 + 30) >> 1)
      && *(unsigned __int16 *)(v7 + 32) < v13 - (v13 >> 1) )
    {
      v15 = *(_DWORD *)(v7 + 20);
      if ( v15 >= 2 )
      {
        v16 = *(_DWORD *)(v7 + 24);
        if ( v16 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), v16 - 1, v16);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 20), v15 + 1, v15);
      }
    }
    *(_WORD *)(v7 + 28) = 0;
    *(_WORD *)(v7 + 30) = 0;
    *(_WORD *)(v7 + 32) = 0;
  }
  return UserBlockFromHeap;
}
