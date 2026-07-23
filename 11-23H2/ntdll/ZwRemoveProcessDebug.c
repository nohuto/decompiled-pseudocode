/*
 * XREFs of ZwRemoveProcessDebug @ 0x1800A3E60
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800D7D50 (DbgUiDebugActiveProcess.c)
 *     DbgUiStopDebugging @ 0x1800D7ED0 (DbgUiStopDebugging.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  NTSTATUS result; // eax

  result = 382;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
