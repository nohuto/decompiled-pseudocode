/*
 * XREFs of NtWriteFile @ 0x18009EEF0
 * Callers:
 *     EtwpFlushBuffer @ 0x18005E4D4 (EtwpFlushBuffer.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005E754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800F9400 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800F9750 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800F9AF8 (RtlpGetSetBootStatusData.c)
 *     EtwpWriteBufferCompressed @ 0x18012524C (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x18012547C (EtwpWriteRemainingCompressedData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = 8;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
