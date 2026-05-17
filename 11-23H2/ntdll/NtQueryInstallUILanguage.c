/*
 * XREFs of NtQueryInstallUILanguage @ 0x1800A39E0
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x180012D30 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008E420 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1801147B0 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180115154 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1801154B0 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180115980 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInstallUILanguage()
{
  __int64 result; // rax

  result = 346LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
