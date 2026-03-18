/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1405E5190
 * Callers:
 *     RtlFreeHeap @ 0x140371770 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1403717D4 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405F1AA4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
