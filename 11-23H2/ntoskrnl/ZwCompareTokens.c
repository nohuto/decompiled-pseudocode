/*
 * XREFs of ZwCompareTokens @ 0x14041C4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstTokenHandle);
}
