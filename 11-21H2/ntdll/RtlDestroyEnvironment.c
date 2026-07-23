/*
 * XREFs of RtlDestroyEnvironment @ 0x180086DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  return 0;
}
