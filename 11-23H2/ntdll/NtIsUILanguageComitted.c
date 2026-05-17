/*
 * XREFs of NtIsUILanguageComitted @ 0x1800A2FE0
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x180012D30 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800FCEB0 (RtlpSetInstallLanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180115154 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1801154B0 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180115980 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtIsUILanguageComitted()
{
  __int64 result; // rax

  result = 266LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
