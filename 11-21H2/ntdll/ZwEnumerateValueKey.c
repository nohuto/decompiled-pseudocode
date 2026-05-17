/*
 * XREFs of ZwEnumerateValueKey @ 0x1800A42D0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180009D1C (RtlpQueryRegistryValues.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EA470 (RtlpLookupSafeCurDirList.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x180112B9C (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1801135A0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180113B9C (_RtlpMuiRegPopulateBaseLanguages.c)
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
