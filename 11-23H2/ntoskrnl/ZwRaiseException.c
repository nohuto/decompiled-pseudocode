/*
 * XREFs of ZwRaiseException @ 0x14041DF30
 * Callers:
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030D820 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x140429B30 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
