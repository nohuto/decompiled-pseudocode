/*
 * XREFs of ZwCreateIoRing @ 0x14041BCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIoRing(
        PHANDLE IoRingHandle,
        ULONG CreateParametersLength,
        PVOID CreateParameters,
        ULONG OutputParametersLength,
        PVOID OutputParameters)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingHandle);
}
