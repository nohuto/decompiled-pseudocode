/*
 * XREFs of RtlpFindUCREntry @ 0x1800464EC
 * Callers:
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpInsertUCRBlock @ 0x180046444 (RtlpInsertUCRBlock.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x180044AD0 (RtlpHeapFindListLookupEntry.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180116718 (RtlpHeapHandleError.c)
 */

__int64 *__fastcall RtlpFindUCREntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 *result; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    RtlpHeapHandleError(1LL);
  }
  v4 = *(_QWORD *)(a1 + 320);
  if ( v4 )
  {
    v6 = *(unsigned int *)(v4 + 8);
    v7 = a2 >> 12;
    while ( v7 >= v6 )
    {
      v8 = *(_QWORD *)v4;
      if ( !*(_QWORD *)v4 )
      {
        LODWORD(v7) = *(_DWORD *)(v4 + 8) - 1;
        return RtlpHeapFindListLookupEntry(a1, v4, 0, v7, a2);
      }
      v4 = *(_QWORD *)v4;
      v6 = *(unsigned int *)(v8 + 8);
    }
    return RtlpHeapFindListLookupEntry(a1, v4, 0, v7, a2);
  }
  else
  {
    for ( result = *(__int64 **)(a1 + 240); (__int64 *)(a1 + 240) != result; result = (__int64 *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (__int64 *)(a1 + 240);
  }
}
