/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x1800450BC
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
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180045758 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x18004642C (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x1800465A4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x180046740 (RtlpRemoveUCRBlock.c)
 *     RtlpCollectFreeBlocks @ 0x180046A44 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180046C3C (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180046C90 (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180115298 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x180117070 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1801171A4 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpDeCommitFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r13
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  _BYTE *v27; // r15
  __int64 v28; // rdi
  unsigned __int64 v29; // rdi
  bool v30; // cc
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r8
  _QWORD *v34; // rcx
  __int64 v35; // r10
  _QWORD *v36; // rdx
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  __int64 v44; // rcx
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rax
  _BYTE *v47; // r15
  __int64 v48; // rdi
  unsigned __int64 v49; // rdi
  __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // rdi
  __int64 v56; // rcx
  int v57[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v58; // [rsp+48h] [rbp-18h]
  __int64 v59; // [rsp+50h] [rbp-10h]
  _QWORD *v60; // [rsp+58h] [rbp-8h] BYREF
  unsigned __int64 v61; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v62; // [rsp+B0h] [rbp+50h] BYREF
  char v63; // [rsp+B8h] [rbp+58h]

  v63 = a4;
  v62 = a3;
  v59 = 0LL;
  v4 = 0;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    goto LABEL_12;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v60, &v61) )
        *(_QWORD *)(v8 + 664) -= v61;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
    {
LABEL_12:
      RtlpInsertFreeBlock(a1, a2, a3);
      return;
    }
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
    {
LABEL_11:
      a1 = v8;
      a3 = v6;
      goto LABEL_12;
    }
    v10 = RtlpCoalesceFreeBlocks(a1);
    v6 = v62;
    v11 = v10;
    if ( v62 - 257 <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10, v62);
      v12 = *(_QWORD *)(v8 + 576) - 16LL * *(_QWORD *)(v8 + 192);
      if ( v12 < *(_QWORD *)(v8 + 672) - (*(_QWORD *)(v8 + 672) >> 4)
        && v12 > *(_QWORD *)(v8 + 680) - (*(_QWORD *)(v8 + 680) >> 2) )
      {
        RtlpCollectFreeBlocks(v8);
        *(_QWORD *)(v8 + 680) = v12;
        *(_QWORD *)(v8 + 672) = v12;
      }
      return;
    }
  }
  v13 = *(unsigned __int8 *)(v7 + 14);
  if ( (_BYTE)v13 )
    v14 = (v7 & 0xFFFFFFFFFFFF0000uLL) - (v13 << 16) + 0x10000;
  else
    v14 = v8;
  v15 = v11 + 16 * v6;
  if ( *(_BYTE *)(v15 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(v8, v15 + 16, a3, 1LL);
    v25 = *(_QWORD *)(v15 + 56);
    v59 = *(_QWORD *)(v15 + 48);
    v58 = v25;
    --*(_DWORD *)(v14 + 84);
    *(_DWORD *)(v14 + 80) -= *(_QWORD *)(v15 + 56) >> 12;
    *(_QWORD *)(v8 + 576) += *(_QWORD *)(v15 + 56);
    --*(_DWORD *)(v8 + 604);
    v26 = *(_QWORD *)(v15 + 56);
    if ( v26 >= 0xFF000 )
      *(_QWORD *)(v8 + 584) -= v26;
    v6 += (*(_QWORD *)(v15 + 56) >> 4) + 64LL;
    v4 = 1;
    v62 = v6;
  }
  else
  {
    v58 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_18;
  *(_QWORD *)v57 = v11;
  v34 = *(_QWORD **)(v14 + 96);
  v35 = v11;
  while ( (_QWORD *)(v14 + 96) != v34 )
  {
    v36 = v34 - 2;
    v37 = v34[2] + v34[3];
    v60 = v34 - 2;
    if ( v37 == v11 )
      goto LABEL_53;
    v34 = (_QWORD *)*v34;
  }
  v36 = 0LL;
  v60 = 0LL;
LABEL_53:
  if ( a4 && !v36 )
  {
LABEL_18:
    v16 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v57 = v16;
    if ( v16 == v11 + 80 )
    {
      v16 += 4096LL;
      *(_QWORD *)v57 = v16;
    }
    if ( v4 )
      v17 = v11 + 16 * v6;
    else
      v17 = 16 * v6 + v11 - 32;
    v18 = v17 & 0xFFFFFFFFFFFFF000uLL;
    if ( v18 < v16 )
    {
      if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
        goto LABEL_155;
      if ( !NtCurrentPeb()->Ldr )
        goto LABEL_152;
      goto LABEL_151;
    }
    v19 = v18 - v16;
    v20 = 2147353472LL;
    v61 = v19;
    if ( v63 || *(_BYTE *)(v15 + 15) == 3 )
    {
      if ( !v19 )
        goto LABEL_30;
    }
    else if ( !v19 || v19 < *(_QWORD *)(v8 + 176) )
    {
      goto LABEL_155;
    }
    ++*(_DWORD *)(v8 + 612);
    if ( (int)RtlpSecMemFreeVirtualMemory(v19, v57, &v61, 0x4000LL) < 0 )
    {
      ++*(_DWORD *)(v8 + 628);
      goto LABEL_106;
    }
    if ( RtlGetCurrentServiceSessionId() )
    {
      v6 = v62;
      v21 = (__int64)NtCurrentPeb()->SharedData + 550;
    }
    else
    {
      v21 = 2147353472LL;
    }
    if ( *(_BYTE *)v21 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(v8, *(_QWORD *)v57, v61, 6LL);
      v6 = v62;
    }
LABEL_30:
    if ( !v4 )
    {
      v27 = (_BYTE *)(*(_QWORD *)v57 + v61);
      v28 = 16 * v6;
      *(_WORD *)(*(_QWORD *)v57 + v61 + 12) = *(_WORD *)(v8 + 140);
      if ( v28 + v11 == v61 + *(_QWORD *)v57 )
      {
        if ( *(_DWORD *)(v8 + 124) )
        {
          v27[11] = v27[8] ^ v27[9] ^ v27[10];
          *((_DWORD *)v27 + 2) ^= *(_DWORD *)(v8 + 136);
        }
      }
      else
      {
        v27[15] = 0;
        v27[10] = 0;
        v29 = (v11 + v28 - v61 - *(_QWORD *)v57) >> 4;
        v30 = RtlpHeapErrorHandlerThreshold < 1;
        *((_WORD *)v27 + 4) = v29;
        if ( !v30 && (unsigned __int16)v29 <= 1u )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("(LONG)FreeEntry->Size > 1");
          RtlpHeapHandleError(1LL);
        }
        v27[11] = 0;
        v31 = *(_QWORD *)(v14 + 40);
        if ( v31 == v14 )
        {
          LOBYTE(v32) = 0;
        }
        else
        {
          v32 = ((unsigned __int64)&v27[-v14] >> 16) + 1;
          if ( v32 >= 0xFE )
            RtlpLogHeapFailure(3, v31, (_DWORD)v27, v14, 0LL, 0LL);
        }
        v33 = *((unsigned __int16 *)v27 + 4);
        v27[14] = v32;
        RtlpInsertFreeBlock(v8, (__int64)v27, v33);
      }
    }
    RtlpCreateUCREntry(v8, v14, v57[0] - 48, v61, v11, (__int64)&v60);
    RtlpInsertFreeBlock(v8, v11, (unsigned __int64)v60);
    if ( RtlGetCurrentServiceSessionId() )
      v22 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v22 = 2147353472LL;
    if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapContractEvent(v8, v57[0], v61, 16 * *(_QWORD *)(v8 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v20);
    }
    v23 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v24 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v24 = 2147353482LL;
    if ( *(_BYTE *)v24 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v23 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapContractEvent(v8, v57[0], v61, 16 * *(_QWORD *)(v8 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v23);
    }
    return;
  }
  v38 = RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v36 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v35 = *(_QWORD *)v57;
    v38 = RtlpHeapErrorHandlerThreshold;
    v6 = v62;
  }
  if ( v4 )
    v39 = v11 + 16 * v6;
  else
    v39 = 16 * v6 + v11 - 32;
  v40 = (v39 & 0xFFFFFFFFFFFFF000uLL) - v35;
  v61 = v40;
  if ( !v40 )
  {
    if ( v38 < 1 || !v4 )
      goto LABEL_155;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_152:
      DbgPrint("HEAP: ");
      goto LABEL_153;
    }
LABEL_151:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_153:
    DbgPrint("(!TrailingUCR)");
    RtlpHeapHandleError(1LL);
    goto LABEL_154;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v40, v57, &v61, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(v8 + 628);
LABEL_106:
    if ( !v4 )
    {
LABEL_155:
      a2 = v11;
      goto LABEL_11;
    }
    RtlpCreateUCREntry(v8, v14, v59 - 48, v58, v11, (__int64)&v62);
LABEL_154:
    v6 = v62;
    goto LABEL_155;
  }
  v43 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v6 = v62;
    v44 = (__int64)NtCurrentPeb()->SharedData + 550;
  }
  else
  {
    v44 = 2147353472LL;
  }
  if ( *(_BYTE *)v44 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapDecommit(v8, *(_QWORD *)v57, v61, 5LL);
    v6 = v62;
  }
  ++*(_DWORD *)(v8 + 612);
  v45 = (unsigned __int64)v60;
  if ( v60[5] >= 0xFF000uLL )
    *(_QWORD *)(v8 + 584) -= v60[5];
  RtlpRemoveUCRBlock(v8, v45, v41, v42);
  *(_QWORD *)(v45 + 40) += v61;
  RtlpInsertUCRBlock(v8, v45);
  *(_DWORD *)(v14 + 80) += v61 >> 12;
  *(_QWORD *)(v8 + 576) -= v61;
  v46 = *(_QWORD *)(v45 + 40);
  if ( v46 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) += v46;
  if ( !v4 )
  {
    v47 = (_BYTE *)(*(_QWORD *)v57 + v61);
    v48 = 16 * v6;
    *(_WORD *)(*(_QWORD *)v57 + v61 + 12) = *(_WORD *)(v8 + 140);
    if ( v48 + v11 == v61 + *(_QWORD *)v57 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v47[11] = v47[8] ^ v47[9] ^ v47[10];
        *((_DWORD *)v47 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v47[15] = 0;
      v47[10] = 0;
      v49 = (v48 - v61) >> 4;
      v30 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v47 + 4) = v49;
      if ( !v30 && (unsigned __int16)v49 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v47[11] = 0;
      v50 = *(_QWORD *)(v14 + 40);
      if ( v50 == v14 )
      {
        LOBYTE(v51) = 0;
      }
      else
      {
        v51 = ((unsigned __int64)&v47[-v14] >> 16) + 1;
        if ( v51 >= 0xFE )
          RtlpLogHeapFailure(3, v50, (_DWORD)v47, v14, 0LL, 0LL);
      }
      v52 = *((unsigned __int16 *)v47 + 4);
      v47[14] = v51;
      RtlpInsertFreeBlock(v8, (__int64)v47, v52);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    v53 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v53 = 2147353472LL;
  if ( *(_BYTE *)v53 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->SharedData + 550;
    v54 = v58;
    RtlpLogHeapContractEvent(v8, v57[0], v61, 16 * *(_QWORD *)(v8 + 192), v4, v58, (HANDLE)*(unsigned __int8 *)v43);
  }
  else
  {
    v54 = v58;
  }
  v55 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v56 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v56 = 2147353482LL;
  if ( *(_BYTE *)v56 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v55 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapContractEvent(v8, v57[0], v61, 16 * *(_QWORD *)(v8 + 192), v4, v54, (HANDLE)*(unsigned __int8 *)v55);
  }
}
