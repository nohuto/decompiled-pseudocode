/*
 * XREFs of NtReadFile @ 0x1800A4130
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x180090B9C (EtwpFinalizeLogFileHeader.c)
 *     LdrpResReadFile @ 0x1800EF728 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800F8FF0 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800F9888 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
