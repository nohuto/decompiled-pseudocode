/*
 * XREFs of RtlpCreateUCREntry @ 0x1800462CC
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x180047D5C (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpInsertUCRBlock @ 0x180046444 (RtlpInsertUCRBlock.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180116718 (RtlpHeapHandleError.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpCreateUCREntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  bool v12; // cc
  bool v13; // zf
  unsigned __int64 v14; // rax
  __int64 *result; // rax

  *(_QWORD *)(a3 + 40) = a4;
  v6 = a3 - 16;
  *(_BYTE *)(v6 + 15) = 3;
  *(_QWORD *)(a3 + 32) = a3 + 48;
  *(_DWORD *)(v6 + 8) = 65540;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((v6 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3, v10, a3 - 16, a2, 0LL, 0LL);
  }
  v12 = RtlpHeapErrorHandlerThreshold < 1;
  *(_BYTE *)(v6 + 14) = v11;
  if ( v12 )
  {
    v13 = a5 == v6;
    goto LABEL_5;
  }
  v13 = a5 == v6;
  if ( a5 <= v6 )
  {
LABEL_5:
    if ( v13 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
  RtlpHeapHandleError(1LL);
LABEL_6:
  *(_WORD *)(v6 + 12) = *(_WORD *)(a1 + 140);
LABEL_7:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  RtlpInsertUCRBlock(a1, a3);
  ++*(_DWORD *)(a2 + 84);
  *(_DWORD *)(a2 + 80) += *(_QWORD *)(a3 + 40) >> 12;
  *(_QWORD *)(a1 + 576) -= *(_QWORD *)(a3 + 40);
  if ( ++*(_DWORD *)(a1 + 604) > 0xAu
    && !*(_QWORD *)(a1 + 320)
    && (*(_DWORD *)(a1 + 112) & 3) == 2
    && (RtlpDisableHeapLookaside & 1) == 0 )
  {
    *(_DWORD *)(a1 + 120) |= 0x10000000u;
  }
  v14 = *(_QWORD *)(a3 + 40);
  if ( v14 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v14;
  result = a6;
  *a6 = (__int64)(v6 - a5) >> 4;
  return result;
}
