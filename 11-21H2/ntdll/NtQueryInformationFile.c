/*
 * XREFs of NtQueryInformationFile @ 0x1800A4290
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800EF240 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800EFF04 (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x180109A28 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x18010BE50 (RtlIsPartialPlaceholderFileHandle.c)
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
