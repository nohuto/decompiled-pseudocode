/*
 * XREFs of ZwGetContextThread @ 0x14041C5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
