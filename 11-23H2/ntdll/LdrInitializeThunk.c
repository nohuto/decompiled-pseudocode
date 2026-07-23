/*
 * XREFs of LdrInitializeThunk @ 0x1800744C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x1800744E8 (LdrpInitialize.c)
 *     ZwContinue @ 0x1800A1710 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
