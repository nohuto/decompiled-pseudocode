/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x14041BFB0
 * Callers:
 *     PspSetupReservedUserMappings @ 0x1407DEE9C (PspSetupReservedUserMappings.c)
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
  return KiServiceInternal(ProcessHandle);
}
