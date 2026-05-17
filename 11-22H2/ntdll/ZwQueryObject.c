/*
 * XREFs of ZwQueryObject @ 0x18009EFF0
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001C70 (RtlpWow64SuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x1800E68D8 (RtlpWow64SuspendProcess.c)
 *     PsspWalkHandleTable @ 0x180129A04 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryObject()
{
  __int64 result; // rax

  result = 16LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
