/*
 * XREFs of TppAlpcpFree @ 0x18008A250
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall TppAlpcpFree(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  volatile signed __int32 *v4; // r8
  unsigned __int64 v5; // r9

  v2 = (__int64)(a1 - 9);
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  *(_QWORD *)(v2 + 56) = 0LL;
  TppCleanupGroupMemberDestroy(a1, v3, v4, v5);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v2);
}
