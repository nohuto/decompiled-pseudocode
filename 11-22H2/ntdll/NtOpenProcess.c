/*
 * XREFs of NtOpenProcess @ 0x18009F2B0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001E1C (RtlpWow64OpenThreadProcess.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000270C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryCriticalSectionOwner @ 0x1800E2FBC (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcess()
{
  __int64 result; // rax

  result = 38LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
