/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x14041EC80
 * Callers:
 *     sub_14020B5BC @ 0x14020B5BC (sub_14020B5BC.c)
 *     sub_1405EEA98 @ 0x1405EEA98 (sub_1405EEA98.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return sub_140433F80(ProcessHandle, *(_QWORD *)&VmInformationClass);
}
