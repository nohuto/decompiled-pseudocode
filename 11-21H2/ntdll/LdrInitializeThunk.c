/*
 * XREFs of LdrInitializeThunk @ 0x18007B1A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x18007B1C8 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A48D0 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
