/*
 * XREFs of ZwSetInformationFile @ 0x18009F2D0
 * Callers:
 *     TpBindFileToDirect @ 0x18004BDD4 (TpBindFileToDirect.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005E754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180060DEC (EtwpCreateFile.c)
 *     LdrpResSetFilePointer @ 0x1800EFC18 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
