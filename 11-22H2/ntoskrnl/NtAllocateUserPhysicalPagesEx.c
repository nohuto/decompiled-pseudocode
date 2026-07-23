/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x140A42370
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPagesEx(
        HANDLE ProcessHandle,
        PULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  ULONGLONG ullMultiplicand; // [rsp+20h] [rbp-18h]

  LODWORD(ullMultiplicand) = ExtendedParameterCount;
  return MiAllocateUserPhysicalPages(
           ProcessHandle,
           NumberOfPages,
           UserPfnArray,
           (unsigned __int64 *)ExtendedParameters,
           ullMultiplicand);
}
