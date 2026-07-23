/*
 * XREFs of ZwContinue @ 0x14041AF00
 * Callers:
 *     RtlRestoreContext @ 0x140428C10 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
