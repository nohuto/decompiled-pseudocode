/*
 * XREFs of NtQueryInformationFile @ 0x18009F010
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800EEF78 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800EFC5C (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x180109AF8 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x18010C010 (RtlIsPartialPlaceholderFileHandle.c)
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
