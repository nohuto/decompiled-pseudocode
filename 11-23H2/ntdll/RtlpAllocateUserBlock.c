/*
 * XREFs of RtlpAllocateUserBlock @ 0x180063590
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpAllocateUserBlockFromHeap @ 0x18006372C (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A4C40 (RtlpInterlockedPopEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180118B38 (RtlpLogHeapSubSegmentAllocCached.c)
 */

PSLIST_ENTRY __fastcall RtlpAllocateUserBlock(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  PSLIST_ENTRY UserBlockFromHeap; // rbp
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _DWORD *SharedData; // rcx
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned __int32 v19; // eax
  unsigned __int32 v20; // eax

  v4 = a2;
  v8 = a2;
  v9 = a1 + 48 * (a2 - 5LL);
  ++*(_WORD *)(v9 + 28);
  UserBlockFromHeap = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v9);
  if ( UserBlockFromHeap )
  {
    ++*(_WORD *)(v9 + 32);
LABEL_3:
    v13 = 1LL << LOBYTE(UserBlockFromHeap[1].Next);
    if ( v13 > 0xF0000 )
      v13 = 983040LL;
    v14 = v13 + WORD1(UserBlockFromHeap[1].Next);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v16 = 2147353472LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), UserBlockFromHeap, v14, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v14);
    goto LABEL_9;
  }
  if ( (unsigned __int8)v4 > 7u )
  {
    UserBlockFromHeap = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (v4 - 6)));
    if ( UserBlockFromHeap )
      goto LABEL_3;
  }
  LOBYTE(v12) = a4;
  LOBYTE(v10) = v4;
  UserBlockFromHeap = (PSLIST_ENTRY)RtlpAllocateUserBlockFromHeap(*(_QWORD *)(a1 + 24), v10, a3, v12);
  if ( UserBlockFromHeap )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 48 * v8 - 224), 1u);
LABEL_9:
  v17 = *(unsigned __int16 *)(v9 + 28);
  if ( v17 > 0x40 )
  {
    if ( v17 < *(unsigned __int16 *)(v9 + 30) + (*(unsigned __int16 *)(v9 + 30) >> 1)
      && *(unsigned __int16 *)(v9 + 32) < v17 - (v17 >> 1) )
    {
      v19 = *(_DWORD *)(v9 + 20);
      if ( v19 >= 2 )
      {
        v20 = *(_DWORD *)(v9 + 24);
        if ( v20 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), v20 - 1, v20);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 20), v19 + 1, v19);
      }
    }
    *(_WORD *)(v9 + 28) = 0;
    *(_WORD *)(v9 + 30) = 0;
    *(_WORD *)(v9 + 32) = 0;
  }
  return UserBlockFromHeap;
}
