/*
 * XREFs of NtContinue @ 0x14041EAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  return NtContinueEx(ContextRecord, (PVOID)TestAlert);
}
