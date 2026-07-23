/*
 * XREFs of NtQueryDefaultLocale @ 0x1800A4310
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x180066B4C (LdrResFallbackLangList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  NTSTATUS result; // eax

  result = 21;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
