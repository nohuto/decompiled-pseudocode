/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1405AA2FC
 * Callers:
 *     RtlAllocateHeap @ 0x14034CC80 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14034CCD8 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B4F24 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
