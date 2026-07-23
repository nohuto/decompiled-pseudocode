/*
 * XREFs of NtQueryInstallUILanguage @ 0x1800A39E0
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x180012D30 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008E420 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180114780 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180115124 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180115480 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180115950 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  NTSTATUS result; // eax

  result = 346;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
