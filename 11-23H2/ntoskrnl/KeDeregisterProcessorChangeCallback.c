/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1409746E0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14036E6A0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
