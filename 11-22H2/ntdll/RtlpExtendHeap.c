/*
 * XREFs of RtlpExtendHeap @ 0x180045E78
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180045758 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x18004612C (RtlpFindAndCommitPages.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047384 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpInitializeHeapSegment @ 0x180047EBC (RtlpInitializeHeapSegment.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     RtlpCoalesceHeap @ 0x1800FE77C (RtlpCoalesceHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x180115474 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180117254 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r8
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rcx
  ULONG_PTR v11; // rax
  ULONG Protect; // r15d
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  ULONG_PTR v24; // rax
  __int64 v25; // rax
  ULONG_PTR v26[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR v29; // [rsp+A8h] [rbp+58h] BYREF

  v29 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v29);
  if ( v5 )
  {
    v29 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, &v29, 0);
    RtlpInsertFreeBlock(a1, v6, v29);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6, v7);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_7;
  BaseAddress = 0LL;
  v9 = a2 + 0x2000;
  v10 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v10 = *(_QWORD *)(a1 + 160);
  if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v10 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v11 = (v10 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v11 >= 0xFD0000 )
    v11 = 16580608LL;
  RegionSize = v11;
  Protect = RtlpGetHeapProtection(a1, 1LL);
  while ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
  {
    if ( RegionSize == v9 )
    {
      ++*(_DWORD *)(a1 + 632);
      goto LABEL_7;
    }
    v24 = RegionSize >> 1;
    if ( RegionSize >> 1 < v9 )
      v24 = a2 + 0x2000;
    RegionSize = v24;
  }
  v13 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += RegionSize;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v13 = *(_QWORD *)(a1 + 168);
  v14 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v26[0] = (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v26[0], v14, a1, a1 + 376)
    || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v26, 0x1000u, Protect) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           v16,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v26[0],
                           (ULONG_PTR)BaseAddress + RegionSize - 4096) )
  {
    RtlpSecMemFreeVirtualMemory(v15, &BaseAddress, &RegionSize, 0x8000LL);
LABEL_7:
    if ( *(char *)(a1 + 112) < 0 )
    {
      v25 = RtlpCoalesceHeap(a1);
      v4 = (_BYTE *)v25;
      if ( v25 )
      {
        if ( *(unsigned __int16 *)(v25 + 8) >= a2 )
          return v25;
      }
    }
    v6 = 0LL;
    if ( v4 && *(_DWORD *)(a1 + 124) )
    {
      v4[11] = v4[8] ^ v4[9] ^ v4[10];
      *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    return v6;
  }
  v17 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v18 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapCommit(a1, BaseAddress, v26[0], 4LL);
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(
      a1,
      *((_QWORD *)BaseAddress + 8),
      v26[0],
      16 * *(_QWORD *)(a1 + 192),
      (HANDLE)*(unsigned __int8 *)v17);
  }
  v19 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v20 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v20 = 2147353482LL;
  if ( *(_BYTE *)v20 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v19 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(
      a1,
      *((_QWORD *)BaseAddress + 8),
      v26[0],
      16 * *(_QWORD *)(a1 + 192),
      (HANDLE)*(unsigned __int8 *)v19);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v22 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v22 = 2147353480LL;
  if ( *(_BYTE *)v22 )
    RtlpHeapLogRangeReserve(a1, BaseAddress, RegionSize);
  v23 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v23 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v23 + 11) != (*(_BYTE *)(v23 + 8) ^ (unsigned __int8)(*(_BYTE *)(v23 + 9) ^ *(_BYTE *)(v23 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v23, v21);
  }
  return *((_QWORD *)BaseAddress + 8);
}
