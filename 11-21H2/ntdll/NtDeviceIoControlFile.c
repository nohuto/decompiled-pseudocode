/*
 * XREFs of NtDeviceIoControlFile @ 0x1800A4150
 * Callers:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18000B04C (RtlQueryVolumeDiskSpeedPolicy.c)
 *     GetProcessIptTraceSize @ 0x1800610A0 (GetProcessIptTraceSize.c)
 *     GetProcessIptTrace @ 0x180126BDC (GetProcessIptTrace.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x180126FA8 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
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
