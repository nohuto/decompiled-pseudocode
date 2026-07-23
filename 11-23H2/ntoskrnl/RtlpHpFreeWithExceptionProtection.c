/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1405AA370
 * Callers:
 *     RtlFreeHeap @ 0x14034CBA0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14034CC04 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B4F24 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
