/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x1407A3E20
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateVirtualMemory @ 0x1407A3E80 (MmAllocateVirtualMemory.c)
 */

NTSTATUS __cdecl NtAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  ULONGLONG ullMultiplicand; // [rsp+30h] [rbp-38h]

  LODWORD(ullMultiplicand) = ExtendedParameterCount;
  return MmAllocateVirtualMemory(
           (int)ProcessHandle,
           (int)BaseAddress,
           (int)RegionSize,
           AllocationType,
           PageProtection,
           ExtendedParameters,
           ullMultiplicand,
           KeGetCurrentThread()->PreviousMode,
           0,
           0,
           0LL);
}
