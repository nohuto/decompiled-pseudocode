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
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int HeapProtection; // r15d
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+40h] [rbp-10h] BYREF
  __int64 v38; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+58h] BYREF

  v40 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v40);
  if ( v5 )
  {
    v40 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, &v40, 0LL);
    RtlpInsertFreeBlock(a1, v6, v40);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    v38 = 0LL;
    v8 = a2 + 0x2000;
    v9 = a2 + 0x2000;
    if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
      v9 = *(_QWORD *)(a1 + 160);
    if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v9 >= 0x3F4000 )
      *(_DWORD *)(a1 + 120) |= 0x20000000u;
    v10 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    if ( v10 >= 0xFD0000 )
      v10 = 16580608LL;
    v39 = v10;
    HeapProtection = RtlpGetHeapProtection(a1, 1);
    while ( (int)ZwAllocateVirtualMemory(-1LL, &v38, 0LL, &v39, 0x2000, HeapProtection) < 0 )
    {
      if ( v39 == v8 )
      {
        ++*(_DWORD *)(a1 + 632);
        goto LABEL_36;
      }
      v31 = v39 >> 1;
      if ( v39 >> 1 < v8 )
        v31 = a2 + 0x2000;
      v39 = v31;
    }
    v12 = a2 + 4096;
    *(_QWORD *)(a1 + 160) += v39;
    if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
      v12 = *(_QWORD *)(a1 + 168);
    v13 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v37 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v37, v13, a1, a1 + 376)
      && (int)ZwAllocateVirtualMemory(-1LL, &v38, 0LL, &v37, 4096, HeapProtection) >= 0
      && (unsigned __int8)RtlpInitializeHeapSegment(a1, v38, 112, v15, 2, v38, v38 + v37, v38 + v39 - 4096) )
    {
      v22 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v16, v17, v18) )
        v23 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v23 = 2147353472LL;
      if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapCommit(a1, v38, v37, 4LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v33, v32, v34, v35) )
          v22 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v38 + 64), v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v22);
      }
      v27 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v23, v19, v20, v21) )
        v28 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v28 = 2147353482LL;
      if ( *(_BYTE *)v28 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v28, v24, v25, v26) )
          v27 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v38 + 64), v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v27);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v28, v24, v25, v26) )
        v29 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v29 = 2147353480LL;
      if ( *(_BYTE *)v29 )
        RtlpHeapLogRangeReserve(a1, v38, v39);
      v30 = *(_QWORD *)(v38 + 64);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v30 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v30 + 11) != (*(_BYTE *)(v30 + 8) ^ (unsigned __int8)(*(_BYTE *)(v30 + 9) ^ *(_BYTE *)(v30 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v30);
      }
      return *(_QWORD *)(v38 + 64);
    }
    RtlpSecMemFreeVirtualMemory(v14, &v38, &v39, 0x8000LL);
  }
LABEL_36:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v36 = RtlpCoalesceHeap(a1);
    v4 = (_BYTE *)v36;
    if ( v36 )
    {
      if ( *(unsigned __int16 *)(v36 + 8) >= a2 )
        return v36;
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
