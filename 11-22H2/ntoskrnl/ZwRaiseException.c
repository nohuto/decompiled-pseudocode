/*
 * XREFs of ZwRaiseException @ 0x14041D4E0
 * Callers:
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404290E0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
