/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x14041E430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultHardErrorPort);
}
