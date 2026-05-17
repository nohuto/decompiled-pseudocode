/*
 * XREFs of ZwQueryObject @ 0x1800A4270
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001A20 (RtlpWow64SuspendThread.c)
 *     PsspWalkHandleTable @ 0x180061930 (PsspWalkHandleTable.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
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
