/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1800A17D0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18005B754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007BF90 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800DCA20 (LdrpCheckAppDirType.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18012D008 (RtlpQueryDiskSpacePolicyByHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVolumeInformationFile()
{
  __int64 result; // rax

  result = 73LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
