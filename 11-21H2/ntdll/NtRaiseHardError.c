/*
 * XREFs of NtRaiseHardError @ 0x1800A6E60
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpReportError @ 0x18007E00C (LdrpReportError.c)
 *     LdrpProcessMachineMismatch @ 0x18008F9C0 (LdrpProcessMachineMismatch.c)
 *     LdrpInitializationFailure @ 0x180091F40 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 368LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
