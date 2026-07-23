/*
 * XREFs of ZwSetInformationIoRing @ 0x14041DB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationIoRing(
        HANDLE IoRingHandle,
        ULONG IoRingInformationClass,
        ULONG IoRingInformationLength,
        PVOID IoRingInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingHandle);
}
