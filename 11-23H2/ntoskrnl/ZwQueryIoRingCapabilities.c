/*
 * XREFs of ZwQueryIoRingCapabilities @ 0x14041DC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryIoRingCapabilities(SIZE_T IoRingCapabilitiesLength, PVOID IoRingCapabilities)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingCapabilitiesLength);
}
