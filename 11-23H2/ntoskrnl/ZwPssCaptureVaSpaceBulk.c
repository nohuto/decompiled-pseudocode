/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x14041D990
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
