/*
 * XREFs of KeRegisterNmiCallback @ 0x14056D120
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14056D4FC (KiRegisterNmiSxCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return (PVOID)KiRegisterNmiSxCallback(CallbackRoutine, Context);
}
