/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180022B64
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
 *     RtlpCollectFreeBlocks @ 0x180020488 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180020680 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCreateUCREntry @ 0x180020E2C (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180020FA4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x180021140 (RtlpRemoveUCRBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x180116C84 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x180116DB8 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

int __fastcall RtlpDeCommitFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r12
  char v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  struct _PEB *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  _BYTE *v29; // rdi
  unsigned __int64 v30; // r15
  bool v31; // cc
  __int64 v32; // rdx
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  _QWORD *v35; // r8
  _QWORD *v36; // rcx
  unsigned __int64 v37; // r9
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 *v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  char v49; // r13
  _BYTE *v50; // rdi
  unsigned __int64 v51; // r15
  __int64 v52; // rdx
  unsigned __int64 v53; // r14
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r15
  __int64 v57; // rdi
  __int64 v58; // rcx
  bool v59; // zf
  int v61[2]; // [rsp+40h] [rbp-30h] BYREF
  int v62[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v63; // [rsp+50h] [rbp-20h]
  __int64 v64; // [rsp+58h] [rbp-18h]
  __int64 *v65; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v66; // [rsp+68h] [rbp-8h] BYREF
  __int64 v67; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v68; // [rsp+C0h] [rbp+50h] BYREF
  char v69; // [rsp+C8h] [rbp+58h]

  v69 = a4;
  v68 = a3;
  v64 = 0LL;
  v4 = 0;
  v5 = a4;
  v59 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v6 = a3;
  v7 = a2;
  LOBYTE(v67) = 0;
  v8 = a1;
  if ( !v59 )
    goto LABEL_12;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      if ( RtlpGetFreeBlockInsidePageBoundaries(a1, a2, (unsigned __int64 *)&v65, &v66) )
        *(_QWORD *)(v8 + 664) -= v66;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
    {
LABEL_12:
      LODWORD(v13) = RtlpInsertFreeBlock(a1, a2, a3);
      return (int)v13;
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
    v6 = v68;
    v11 = v10;
    if ( (unsigned __int64)(v68 - 257) <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10, v68);
      v12 = *(_QWORD *)(v8 + 576) - 16LL * *(_QWORD *)(v8 + 192);
      v13 = (struct _PEB *)(*(_QWORD *)(v8 + 672) >> 4);
      if ( v12 < *(_QWORD *)(v8 + 672) - (_QWORD)v13 )
      {
        v13 = (struct _PEB *)(*(_QWORD *)(v8 + 680) >> 2);
        if ( v12 > *(_QWORD *)(v8 + 680) - (_QWORD)v13 )
        {
          LODWORD(v13) = RtlpCollectFreeBlocks(v8);
          *(_QWORD *)(v8 + 680) = v12;
          *(_QWORD *)(v8 + 672) = v12;
        }
      }
      return (int)v13;
    }
  }
  v14 = *(unsigned __int8 *)(v7 + 14);
  if ( (_BYTE)v14 )
    v15 = (v7 & 0xFFFFFFFFFFFF0000uLL) - (v14 << 16) + 0x10000;
  else
    v15 = v8;
  v16 = v11 + 16 * v6;
  if ( *(_BYTE *)(v16 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(v8, (__int64 *)(v16 + 16));
    v27 = *(_QWORD *)(v16 + 56);
    v64 = *(_QWORD *)(v16 + 48);
    v63 = v27;
    --*(_DWORD *)(v15 + 84);
    *(_DWORD *)(v15 + 80) -= *(_QWORD *)(v16 + 56) >> 12;
    *(_QWORD *)(v8 + 576) += *(_QWORD *)(v16 + 56);
    --*(_DWORD *)(v8 + 604);
    v28 = *(_QWORD *)(v16 + 56);
    if ( v28 >= 0xFF000 )
    {
      *(_QWORD *)(v8 + 584) -= v28;
      v28 = *(_QWORD *)(v16 + 56);
    }
    v5 = v69;
    v6 += (v28 >> 4) + 64;
    LOBYTE(v67) = 1;
    v68 = v6;
    v4 = 1;
  }
  else
  {
    v63 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_18;
  v35 = (_QWORD *)(v15 + 96);
  *(_QWORD *)v62 = v11;
  v36 = *(_QWORD **)(v15 + 96);
  v37 = v11;
  while ( v35 != v36 )
  {
    v38 = v36 - 2;
    v39 = v36[2] + v36[3];
    v65 = v36 - 2;
    if ( v39 == v11 )
      goto LABEL_53;
    v36 = (_QWORD *)*v36;
  }
  v38 = 0LL;
  v65 = 0LL;
LABEL_53:
  if ( v5 && !v38 )
  {
LABEL_18:
    v17 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v62 = v17;
    if ( v17 == v11 + 80 )
    {
      v17 += 4096LL;
      *(_QWORD *)v62 = v17;
    }
    v18 = 16 * v6;
    if ( v4 )
      v19 = v18 + v11;
    else
      v19 = v18 + v11 - 32;
    v20 = v19 & 0xFFFFFFFFFFFFF000uLL;
    if ( v20 >= v17 )
    {
      v21 = v20 - v17;
      *(_QWORD *)v61 = v21;
      if ( !v69 && *(_BYTE *)(v16 + 15) != 3 && (!v21 || v21 < *(_QWORD *)(v8 + 176)) )
        goto LABEL_152;
      v22 = 2147353472LL;
      if ( v21 )
      {
        ++*(_DWORD *)(v8 + 612);
        if ( RtlpSecMemFreeVirtualMemory(v17, (PVOID *)v62, (ULONG_PTR *)v61, 0x4000u) < 0 )
        {
          ++*(_DWORD *)(v8 + 628);
          v59 = (_BYTE)v67 == 0;
          goto LABEL_105;
        }
        if ( RtlGetCurrentServiceSessionId() )
          v23 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v23 = 2147353472LL;
        if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v8, *(_QWORD *)v62, *(_QWORD *)v61, 6LL);
      }
      if ( !(_BYTE)v67 )
      {
        v29 = (_BYTE *)(*(_QWORD *)v62 + *(_QWORD *)v61);
        *(_WORD *)(*(_QWORD *)v62 + *(_QWORD *)v61 + 12LL) = *(_WORD *)(v8 + 140);
        if ( v18 + v11 == *(_QWORD *)v61 + *(_QWORD *)v62 )
        {
          if ( *(_DWORD *)(v8 + 124) )
          {
            v29[11] = v29[8] ^ v29[9] ^ v29[10];
            *((_DWORD *)v29 + 2) ^= *(_DWORD *)(v8 + 136);
          }
        }
        else
        {
          v29[15] = 0;
          v29[10] = 0;
          v30 = (v11 + v18 - *(_QWORD *)v61 - *(_QWORD *)v62) >> 4;
          v31 = RtlpHeapErrorHandlerThreshold < 1;
          *((_WORD *)v29 + 4) = v30;
          if ( !v31 && (unsigned __int16)v30 <= 1u )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("(LONG)FreeEntry->Size > 1");
            RtlpHeapHandleError(1LL);
          }
          v29[11] = 0;
          v32 = *(_QWORD *)(v15 + 40);
          if ( v32 == v15 )
          {
            LOBYTE(v33) = 0;
          }
          else
          {
            v33 = ((unsigned __int64)&v29[-v15] >> 16) + 1;
            if ( v33 >= 0xFE )
              RtlpLogHeapFailure(3, v32, (_DWORD)v29, v15, 0LL, 0LL);
          }
          v34 = *((unsigned __int16 *)v29 + 4);
          v29[14] = v33;
          RtlpInsertFreeBlock(v8, v29, v34);
        }
      }
      RtlpCreateUCREntry(v8, v15, *(_QWORD *)v62 - 48LL, *(__int64 *)v61, v11, &v67);
      RtlpInsertFreeBlock(v8, v11, v67);
      if ( RtlGetCurrentServiceSessionId() )
        v24 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v24 = 2147353472LL;
      if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v22 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapContractEvent(
          v8,
          v62[0],
          v61[0],
          16 * *(_QWORD *)(v8 + 192),
          0,
          0LL,
          (HANDLE)*(unsigned __int8 *)v22);
      }
      LODWORD(v13) = RtlGetCurrentServiceSessionId();
      v25 = 2147353482LL;
      if ( (_DWORD)v13 )
      {
        v13 = NtCurrentPeb();
        v26 = (__int64)v13->SharedData + 560;
      }
      else
      {
        v26 = 2147353482LL;
      }
      if ( *(_BYTE *)v26 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v25 = (__int64)NtCurrentPeb()->SharedData + 560;
        LODWORD(v13) = RtlpLogHeapContractEvent(
                         v8,
                         v62[0],
                         v61[0],
                         16 * (unsigned int)*(_QWORD *)(v8 + 192),
                         0,
                         0LL,
                         (HANDLE)*(unsigned __int8 *)v25);
      }
      return (int)v13;
    }
    if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
      goto LABEL_152;
    if ( !NtCurrentPeb()->Ldr )
      goto LABEL_149;
    goto LABEL_148;
  }
  v40 = (unsigned int)RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v38 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v35, v11);
    else
      DbgPrint("HEAP: ", 0LL, v35, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v37 = *(_QWORD *)v62;
    v40 = (unsigned int)RtlpHeapErrorHandlerThreshold;
    v6 = v68;
  }
  v41 = 16 * v6;
  if ( v4 )
  {
    v42 = v41 + v11;
    v66 = v41 + v11;
  }
  else
  {
    v66 = v41 + v11;
    v42 = v41 + v11 - 32;
  }
  *(_QWORD *)v61 = (v42 & 0xFFFFFFFFFFFFF000uLL) - v37;
  if ( !*(_QWORD *)v61 )
  {
    if ( (int)v40 < 1 || !v4 )
      goto LABEL_152;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_149:
      DbgPrint("HEAP: ");
      goto LABEL_150;
    }
