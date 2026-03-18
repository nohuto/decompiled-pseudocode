/*
 * XREFs of RtlpExtendHeap @ 0x1405E9C3C
 * Callers:
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x140351BF4 (RtlpHpHeapCheckCommitLimit.c)
 *     ZwAllocateVirtualMemory @ 0x14041BA60 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E8A08 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x1405E9E8C (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA72C (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x1405EA9DC (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F1C10 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdi
  __int64 v7; // rcx
  ULONG_PTR v8; // rcx
  ULONG_PTR v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r9d
  __int64 v13; // rdx
  ULONG_PTR v15[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v15[0] = 0LL;
  v18 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = RtlpFindAndCommitPages(a1, &v18);
  if ( v4 )
  {
    v18 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1, v4, &v18);
    RtlpInsertFreeBlock(a1, v5, v18);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 )
    return 0LL;
  BaseAddress = 0LL;
  v6 = a2 + 0x2000;
  v7 = a2 + 0x2000;
  if ( (unsigned __int64)(a2 + 0x2000) <= *(_QWORD *)(a1 + 160) )
    v7 = *(_QWORD *)(a1 + 160);
  v8 = (v7 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v8 >= 0xFD0000 )
    v8 = 16580608LL;
  for ( RegionSize = v8;
        ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0;
        RegionSize = v9 )
  {
    if ( RegionSize == v6 )
    {
      ++*(_DWORD *)(a1 + 632);
      return 0LL;
    }
    v9 = RegionSize >> 1;
    if ( RegionSize >> 1 < v6 )
      v9 = a2 + 0x2000;
  }
  v10 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += RegionSize;
  if ( (unsigned __int64)(a2 + 4096) <= *(_QWORD *)(a1 + 168) )
    v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v15[0] = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v15[0], v11, a1, (unsigned __int64 *)(a1 + 376))
    || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v15, 0x1000u, 4u) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           v12,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v15[0],
                           (__int64)BaseAddress + RegionSize - 4096) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  v13 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v13);
  }
  return *((_QWORD *)BaseAddress + 8);
}
