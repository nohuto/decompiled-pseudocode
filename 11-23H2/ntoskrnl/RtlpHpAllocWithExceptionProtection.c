/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1405A9D8C
 * Callers:
 *     RtlAllocateHeap @ 0x14034CAE0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14034CB38 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B49B4 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
