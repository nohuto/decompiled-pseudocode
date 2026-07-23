/*
 * XREFs of ZwRequestPort @ 0x14041D720
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
