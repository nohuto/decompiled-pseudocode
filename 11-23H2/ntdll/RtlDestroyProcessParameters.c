/*
 * XREFs of RtlDestroyProcessParameters @ 0x180085FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyProcessParameters(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessParameters);
  return 0;
}
