/*
 * XREFs of ZwQueryVirtualMemory @ 0x14041BBC0
 * Callers:
 *     sub_14036FD8C @ 0x14036FD8C (sub_14036FD8C.c)
 *     sub_140374FC8 @ 0x140374FC8 (sub_140374FC8.c)
 *     sub_14056E34C @ 0x14056E34C (sub_14056E34C.c)
 *     sub_1405EE7E0 @ 0x1405EE7E0 (sub_1405EE7E0.c)
 *     sub_1405F7344 @ 0x1405F7344 (sub_1405F7344.c)
 *     sub_1405F7B94 @ 0x1405F7B94 (sub_1405F7B94.c)
 *     sub_1406734EC @ 0x1406734EC (sub_1406734EC.c)
 *     sub_1406D98F8 @ 0x1406D98F8 (sub_1406D98F8.c)
 *     sub_1407E4008 @ 0x1407E4008 (sub_1407E4008.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     sub_1409AF728 @ 0x1409AF728 (sub_1409AF728.c)
 *     sub_1409B16A8 @ 0x1409B16A8 (sub_1409B16A8.c)
 *     sub_1409E6BB0 @ 0x1409E6BB0 (sub_1409E6BB0.c)
 *     sub_1409E7AD4 @ 0x1409E7AD4 (sub_1409E7AD4.c)
 *     sub_1409E8614 @ 0x1409E8614 (sub_1409E8614.c)
 *     sub_140AA4550 @ 0x140AA4550 (sub_140AA4550.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
