/*
 * XREFs of TppAlpcpFree @ 0x1800861E0
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18002FFC0 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall TppAlpcpFree(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  volatile signed __int32 *v4; // r8
  __int64 v5; // r9

  v2 = (__int64)(a1 - 9);
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  *(_QWORD *)(v2 + 56) = 0LL;
  TppCleanupGroupMemberDestroy(a1, v3, v4, v5);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v2);
}
