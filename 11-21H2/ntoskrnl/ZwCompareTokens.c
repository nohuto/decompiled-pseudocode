/*
 * XREFs of ZwCompareTokens @ 0x14041CB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  _disable();
  __readeflags();
  return sub_140433F80(FirstTokenHandle, SecondTokenHandle);
}
