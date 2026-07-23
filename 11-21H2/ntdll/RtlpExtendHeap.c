/*
 * XREFs of RtlpExtendHeap @ 0x180020860
 * Callers:
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800202FC (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x18011508C (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdi
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rcx
  ULONG_PTR v9; // rax
  ULONG Protect; // r15d
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  ULONG_PTR v21; // rax
  __int64 v22; // rax
  ULONG_PTR v23[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR v26; // [rsp+A8h] [rbp+58h] BYREF

  v26 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  if ( RtlpFindAndCommitPages((PVOID)a1, &v26) )
  {
    v26 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1);
    RtlpInsertFreeBlock(a1, v5, v26);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    BaseAddress = 0LL;
    v7 = a2 + 0x2000;
    v8 = a2 + 0x2000;
    if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
      v8 = *(_QWORD *)(a1 + 160);
    if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v8 >= 0x3F4000 )
      *(_DWORD *)(a1 + 120) |= 0x20000000u;
    v9 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    if ( v9 >= 0xFD0000 )
      v9 = 16580608LL;
    RegionSize = v9;
    Protect = RtlpGetHeapProtection((_DWORD *)a1, 1);
    while ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
    {
      if ( RegionSize == v7 )
      {
        ++*(_DWORD *)(a1 + 632);
        goto LABEL_36;
      }
      v21 = RegionSize >> 1;
      if ( RegionSize >> 1 < v7 )
        v21 = a2 + 0x2000;
      RegionSize = v21;
    }
    v11 = a2 + 4096;
    *(_QWORD *)(a1 + 160) += RegionSize;
    if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
      v11 = *(_QWORD *)(a1 + 168);
    v12 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v23[0] = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v23[0], v12, a1, a1 + 376)
      && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v23, 0x1000u, Protect) >= 0
      && (unsigned __int8)RtlpInitializeHeapSegment(
                            a1,
                            (int)BaseAddress,
                            112,
                            v14,
                            2,
                            (__int64)BaseAddress,
                            (char *)BaseAddress + v23[0],
                            (ULONG_PTR)BaseAddress + RegionSize - 4096) )
    {
      v15 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v16 = 2147353472LL;
      if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapCommit(a1, BaseAddress, v23[0], 4LL);
        if ( RtlGetCurrentServiceSessionId() )
          v15 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(
          a1,
          *((_QWORD *)BaseAddress + 8),
          v23[0],
          16 * *(_QWORD *)(a1 + 192),
          (HANDLE)*(unsigned __int8 *)v15);
      }
      v17 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v18 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v18 = 2147353482LL;
      if ( *(_BYTE *)v18 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v17 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(
          a1,
          *((_QWORD *)BaseAddress + 8),
          v23[0],
          16 * *(_QWORD *)(a1 + 192),
          (HANDLE)*(unsigned __int8 *)v17);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v19 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v19 = 2147353480LL;
      if ( *(_BYTE *)v19 )
        RtlpHeapLogRangeReserve(a1, BaseAddress, RegionSize);
      v20 = *((_QWORD *)BaseAddress + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v20);
      }
      return *((_QWORD *)BaseAddress + 8);
    }
    RtlpSecMemFreeVirtualMemory(v13, &BaseAddress, &RegionSize, 0x8000u);
  }
LABEL_36:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v22 = RtlpCoalesceHeap(a1);
    v4 = (_BYTE *)v22;
    if ( v22 )
    {
      if ( *(unsigned __int16 *)(v22 + 8) >= a2 )
        return v22;
    }
  }
  v5 = 0LL;
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  return v5;
}
