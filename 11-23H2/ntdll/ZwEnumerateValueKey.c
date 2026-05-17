/*
 * XREFs of ZwEnumerateValueKey @ 0x1800A1110
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180008C2C (RtlpQueryRegistryValues.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EAB00 (RtlpLookupSafeCurDirList.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EF610 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x1801144A8 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180114EB0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1801154B0 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwEnumerateValueKey()
{
  __int64 result; // rax

  result = 19LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
