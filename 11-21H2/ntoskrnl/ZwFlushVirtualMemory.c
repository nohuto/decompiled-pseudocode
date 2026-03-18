/*
 * XREFs of ZwFlushVirtualMemory @ 0x14041D580
 * Callers:
 *     DifZwFlushVirtualMemoryWrapper @ 0x140620920 (DifZwFlushVirtualMemoryWrapper.c)
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
