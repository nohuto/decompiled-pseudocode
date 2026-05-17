/*
 * XREFs of RtlpCheckHeapSignature @ 0x180029E7C
 * Callers:
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180029EC0 (RtlLockHeap.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x180105FDC (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180107838 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180107AE8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
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
