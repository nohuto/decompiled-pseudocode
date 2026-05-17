/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x1800A0D80
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A754 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008DC20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180113300 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetMUIRegistryInfo()
{
  __int64 result; // rax

  result = 253LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
