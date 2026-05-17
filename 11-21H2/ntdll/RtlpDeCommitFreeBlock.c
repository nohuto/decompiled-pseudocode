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

struct _PEB *__fastcall RtlpDeCommitFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
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
  struct _PEB *result; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  _BYTE *v43; // rdi
  unsigned __int64 v44; // r15
  bool v45; // cc
  __int64 v46; // rdx
  unsigned __int64 v47; // r15
  __int64 v48; // r8
  _QWORD *v49; // r8
  _QWORD *v50; // rcx
  unsigned __int64 v51; // r9
  _QWORD *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r12
  __int64 v62; // rcx
  __int64 *v63; // rdi
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  char v69; // r13
  __int64 v70; // r8
  _BYTE *v71; // rdi
  unsigned __int64 v72; // r15
  __int64 v73; // rdx
  unsigned __int64 v74; // r14
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // r15
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdi
  __int64 v85; // rcx
  bool v86; // zf
  unsigned __int64 v89; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v90; // [rsp+48h] [rbp-28h] BYREF
  __int64 v91; // [rsp+50h] [rbp-20h]
  __int64 v92; // [rsp+58h] [rbp-18h]
  __int64 *v93; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v94; // [rsp+68h] [rbp-8h] BYREF
  __int64 v95; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v96; // [rsp+C0h] [rbp+50h] BYREF
  char v97; // [rsp+C8h] [rbp+58h]

  v97 = a4;
  v96 = a3;
  v92 = 0LL;
  v4 = 0;
  v5 = a4;
  v86 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v6 = a3;
  v7 = a2;
  LOBYTE(v95) = 0;
  v8 = a1;
  if ( !v86 )
    return (struct _PEB *)RtlpInsertFreeBlock(a1, a2, a3);
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      if ( RtlpGetFreeBlockInsidePageBoundaries(a1, a2, (unsigned __int64 *)&v93, &v94) )
        *(_QWORD *)(v8 + 664) -= v94;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
      return (struct _PEB *)RtlpInsertFreeBlock(a1, a2, a3);
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
    {
LABEL_11:
      a1 = v8;
      a3 = v6;
      return (struct _PEB *)RtlpInsertFreeBlock(a1, a2, a3);
    }
    v10 = RtlpCoalesceFreeBlocks(a1, a2, &v96, 0LL);
    v6 = v96;
    v11 = v10;
    if ( (unsigned __int64)(v96 - 257) <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10, v96);
      v12 = *(_QWORD *)(v8 + 576) - 16LL * *(_QWORD *)(v8 + 192);
      result = (struct _PEB *)(*(_QWORD *)(v8 + 672) >> 4);
      if ( v12 < *(_QWORD *)(v8 + 672) - (_QWORD)result )
      {
        result = (struct _PEB *)(*(_QWORD *)(v8 + 680) >> 2);
        if ( v12 > *(_QWORD *)(v8 + 680) - (_QWORD)result )
        {
          result = (struct _PEB *)RtlpCollectFreeBlocks(v8);
          *(_QWORD *)(v8 + 680) = v12;
          *(_QWORD *)(v8 + 672) = v12;
        }
      }
      return result;
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
    v41 = *(_QWORD *)(v16 + 56);
    v92 = *(_QWORD *)(v16 + 48);
    v91 = v41;
    --*(_DWORD *)(v15 + 84);
    *(_DWORD *)(v15 + 80) -= *(_QWORD *)(v16 + 56) >> 12;
    *(_QWORD *)(v8 + 576) += *(_QWORD *)(v16 + 56);
    --*(_DWORD *)(v8 + 604);
    v42 = *(_QWORD *)(v16 + 56);
    if ( v42 >= 0xFF000 )
    {
      *(_QWORD *)(v8 + 584) -= v42;
      v42 = *(_QWORD *)(v16 + 56);
    }
    v5 = v97;
    v6 += (v42 >> 4) + 64;
    LOBYTE(v95) = 1;
    v96 = v6;
    v4 = 1;
  }
  else
  {
    v91 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_18;
  v49 = (_QWORD *)(v15 + 96);
  v90 = v11;
  v50 = *(_QWORD **)(v15 + 96);
  v51 = v11;
  while ( v49 != v50 )
  {
    v52 = v50 - 2;
    v53 = v50[2] + v50[3];
    v93 = v50 - 2;
    if ( v53 == v11 )
      goto LABEL_53;
    v50 = (_QWORD *)*v50;
  }
  v52 = 0LL;
  v93 = 0LL;
LABEL_53:
  if ( v5 && !v52 )
  {
LABEL_18:
    v17 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    v90 = v17;
    if ( v17 == v11 + 80 )
    {
      v17 += 4096LL;
      v90 = v17;
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
      v89 = v21;
      if ( !v97 && *(_BYTE *)(v16 + 15) != 3 && (!v21 || v21 < *(_QWORD *)(v8 + 176)) )
        goto LABEL_152;
      v22 = 2147353472LL;
      if ( v21 )
      {
        ++*(_DWORD *)(v8 + 612);
        if ( (int)RtlpSecMemFreeVirtualMemory(v17, &v90, &v89, 0x4000LL) < 0 )
        {
          ++*(_DWORD *)(v8 + 628);
          v86 = (_BYTE)v95 == 0;
          goto LABEL_105;
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v23, v25, v26) )
          v27 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v27 = 2147353472LL;
        if ( *(_BYTE *)v27 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v8, v90, v89, 6LL);
      }
      if ( !(_BYTE)v95 )
      {
        v43 = (_BYTE *)(v90 + v89);
        *(_WORD *)(v90 + v89 + 12) = *(_WORD *)(v8 + 140);
        if ( v18 + v11 == v89 + v90 )
        {
          if ( *(_DWORD *)(v8 + 124) )
          {
            v43[11] = v43[8] ^ v43[9] ^ v43[10];
            *((_DWORD *)v43 + 2) ^= *(_DWORD *)(v8 + 136);
          }
        }
        else
        {
          v43[15] = 0;
          v43[10] = 0;
          v44 = (v11 + v18 - v89 - v90) >> 4;
          v45 = RtlpHeapErrorHandlerThreshold < 1;
          *((_WORD *)v43 + 4) = v44;
          if ( !v45 && (unsigned __int16)v44 <= 1u )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("(LONG)FreeEntry->Size > 1");
            RtlpHeapHandleError(1LL);
          }
          v43[11] = 0;
          v46 = *(_QWORD *)(v15 + 40);
          if ( v46 == v15 )
          {
            LOBYTE(v47) = 0;
          }
          else
          {
            v47 = ((unsigned __int64)&v43[-v15] >> 16) + 1;
            if ( v47 >= 0xFE )
              RtlpLogHeapFailure(3, v46, (_DWORD)v43, v15, 0LL, 0LL);
          }
          v48 = *((unsigned __int16 *)v43 + 4);
          v43[14] = v47;
          RtlpInsertFreeBlock(v8, v43, v48);
        }
      }
      RtlpCreateUCREntry(v8, v15, v90 - 48, v89, v11, &v95);
      RtlpInsertFreeBlock(v8, v11, v95);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, v28, v30, v31) )
        v35 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v35 = 2147353472LL;
      if ( *(_BYTE *)v35 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v35, v32, v33, v34) )
          v22 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapContractEvent(v8, v90, v89, 16 * *(_QWORD *)(v8 + 192), 0, 0LL, *(unsigned __int8 *)v22);
      }
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(v35, v32, v33, v34);
      v39 = 2147353482LL;
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v40 = (__int64)result->SharedData + 560;
      }
      else
      {
        v40 = 2147353482LL;
      }
      if ( *(_BYTE *)v40 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v40, v36, v37, v38) )
          v39 = (__int64)NtCurrentPeb()->SharedData + 560;
        return (struct _PEB *)RtlpLogHeapContractEvent(
                                v8,
                                v90,
                                v89,
                                16 * (unsigned int)*(_QWORD *)(v8 + 192),
                                0,
                                0LL,
                                *(unsigned __int8 *)v39);
      }
      return result;
    }
    if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
      goto LABEL_152;
    if ( !NtCurrentPeb()->Ldr )
      goto LABEL_149;
    goto LABEL_148;
  }
  v54 = (unsigned int)RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v52 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v49, v11);
    else
      DbgPrint("HEAP: ", 0LL, v49, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v51 = v90;
    v54 = (unsigned int)RtlpHeapErrorHandlerThreshold;
    v6 = v96;
  }
  v55 = 16 * v6;
  if ( v4 )
  {
    v56 = v55 + v11;
    v94 = v55 + v11;
  }
  else
  {
    v94 = v55 + v11;
    v56 = v55 + v11 - 32;
  }
  v89 = (v56 & 0xFFFFFFFFFFFFF000uLL) - v51;
  if ( !v89 )
  {
    if ( (int)v54 < 1 || !v4 )
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
  if ( (int)RtlpSecMemFreeVirtualMemory(v54, &v90, &v89, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(v8 + 628);
    v86 = v4 == 0;
LABEL_105:
    if ( v86 )
    {
LABEL_152:
      a2 = v11;
      goto LABEL_11;
    }
    RtlpCreateUCREntry(v8, v15, v92 - 48, v91, v11, &v96);
LABEL_151:
    v6 = v96;
    goto LABEL_152;
  }
  v61 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v58, v57, v59, v60) )
    v62 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v62 = 2147353472LL;
  if ( *(_BYTE *)v62 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v8, v90, v89, 5LL);
  ++*(_DWORD *)(v8 + 612);
  v63 = v93;
  v64 = v93[5];
  if ( v64 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) -= v64;
  RtlpRemoveUCRBlock(v8, v63);
  v63[5] += v89;
  RtlpInsertUCRBlock(v8, v63);
  *(_DWORD *)(v15 + 80) += v89 >> 12;
  *(_QWORD *)(v8 + 576) -= v89;
  v68 = v63[5];
  if ( v68 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) += v68;
  v69 = v95;
  v70 = 0LL;
  if ( !(_BYTE)v95 )
  {
    v71 = (_BYTE *)(v90 + v89);
    *(_WORD *)(v90 + v89 + 12) = *(_WORD *)(v8 + 140);
    v66 = v89 + v90;
    if ( v94 == v89 + v90 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v71[11] = v71[8] ^ v71[9] ^ v71[10];
        *((_DWORD *)v71 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v71[15] = 0;
      v71[10] = 0;
      v72 = (v55 - v89) >> 4;
      v45 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v71 + 4) = v72;
      if ( !v45 && (unsigned __int16)v72 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL);
        else
          DbgPrint("HEAP: ", v65, 0LL);
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v71[11] = 0;
      v73 = *(_QWORD *)(v15 + 40);
      if ( v73 == v15 )
      {
        LOBYTE(v74) = 0;
      }
      else
      {
        v74 = ((unsigned __int64)&v71[-v15] >> 16) + 1;
        if ( v74 >= 0xFE )
          RtlpLogHeapFailure(3, v73, (_DWORD)v71, v15, 0LL, 0LL);
      }
      v75 = *((unsigned __int16 *)v71 + 4);
      v71[14] = v74;
      RtlpInsertFreeBlock(v8, v71, v75);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v66, v65, v70, v67) )
    v79 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v79 = 2147353472LL;
  if ( *(_BYTE *)v79 && (v79 = 1LL, (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v76, v77, v78) )
      v61 = (__int64)NtCurrentPeb()->SharedData + 550;
    v80 = v91;
    RtlpLogHeapContractEvent(v8, v90, v89, 16 * *(_QWORD *)(v8 + 192), v69, v91, *(unsigned __int8 *)v61);
  }
  else
  {
    v80 = v91;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v79, v76, v77, v78);
  v84 = 2147353482LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v85 = (__int64)result->SharedData + 560;
  }
  else
  {
    v85 = 2147353482LL;
  }
  if ( *(_BYTE *)v85 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v85, v81, v82, v83) )
      v84 = (__int64)NtCurrentPeb()->SharedData + 560;
    return (struct _PEB *)RtlpLogHeapContractEvent(
                            v8,
                            v90,
                            v89,
                            16 * (unsigned int)*(_QWORD *)(v8 + 192),
                            v69,
                            v80,
                            *(unsigned __int8 *)v84);
  }
  return result;
}
