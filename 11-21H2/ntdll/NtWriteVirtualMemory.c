/*
 * XREFs of NtWriteVirtualMemory @ 0x1800A47B0
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BD0C (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x18010BCB0 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801264F8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  NTSTATUS result; // eax

  result = 58;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
