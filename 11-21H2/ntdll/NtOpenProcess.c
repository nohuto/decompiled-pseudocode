/*
 * XREFs of NtOpenProcess @ 0x1800A4530
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64OpenThreadProcess @ 0x180001BCC (RtlpWow64OpenThreadProcess.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000230C (RtlpChangeQueryDebugBufferTarget.c)
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
