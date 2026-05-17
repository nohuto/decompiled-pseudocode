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
  int HeapProtection; // eax
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  char *v15; // [rsp+60h] [rbp+30h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v15, &v14);
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v14, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
  {
    HeapProtection = RtlpGetHeapProtection(a1, 1);
    v5 = ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v14, 4096, HeapProtection);
    if ( v5 >= 0 )
    {
      v6 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v7 = 2147353472LL;
      if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(a1, v15, v14, 8LL);
      *(_QWORD *)(a1 + 664) -= v14;
      --*(_DWORD *)(a1 + 660);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v6 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(a1, (_DWORD)v15, v14, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v6);
      }
      v9 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(a1, (_DWORD)v15, v14, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v9);
      }
      ++*(_DWORD *)(a1 + 624);
      if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
        goto LABEL_13;
      v12 = v15;
      v13 = v14 >> 2;
      if ( !(v14 >> 2) )
        goto LABEL_13;
      if ( ((unsigned __int8)v15 & 4) != 0 )
      {
        *(_DWORD *)v15 = -17891602;
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
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v5, (const void *)a1, v15, v14);
  return 0;
}
