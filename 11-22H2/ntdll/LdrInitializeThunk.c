/*
 * XREFs of LdrInitializeThunk @ 0x180073E50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180073E78 (LdrpInitialize.c)
 *     ZwContinue @ 0x18009F650 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
