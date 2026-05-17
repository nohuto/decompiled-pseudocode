/*
 * XREFs of NtWriteVirtualMemory @ 0x1800A15F0
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x18010D320 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012BEFC (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C484 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
