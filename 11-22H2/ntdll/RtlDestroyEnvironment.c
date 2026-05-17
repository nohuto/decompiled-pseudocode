/*
 * XREFs of RtlDestroyEnvironment @ 0x180082AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDestroyEnvironment(__int64 a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
