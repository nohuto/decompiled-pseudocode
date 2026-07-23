/*
 * XREFs of ZwSetInformationFile @ 0x1800A4550
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180008BCC (EtwpCreateFile.c)
 *     TpBindFileToDirect @ 0x18007D6F8 (TpBindFileToDirect.c)
 *     EtwpFinalizeLogFileHeader @ 0x180090B9C (EtwpFinalizeLogFileHeader.c)
 *     LdrpResSetFilePointer @ 0x1800EFEC0 (LdrpResSetFilePointer.c)
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
