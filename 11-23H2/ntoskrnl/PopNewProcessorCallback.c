/*
 * XREFs of PopNewProcessorCallback @ 0x140980620
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x140822478 (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 *     PpmEnableWmiInterface @ 0x140850EE0 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x140864C30 (PopCheckSkipTick.c)
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
