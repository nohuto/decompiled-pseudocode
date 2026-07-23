/*
 * XREFs of RtlDestroyProcessParameters @ 0x180089370
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyProcessParameters(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessParameters);
  return 0;
}
