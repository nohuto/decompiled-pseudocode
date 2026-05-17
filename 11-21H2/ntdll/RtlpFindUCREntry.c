/*
 * XREFs of RtlpFindUCREntry @ 0x1800210AC
 * Callers:
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpInsertUCRBlock @ 0x180020FA4 (RtlpInsertUCRBlock.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpHeapFindListLookupEntry @ 0x1800234B8 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 */

_QWORD *__fastcall RtlpFindUCREntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rdx
  _QWORD *result; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 *v8; // rax

  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    RtlpHeapHandleError(1LL);
  }
  v4 = *(__int64 **)(a1 + 320);
  if ( v4 )
  {
    v6 = *((unsigned int *)v4 + 2);
    v7 = a2 >> 12;
    while ( v7 >= v6 )
    {
      v8 = (__int64 *)*v4;
      if ( !*v4 )
      {
        LODWORD(v7) = *((_DWORD *)v4 + 2) - 1;
        return (_QWORD *)RtlpHeapFindListLookupEntry(a1, (_DWORD)v4, 0, v7, a2);
      }
      v4 = (__int64 *)*v4;
      v6 = *((unsigned int *)v8 + 2);
    }
    return (_QWORD *)RtlpHeapFindListLookupEntry(a1, (_DWORD)v4, 0, v7, a2);
  }
  else
  {
    for ( result = *(_QWORD **)(a1 + 240); (_QWORD *)(a1 + 240) != result; result = (_QWORD *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (_QWORD *)(a1 + 240);
  }
}
