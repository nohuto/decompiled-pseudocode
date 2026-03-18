/*
 * XREFs of KeRegisterNmiCallback @ 0x14056CA60
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterNmiSxCallback @ 0x14056CE3C (KiRegisterNmiSxCallback.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return (PVOID)KiRegisterNmiSxCallback(CallbackRoutine, Context);
}
