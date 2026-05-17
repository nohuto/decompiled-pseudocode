/*
 * XREFs of NtWriteFile @ 0x1800A0FB0
 * Callers:
 *     EtwpFlushBuffer @ 0x18005B4D4 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005B754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800FA810 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800FAB60 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800FAF08 (RtlpGetSetBootStatusData.c)
 *     EtwpWriteBufferCompressed @ 0x1801266FC (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x18012692C (EtwpWriteRemainingCompressedData.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteFile()
{
  __int64 result; // rax

  result = 8LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
