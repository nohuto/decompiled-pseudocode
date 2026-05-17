/*
 * XREFs of RtlpFindAndCommitPages @ 0x180020B1C
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCreateUCREntry @ 0x180020E2C (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1800210AC (RtlpFindUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x180021140 (RtlpRemoveUCRBlock.c)
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x18002283C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(unsigned __int64 a1, unsigned __int64 *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v34; // [rsp+50h] [rbp+8h] BYREF

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
  v34 = *(_QWORD *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v15 = ((__int64 (__fastcall *)(unsigned __int64, __int64 *, unsigned __int64 *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &v34,
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
    v10 = RtlpHpHeapValidateProtection(a1, (*(_DWORD *)(a1 + 112) & 0x40000) != 0 ? 64 : 4);
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(*a2, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
      v15 = ZwAllocateVirtualMemory(-1LL, &v34, 0LL, a2, 4096, v10);
    else
      v15 = -1073741523;
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v15 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v16 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11, v13, v14) )
    v17 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, v34, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v5 - 16);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  RtlpRemoveUCRBlock(a1, v5);
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v19 = *(_QWORD *)(v5 + 40);
  if ( v19 >= 0xFF000 )
  {
    *(_QWORD *)(a1 + 584) -= v19;
    v19 = *(_QWORD *)(v5 + 40);
  }
  v20 = *a2;
  if ( v19 > *a2 || (v21 = v19 + *(_QWORD *)(v5 + 32), v21 == *(_QWORD *)(v8 + 72)) )
  {
    RtlpCreateUCREntry(a1, v8, *(_DWORD *)(v5 + 32) + v20 - 48, v19 - v20, v5 - 16, (__int64)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v20 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v22 = *(_QWORD *)(v8 + 40);
  if ( v22 == v8 )
  {
    LOBYTE(v23) = 0;
  }
  else
  {
    v23 = ((v6 - v8) >> 16) + 1;
    if ( v23 >= 0xFE )
      RtlpLogHeapFailure(3, v22, v6, v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v23;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v22, v18, v19) )
    v27 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v27 = 2147353472LL;
  if ( *(_BYTE *)v27 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v24, v25, v26) )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v16);
  }
  v31 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v24, v25, v26) )
    v32 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v32 = 2147353482LL;
  if ( *(_BYTE *)v32 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v32, v28, v29, v30) )
      v31 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v31);
  }
  return v6;
}
