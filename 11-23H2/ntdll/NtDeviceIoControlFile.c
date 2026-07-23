/*
 * XREFs of NtDeviceIoControlFile @ 0x1800A0F90
 * Callers:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18005F91C (RtlQueryVolumeDiskSpeedPolicy.c)
 *     SaferpIsDllAllowed @ 0x180073B64 (SaferpIsDllAllowed.c)
 *     GetProcessIptTrace @ 0x18012CBFC (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012CD58 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18012D150 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 7;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
