/*
 * XREFs of RtlpCheckHeapSignature @ 0x18002A04C
 * Callers:
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104364 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x180104BCC (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105124 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180105448 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105DC8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180106114 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1801066D8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180106768 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckHeapSignature(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  RtlpBreakPointHeap();
  return 0;
}
