/*
 * XREFs of RtlpCommitBlock @ 0x180020728
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800219DC (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x180107448 (RtlpValidateHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180020680 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rcx
  char *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+50h] [rbp+20h] BYREF
  char *v28; // [rsp+60h] [rbp+30h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(a1, a2, (unsigned __int64 *)&v28, &v27);
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v27, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
  {
    v4 = RtlpHpHeapValidateProtection(a1, (*(_DWORD *)(a1 + 112) & 0x40000) != 0 ? 64 : 4);
    v7 = ZwAllocateVirtualMemory(-1LL, &v28, 0LL, &v27, 4096, v4);
    if ( v7 >= 0 )
    {
      v13 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, v5, v8, v9) )
        v14 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v14 = 2147353472LL;
      if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(a1, v28, v27, 8LL);
      *(_QWORD *)(a1 + 664) -= v27;
      --*(_DWORD *)(a1 + 660);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v10, v11, v12) )
        v18 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v18 = 2147353472LL;
      if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v15, v16, v17) )
          v13 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(a1, (_DWORD)v28, v27, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v13);
      }
      v22 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v18, v15, v16, v17) )
        v23 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v23 = 2147353482LL;
      if ( *(_BYTE *)v23 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v23, v19, v20, v21) )
          v22 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(a1, (_DWORD)v28, v27, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v22);
      }
      ++*(_DWORD *)(a1 + 624);
      if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
        goto LABEL_13;
      v25 = v28;
      v26 = v27 >> 2;
      if ( !(v27 >> 2) )
        goto LABEL_13;
      if ( ((unsigned __int8)v28 & 4) != 0 )
      {
        *(_DWORD *)v28 = -17891602;
        if ( !--v26 )
        {
LABEL_13:
          *(_BYTE *)(a2 + 10) &= 0x17u;
          return 1;
        }
        v25 += 4;
      }
      memset64(v25, 0xFEEEFEEEFEEEFEEEuLL, v26 >> 1);
      if ( (v26 & 1) != 0 )
        *(_DWORD *)&v25[4 * v26 - 4] = -17891602;
      goto LABEL_13;
    }
  }
  else
  {
    v7 = -1073741523;
  }
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v7, (const void *)a1, v28, v27);
  return 0;
}
