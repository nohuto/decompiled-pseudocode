/*
 * XREFs of ZwCompareObjects @ 0x14041C490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstObjectHandle);
}
