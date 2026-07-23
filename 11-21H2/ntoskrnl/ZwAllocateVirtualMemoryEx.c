/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x14041C620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
