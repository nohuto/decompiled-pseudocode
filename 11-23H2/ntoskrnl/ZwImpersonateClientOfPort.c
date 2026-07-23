/*
 * XREFs of ZwImpersonateClientOfPort @ 0x14041B4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
