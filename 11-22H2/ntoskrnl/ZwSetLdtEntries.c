/*
 * XREFs of ZwSetLdtEntries @ 0x14041DCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetLdtEntries(
        ULONG Selector0,
        ULONG Entry0Low,
        ULONG Entry0Hi,
        ULONG Selector1,
        ULONG Entry1Low,
        ULONG Entry1Hi)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Selector0);
}
