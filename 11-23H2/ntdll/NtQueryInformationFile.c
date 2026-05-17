/*
 * XREFs of NtQueryInformationFile @ 0x1800A10D0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800F0388 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800F106C (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x18010AF98 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x18010D4B0 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
