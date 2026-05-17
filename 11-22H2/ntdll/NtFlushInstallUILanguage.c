/*
 * XREFs of NtFlushInstallUILanguage @ 0x1800A0BA0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008DC20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800FBAA0 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x180113300 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 NtFlushInstallUILanguage()
{
  __int64 result; // rax

  result = 238LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