LABEL_148:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_150:
    DbgPrint("(!TrailingUCR)");
    RtlpHeapHandleError(1LL);
    goto LABEL_151;
  }
  if ( RtlpSecMemFreeVirtualMemory(v40, (PVOID *)v62, (ULONG_PTR *)v61, 0x4000u) < 0 )
  {
    ++*(_DWORD *)(v8 + 628);
    v59 = v4 == 0;
LABEL_105:
    if ( v59 )
    {
LABEL_152:
      a2 = v11;
      goto LABEL_11;
    }
    RtlpCreateUCREntry(v8, v15, v64 - 48, v63, v11, &v68);
LABEL_151:
    v6 = v68;
    goto LABEL_152;
  }
  v43 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v44 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v44 = 2147353472LL;
  if ( *(_BYTE *)v44 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v8, *(_QWORD *)v62, *(_QWORD *)v61, 5LL);
  ++*(_DWORD *)(v8 + 612);
  v45 = v65;
  v46 = v65[5];
  if ( v46 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) -= v46;
  RtlpRemoveUCRBlock(v8, v45);
  v45[5] += *(_QWORD *)v61;
  RtlpInsertUCRBlock(v8, v45);
  *(_DWORD *)(v15 + 80) += *(_QWORD *)v61 >> 12;
  *(_QWORD *)(v8 + 576) -= *(_QWORD *)v61;
  v48 = v45[5];
  if ( v48 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) += v48;
  v49 = v67;
  if ( !(_BYTE)v67 )
  {
    v50 = (_BYTE *)(*(_QWORD *)v62 + *(_QWORD *)v61);
    *(_WORD *)(*(_QWORD *)v62 + *(_QWORD *)v61 + 12LL) = *(_WORD *)(v8 + 140);
    if ( v66 == *(_QWORD *)v61 + *(_QWORD *)v62 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v50[11] = v50[8] ^ v50[9] ^ v50[10];
        *((_DWORD *)v50 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v50[15] = 0;
      v50[10] = 0;
      v51 = (unsigned __int64)(v41 - *(_QWORD *)v61) >> 4;
      v31 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v50 + 4) = v51;
      if ( !v31 && (unsigned __int16)v51 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL);
        else
          DbgPrint("HEAP: ", v47, 0LL);
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v50[11] = 0;
      v52 = *(_QWORD *)(v15 + 40);
      if ( v52 == v15 )
      {
        LOBYTE(v53) = 0;
      }
      else
      {
        v53 = ((unsigned __int64)&v50[-v15] >> 16) + 1;
        if ( v53 >= 0xFE )
          RtlpLogHeapFailure(3, v52, (_DWORD)v50, v15, 0LL, 0LL);
      }
      v54 = *((unsigned __int16 *)v50 + 4);
      v50[14] = v53;
      RtlpInsertFreeBlock(v8, v50, v54);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    v55 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v55 = 2147353472LL;
  if ( *(_BYTE *)v55 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->SharedData + 550;
    v56 = v63;
    RtlpLogHeapContractEvent(v8, v62[0], v61[0], 16 * *(_QWORD *)(v8 + 192), v49, v63, (HANDLE)*(unsigned __int8 *)v43);
  }
  else
  {
    v56 = v63;
  }
  LODWORD(v13) = RtlGetCurrentServiceSessionId();
  v57 = 2147353482LL;
  if ( (_DWORD)v13 )
  {
    v13 = NtCurrentPeb();
    v58 = (__int64)v13->SharedData + 560;
  }
  else
  {
    v58 = 2147353482LL;
  }
  if ( *(_BYTE *)v58 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v57 = (__int64)NtCurrentPeb()->SharedData + 560;
    LODWORD(v13) = RtlpLogHeapContractEvent(
                     v8,
                     v62[0],
                     v61[0],
                     16 * (unsigned int)*(_QWORD *)(v8 + 192),
                     v49,
                     v56,
                     (HANDLE)*(unsigned __int8 *)v57);
  }
  return (int)v13;
}
