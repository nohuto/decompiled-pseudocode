/*
 * XREFs of ZwSetInformationFile @ 0x1800A1390
 * Callers:
 *     TpBindFileToDirect @ 0x18004BC74 (TpBindFileToDirect.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005B754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x18005DF5C (EtwpCreateFile.c)
 *     LdrpResSetFilePointer @ 0x1800F1028 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 39;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
