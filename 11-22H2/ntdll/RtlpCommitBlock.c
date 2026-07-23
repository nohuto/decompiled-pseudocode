/*
 * XREFs of RtlpCommitBlock @ 0x18004691C
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800440A4 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044490 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180045758 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCoalesceHeap @ 0x1800FE77C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180101F50 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801071B0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180046C3C (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047384 (RtlpHpHeapCheckCommitLimit.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180117254 (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(__int64 a1, __int64 a2)
{
  ULONG Protect; // eax
  NTSTATUS v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  ULONG_PTR v13; // rdx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+20h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+30h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &BaseAddress, &RegionSize);
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
  {
    Protect = RtlpGetHeapProtection((_DWORD *)a1, 1);
    v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, Protect);
    if ( v5 >= 0 )
    {
      v6 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v7 = 2147353472LL;
      if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(a1, BaseAddress, RegionSize, 8LL);
      *(_QWORD *)(a1 + 664) -= RegionSize;
      --*(_DWORD *)(a1 + 660);
      if ( RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(
          a1,
          (int)BaseAddress,
          RegionSize,
          16 * *(_QWORD *)(a1 + 192),
          (HANDLE)*(unsigned __int8 *)v6);
      }
      v9 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(
          a1,
          (int)BaseAddress,
          RegionSize,
          16 * *(_QWORD *)(a1 + 192),
          (HANDLE)*(unsigned __int8 *)v9);
      }
      ++*(_DWORD *)(a1 + 624);
      if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
        goto LABEL_13;
      v12 = (char *)BaseAddress;
      v13 = RegionSize >> 2;
      if ( !(RegionSize >> 2) )
        goto LABEL_13;
      if ( ((unsigned __int8)BaseAddress & 4) != 0 )
      {
        *(_DWORD *)BaseAddress = -17891602;
        if ( !--v13 )
        {
LABEL_13:
          *(_BYTE *)(a2 + 10) &= 0x17u;
          return 1;
        }
        v12 += 4;
      }
      memset64(v12, 0xFEEEFEEEFEEEFEEEuLL, v13 >> 1);
      if ( (v13 & 1) != 0 )
        *(_DWORD *)&v12[4 * v13 - 4] = -17891602;
      goto LABEL_13;
    }
  }
  else
  {
    v5 = -1073741523;
  }
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v5,
    (const void *)a1,
    BaseAddress,
    RegionSize);
  return 0;
}
