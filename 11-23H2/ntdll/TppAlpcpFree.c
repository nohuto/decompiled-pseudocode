/*
 * XREFs of TppAlpcpFree @ 0x1800869E0
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18002FDF0 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppAlpcpFree(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 - 9;
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  v2[7] = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v2);
}
