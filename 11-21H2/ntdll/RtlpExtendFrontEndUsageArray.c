/*
 * XREFs of RtlpExtendFrontEndUsageArray @ 0x180053B0C
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180053710 (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpExtendFrontEndUsageArray(__int64 a1, unsigned __int16 a2)
{
  char *Heap; // rax
  char *v5; // rsi
  const void *v6; // rdx

  if ( a2 <= *(_WORD *)(a1 + 432) )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(a1, 0x80000Au, 2LL * a2);
  v5 = Heap;
  if ( Heap )
  {
    *(Heap - 1) = 1;
    v6 = *(const void **)(a1 + 424);
    if ( v6 )
    {
      memmove(Heap, v6, 2LL * *(unsigned __int16 *)(a1 + 432));
      RtlFreeHeap(a1, 2u, *(_QWORD *)(a1 + 424));
    }
    *(_QWORD *)(a1 + 424) = v5;
    *(_WORD *)(a1 + 432) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
