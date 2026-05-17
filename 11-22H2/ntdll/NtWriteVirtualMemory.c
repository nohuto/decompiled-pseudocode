/*
 * XREFs of NtWriteVirtualMemory @ 0x18009F530
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800E1280 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x18010BE80 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18012AA4C (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012AFB8 (PsspDuplicateSnapshotRemoteToRemote.c)
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
