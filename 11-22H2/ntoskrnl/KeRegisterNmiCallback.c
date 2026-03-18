/*
 * XREFs of KeRegisterNmiCallback @ 0x14056CB00
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14056CEDC (KiRegisterNmiSxCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return (PVOID)KiRegisterNmiSxCallback(CallbackRoutine, Context);
}
