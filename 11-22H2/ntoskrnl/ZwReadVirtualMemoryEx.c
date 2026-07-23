/*
 * XREFs of ZwReadVirtualMemoryEx @ 0x14041D540
 * Callers:
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
