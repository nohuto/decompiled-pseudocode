/*
 * XREFs of ZwCompleteConnectPort @ 0x14041BAA0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompleteConnectPort(HANDLE PortHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
