/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1409748E0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14036E840 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
