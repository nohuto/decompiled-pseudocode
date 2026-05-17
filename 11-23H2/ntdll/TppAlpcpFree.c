/*
 * XREFs of TppAlpcpFree @ 0x1800869E0
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18002FDF0 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall TppAlpcpFree(_QWORD *a1)
{
  __int64 v2; // rdi

  v2 = (__int64)(a1 - 9);
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  *(_QWORD *)(v2 + 56) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v2);
}
