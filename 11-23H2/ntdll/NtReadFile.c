/*
 * XREFs of NtReadFile @ 0x1800A0F70
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18005B754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpResReadFile @ 0x1800F0870 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800FA650 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800FAF08 (RtlpGetSetBootStatusData.c)
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
