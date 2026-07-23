/*
 * XREFs of ZwCompleteConnectPort @ 0x14041C4F0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompleteConnectPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
