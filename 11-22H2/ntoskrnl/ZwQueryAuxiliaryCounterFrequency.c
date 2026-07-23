/*
 * XREFs of ZwQueryAuxiliaryCounterFrequency @ 0x14041CF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AuxiliaryCounterFrequency);
}
