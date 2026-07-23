/*
 * XREFs of ZwContinueEx @ 0x14041C550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinueEx(PCONTEXT ContextRecord, PVOID ContinueArgument)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
