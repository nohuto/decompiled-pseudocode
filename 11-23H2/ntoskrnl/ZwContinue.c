/*
 * XREFs of ZwContinue @ 0x14041B950
 * Callers:
 *     RtlRestoreContext @ 0x140429660 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
