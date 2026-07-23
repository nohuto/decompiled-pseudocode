/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x14041B640
 * Callers:
 *     DifZwAlpcCreateResourceReserveWrapper @ 0x1405ED3A0 (DifZwAlpcCreateResourceReserveWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
