/*
 * XREFs of ZwRegisterThreadTerminatePort @ 0x14041E030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRegisterThreadTerminatePort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
