/*
 * XREFs of RtlValidateProcessHeapsCallback @ 0x1800FE590
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 */

__int64 __fastcall RtlValidateProcessHeapsCallback(void *a1)
{
  return RtlValidateHeap(a1, 0, 0LL) == 0 ? 0xC0000001 : 0;
}
