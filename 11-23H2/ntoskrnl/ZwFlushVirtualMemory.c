/*
 * XREFs of ZwFlushVirtualMemory @ 0x14041CBA0
 * Callers:
 *     DifZwFlushVirtualMemoryWrapper @ 0x1405F07D0 (DifZwFlushVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
