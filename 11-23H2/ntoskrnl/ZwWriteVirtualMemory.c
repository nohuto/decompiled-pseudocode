/*
 * XREFs of ZwWriteVirtualMemory @ 0x14041B830
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1D74 (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
