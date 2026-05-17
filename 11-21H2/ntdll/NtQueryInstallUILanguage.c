/*
 * XREFs of NtQueryInstallUILanguage @ 0x1800A6B40
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18004DCB0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180092EB0 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC470 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180112EA0 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180113838 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180113B9C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18011406C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInstallUILanguage()
{
  __int64 result; // rax

  result = 343LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
