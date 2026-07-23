/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x14041DC40
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140207E54 (CmSiPrefetchVirtualMemoryRange.c)
 *     RtlDisableXfgOnTarget @ 0x1405B1DE8 (RtlDisableXfgOnTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
