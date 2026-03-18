/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1405A9E00
 * Callers:
 *     RtlFreeHeap @ 0x14034CA00 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14034CA64 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B49B4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
