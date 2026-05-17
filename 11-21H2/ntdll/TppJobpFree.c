/*
 * XREFs of TppJobpFree @ 0x18008B830
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppJobpFree(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  volatile signed __int32 *v3; // r8
  unsigned __int64 v4; // r9

  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  TppCleanupGroupMemberDestroy(a1, v2, v3, v4);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, (__int64)(a1 - 9));
}
