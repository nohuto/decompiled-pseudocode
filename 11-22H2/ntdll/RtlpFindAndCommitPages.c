/*
 * XREFs of RtlpFindAndCommitPages @ 0x18004612C
 * Callers:
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x18004642C (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18004664C (RtlpFindUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x180046740 (RtlpRemoveUCRBlock.c)
 *     RtlpGetHeapProtection @ 0x180046824 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047384 (RtlpHpHeapCheckCommitLimit.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180115298 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180117254 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(unsigned __int64 a1, unsigned __int64 *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  int HeapProtection; // r15d
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v6 = v5 - 16;
  v7 = *(unsigned __int8 *)(v5 - 16 + 14);
  if ( (_BYTE)v7 )
    v8 = (v6 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
  else
    v8 = a1;
  v25 = *(_QWORD *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v11 = ((__int64 (__fastcall *)(unsigned __int64, __int64 *, unsigned __int64 *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &v25,
            a2);
  }
  else
  {
    v9 = *a2;
    if ( *(_QWORD *)(v5 + 40) - *a2 <= 16LL * *(_QWORD *)(a1 + 176)
      && *(_QWORD *)(v5 + 40) < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      v9 = *(_QWORD *)(v5 + 40);
    }
    *a2 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    HeapProtection = RtlpGetHeapProtection(a1, 1LL);
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(*a2, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
      v11 = ZwAllocateVirtualMemory(-1LL, &v25, 0LL, a2, 4096, HeapProtection);
    else
      v11 = -1073741523;
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v11 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v14 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v15 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v15 = 2147353472LL;
  if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, v25, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v5 - 16, v12);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  RtlpRemoveUCRBlock(a1, v5, v12, v13);
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v16 = *(_QWORD *)(v5 + 40);
  if ( v16 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v16;
  v17 = *(_QWORD *)(v5 + 40);
  v18 = *a2;
  if ( v17 > *a2 || v17 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v8 + 72) )
  {
    RtlpCreateUCREntry(a1, v8, v18 - 48 + *(_QWORD *)(v5 + 32), v17 - v18, v5 - 16, (__int64)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v18 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v19 = *(_QWORD *)(v8 + 40);
  if ( v19 == v8 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((v6 - v8) >> 16) + 1;
    if ( v20 >= 0xFE )
      RtlpLogHeapFailure(3, v19, v6, v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v20;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v21 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v21 = 2147353472LL;
  if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v14);
  }
  v22 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v23 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v23 = 2147353482LL;
  if ( *(_BYTE *)v23 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v22 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v22);
  }
  return v6;
}
