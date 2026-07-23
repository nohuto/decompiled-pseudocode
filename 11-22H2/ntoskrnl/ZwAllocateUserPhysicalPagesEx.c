/*
 * XREFs of ZwAllocateUserPhysicalPagesEx @ 0x14041B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateUserPhysicalPagesEx(
        HANDLE ProcessHandle,
        PULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
