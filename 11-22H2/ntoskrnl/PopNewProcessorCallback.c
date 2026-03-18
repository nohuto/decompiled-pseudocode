/*
 * XREFs of PopNewProcessorCallback @ 0x1409804D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x140822434 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmEnableWmiInterface @ 0x140851AF0 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x140864E10 (PopCheckSkipTick.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoSkipTickMode && PopSkipTickPolicy == 1 )
      PoSkipTickMode = !PopCheckSkipTick();
    PpmCheckInitProcessors(0, 1);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
