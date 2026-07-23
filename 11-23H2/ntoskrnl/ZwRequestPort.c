/*
 * XREFs of ZwRequestPort @ 0x14041E170
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031CDB8 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
